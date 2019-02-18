// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
#include "Bala.h"

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

//Declaramos apuntador de ventana
GLFWwindow *window;

Player player1 = Player();
Player player2 = Player();

float xCuadrado = -0.3f;
float yCuadrado = 0.0f;

float tiempoAnterior = 0.0f;
float tiempoActual = 0.0f;
float tiempoDiferencial = 0.0f;

float anguloDisparo = 0.0f;

void dibujar() {
	player1.dibujar();
	player2.dibujar();
	for (int i = 0; i < 5; i++) {
		player1.bala[i].dibujar();
		player2.bala[i].dibujar();
	}
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
	player1.mover(tiempoDiferencial, estadoTeclaDerecha, estadoTeclaIzquierda, estadoTeclaArriba, estadoTeclaAbajo);

	//Movimiento jugador 2
	estadoTeclaDerecha = glfwGetKey(window, GLFW_KEY_D);
	estadoTeclaIzquierda = glfwGetKey(window, GLFW_KEY_A);
	estadoTeclaArriba = glfwGetKey(window, GLFW_KEY_W);
	estadoTeclaAbajo = glfwGetKey(window, GLFW_KEY_S);
	player2.mover(tiempoDiferencial, estadoTeclaDerecha, estadoTeclaIzquierda, estadoTeclaArriba, estadoTeclaAbajo);

	//movimiento balas
	for (int i = 0; i < 5; i++) {
		player1.bala[i].mover(tiempoDiferencial);
		player2.bala[i].mover(tiempoDiferencial);
	}

	//Disparar jugador 1
	player1.tiempoDisparo += tiempoDiferencial;
	int estadoTeclaDisparo = glfwGetKey(window, GLFW_KEY_M);
	if (estadoTeclaDisparo == GLFW_PRESS && player1.tiempoDisparo >= 1){
		player1.disparar(player1.balaActual++, tiempoDiferencial);
		cout << "P1: disparo " << player1.balaActual << endl;
		player1.tiempoDisparo = 0;
		if (player1.balaActual >= 5) {
			player1.balaActual = 0;
		}
	}

	//disparar jugador 2
	player2.tiempoDisparo += tiempoDiferencial;
	estadoTeclaDisparo = glfwGetKey(window, GLFW_KEY_Q);
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
			player1.vidas -= 1;
			player1.tiempoGolpe = 0;
			cout << "P1: Vidas " << player1.vidas << endl;
		}
		if (player2.colision(player1.bala[i].x, 0.02f, player1.bala[i].y, 0.02f) && player2.tiempoGolpe > 1) {
			cout << "P2: golpe bala " << i + 1 << endl;
			player2.vidas -= 1;
			player2.tiempoGolpe = 0;
			cout << "P2: Vidas " << player2.vidas << endl;
		}
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
	while (!glfwWindowShouldClose(window)) {

		
		//Establecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//Esctablece el color de borrado
		glClearColor(0.25, 0, 0.3, 1);
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

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

