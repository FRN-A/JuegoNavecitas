// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
#include "Bala.h"
#include "Fondo.h"
#include "Corazon.h"
#include "Asteroide.h"

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

//Declaramos apuntador de ventana
GLFWwindow *window;

Player player1 = Player(-0.75f, -0.6f, 0.0f);
Player player2 = Player(0.75f, 0.6f, 0.0f);

Corazon corazon = Corazon();
Asteroide asteroide = Asteroide();

Fondo fondo = Fondo();

bool gameOver = false;

float xCuadrado = -0.3f;
float yCuadrado = 0.0f;

float tiempoAnterior = 0.0f;
float tiempoActual = 0.0f;
float tiempoDiferencial = 0.0f;

float anguloDisparo = 0.0f;

void dibujar() {
	fondo.dibujar();
	player1.dibujar();
	player2.dibujar();
	for (int i = 0; i < 5; i++) {
		player1.bala[i].dibujar();
		player2.bala[i].dibujar();
	}

	corazon.dibujar();
	asteroide.dibujar();
}


void actualizar() {
	//Tiempo diferencial
	tiempoActual = glfwGetTime();
	tiempoDiferencial = tiempoActual - tiempoAnterior;
	tiempoAnterior = tiempoActual;

	//Movimiento jugador 1
	int estadoTeclaDerecha = glfwGetKey(window, GLFW_KEY_RIGHT);
	int estadoTeclaIzquierda = glfwGetKey(window, GLFW_KEY_LEFT);
	int estadoTeclaArriba = glfwGetKey(window, GLFW_KEY_UP);
	int estadoTeclaAbajo = glfwGetKey(window, GLFW_KEY_DOWN);
	player2.mover(tiempoDiferencial, estadoTeclaDerecha, estadoTeclaIzquierda, estadoTeclaArriba, estadoTeclaAbajo);

	//Movimiento jugador 2
	estadoTeclaDerecha = glfwGetKey(window, GLFW_KEY_D);
	estadoTeclaIzquierda = glfwGetKey(window, GLFW_KEY_A);
	estadoTeclaArriba = glfwGetKey(window, GLFW_KEY_W);
	estadoTeclaAbajo = glfwGetKey(window, GLFW_KEY_S);
	player1.mover(tiempoDiferencial, estadoTeclaDerecha, estadoTeclaIzquierda, estadoTeclaArriba, estadoTeclaAbajo);

	//movimiento balas
	for (int i = 0; i < 5; i++) {
		player1.bala[i].mover(tiempoDiferencial);
		player2.bala[i].mover(tiempoDiferencial);
	}

	//Disparar jugador 1
	player1.tiempoDisparo += tiempoDiferencial;
	int estadoTeclaDisparo = glfwGetKey(window, GLFW_KEY_Q);
	if (estadoTeclaDisparo == GLFW_PRESS && player1.tiempoDisparo >= 1) {
		player1.disparar(player1.balaActual++, tiempoDiferencial);
		cout << "P1: disparo " << player1.balaActual << endl;
		player1.tiempoDisparo = 0;
		if (player1.balaActual >= 5) {
			player1.balaActual = 0;
		}
	}

	//disparar jugador 2
	player2.tiempoDisparo += tiempoDiferencial;
	estadoTeclaDisparo = glfwGetKey(window, GLFW_KEY_M);
	if (estadoTeclaDisparo == GLFW_PRESS && player2.tiempoDisparo >= 1) {
		player2.disparar(player2.balaActual++, tiempoDiferencial);
		cout << "P1: disparo " << player2.balaActual << endl;
		player2.tiempoDisparo = 0;
		if (player2.balaActual >= 5) {
			player2.balaActual = 0;
		}
	}

	//colisiones balas
	player1.tiempoGolpe += tiempoDiferencial;
	player2.tiempoGolpe += tiempoDiferencial;
	for (int i = 0; i < 5; i++) {
		if (player1.colision(player2.bala[i].x, 0.02f, player2.bala[i].y, 0.02f) && player1.tiempoGolpe > 1) {
			cout << "P1: golpe bala " << i + 1 << endl;
			player1.vidas -= 2;
			player1.tiempoGolpe = 0;
			cout << "P1: Vidas " << player1.vidas << endl;
			player1.colorR = 0.25f; player1.colorG = 0.0f; player1.colorB = 0.3f;
		}

		if (player1.tiempoGolpe >= 0.2f && player1.tiempoGolpe < 0.4f) {
			player1.colorR = 1.0f; player1.colorG = 1.0f; player1.colorB = 1.0f;
		}
		else if (player1.tiempoGolpe >= 0.4f && player1.tiempoGolpe < 0.6f) {
			player1.colorR = 0.25f; player1.colorG = 0.0f; player1.colorB = 0.3f;
		}
		else if (player1.tiempoGolpe >= 0.6f && player1.tiempoGolpe < 0.8f) {
			player1.colorR = 1.0f; player1.colorG = 1.0f; player1.colorB = 1.0f;
		}
		else if (player1.tiempoGolpe >= 0.8f && player1.tiempoGolpe < 1.0f) {
			player1.colorR = 0.25f; player1.colorG = 0.0f; player1.colorB = 0.3f;
		}
		else if (player1.tiempoGolpe >= 1.0f) {
			player1.colorR = 1.0f; player1.colorG = 1.0f; player1.colorB = 1.0f;
		}

		if (player2.colision(player1.bala[i].x, 0.02f, player1.bala[i].y, 0.02f) && player2.tiempoGolpe > 1) {
			cout << "P2: golpe bala " << i + 1 << endl;
			player2.vidas -= 2;
			player2.tiempoGolpe = 0;
			cout << "P2: Vidas " << player2.vidas << endl;
			player2.colorR = 0.25f; player2.colorG = 0.0f; player2.colorB = 0.3f;
		}


		if (player2.tiempoGolpe >= 0.2f && player2.tiempoGolpe < 0.4f) {
			player2.colorR = 1.0f; player2.colorG = 0.0f; player2.colorB = 1.0f;
		}
		else if (player2.tiempoGolpe >= 0.4f && player2.tiempoGolpe < 0.6f) {
			player2.colorR = 0.25f; player2.colorG = 0.0f; player2.colorB = 0.3f;
		}
		else if (player2.tiempoGolpe >= 0.6f && player2.tiempoGolpe < 0.8f) {
			player2.colorR = 1.0f; player2.colorG = 0.0f; player2.colorB = 1.0f;
		}
		else if (player2.tiempoGolpe >= 0.8f && player2.tiempoGolpe < 1.0f) {
			player2.colorR = 0.25f; player2.colorG = 0.0f; player2.colorB = 0.3f;
		}
		else if (player2.tiempoGolpe >= 1.0f) {
			player2.colorR = 1.0f; player2.colorG = 0.0f; player2.colorB = 1.0f;
		}
	}

	//corazon
	corazon.tiempo += tiempoDiferencial;
	if (corazon.tiempo > 10) {
		corazon.tiempo = 0;
		corazon.x = ((rand() % 10)/10.0f)*2-1;
		corazon.y = ((rand() % 10)/10.0f)*2-1;
	}

	//colision corazon
	if (player1.colision(corazon.x, 0.055f, corazon.y, 0.04f)) {
		if (player1.vidas < 10) {
			corazon.reset();
			player1.vidas += 2;
		}
	}
	if (player2.colision(corazon.x, 0.055f, corazon.y, 0.04f)) {
		if (player2.vidas < 10) {
			corazon.reset();
			player2.vidas += 2;
		}
	}

	//asteroide
	asteroide.tiempo += tiempoDiferencial;
	asteroide.mover(tiempoDiferencial, asteroide.anguloTrayectoria);
	if (asteroide.tiempo > 12) {
		asteroide.tiempo = 0;
		asteroide.x = ((rand() % 10) / 10.0f) * 2 - 1;
		asteroide.y = ((rand() % 10) / 10.0f) * 2 - 1;
		asteroide.anguloTrayectoria = (((rand() % 10)) * 36.0f);
	}

	

	//colision asteroide
	if (player1.colision(asteroide.x, 0.04f, asteroide.y, 0.04f)) {
			asteroide.reset();
			player1.vidas -= 2;
	}
	if (player2.colision(asteroide.x, 0.04f, asteroide.y, 0.04f)) {
			asteroide.reset();
			player2.vidas -= 2;
	}
	
	if (player1.vidas <= 0) {
		gameOver = true;
		cout << "Player 2 wins";
	}
	if (player2.vidas <= 0) {
		gameOver = true;
		cout << "Player 1 wins";
	}
	
}



int main()
{
	player2.colorG = 0;

	//si no se pudo inicializar glfw terminamos ejecución
	if (!glfwInit())
		exit(EXIT_FAILURE);

	//si se pudo iniciar GLFW entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);

	//si no podemos iniciar la ventana entonces terminamos la ejecución
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//establecemos el contexto
	glfwMakeContextCurrent(window);

	//UNa vez establecido el contexto activamos funciones modernas (CPU/GPU)
	glewExperimental = true;
	GLenum errorGlew = glewInit();

	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//glfwSetKeyCallback(window, teclado_callback);

	tiempoAnterior = glfwGetTime();

	//Cilco de dibijo (Draw loop)
	while (!glfwWindowShouldClose(window)){
		player1.reset(-0.6f, 0.0f);
		player2.reset(0.6f, 0.0f);
	
		gameOver = false;
		while (!glfwWindowShouldClose(window) && !gameOver) {


			//Establecer region de dibujo
			glViewport(0, 0, 1024, 768);
			//Esctablece el color de borrado
			glClearColor(0.05, 0.0, 0.2, 1);
			//Borramos
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

			//Rutina de dibujo
			dibujar();
			actualizar();

			//Cambiar los buffers
			glfwSwapBuffers(window);
			//Reconocer si hay entradas
			glfwPollEvents();
		}
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

