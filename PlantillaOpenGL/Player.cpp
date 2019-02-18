#include "stdafx.h"
#include "Player.h"
#include "Bala.h"

#include <stdio.h>
#include <stdlib.h>
#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;


Player::Player()
{
	colorR = 1.0f;
	colorG = 1.0f;
	colorB = 1.0f;

	vidas = 3;
	x = 0.3f;
	y = 0.0f;
	angulo = 0.0f;
	anguloTrayectoria = 0.0f;
	velocidadAngular = 360.0f;

	

	velocidad = 0.7f;
	aceleracion = 0.3f;
	desaceleracion = 0.2f;
	velocidadActual = 0.0f;
	tiempoDisparo = 1.0f;
	tiempoGolpe = 1.0f;
	balaActual = 0;

}


Player::~Player()
{
}

void Player::dibujar() {
	glPushMatrix();

	//transformaciones
	glTranslatef(x, y, 0.0f);
	glRotatef(angulo, 0.0f, 0.0f, 1.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(colorR, colorG, colorB);
	glVertex3f(0.0f, 0.05f, 0.0f);
	glVertex3f(0.05f, -0.05f, 0.0f);
	glVertex3f(-0.05f, -0.05f, 0.0f);
	glEnd();
	glPopMatrix();
}

void Player::mover(float tiempoDiferencial, int derecha, int izquierda, int arriba, int abajo) {

	estadoTeclaDerecha = derecha;
	estadoTeclaIzquierda = izquierda;
	estadoTeclaArriba = arriba;
	estadoTeclaAbajo = abajo;

	if (estadoTeclaDerecha == GLFW_PRESS) {
		angulo -= velocidadAngular * tiempoDiferencial;
		if (angulo < 0.0f) {
			angulo += 360.0f;
		}
	}
	if (estadoTeclaIzquierda == GLFW_PRESS) {
		angulo += velocidadAngular * tiempoDiferencial;
		if (angulo > 360.0f) {
			angulo -= 360.0f;
		}
	}
	if (estadoTeclaArriba == GLFW_PRESS) {
		anguloTrayectoria = angulo;
		if (velocidadActual <= velocidad) {
			velocidadActual += aceleracion * tiempoDiferencial;
		}
	}
	else if (velocidadActual >= 0.0f) {
		velocidadActual -= desaceleracion * tiempoDiferencial;
		if (velocidadActual < 0.0f) {
			velocidadActual = 0.0f;
		}
	}

	x += cos((anguloTrayectoria + 90.0f) * 3.14159f / 180.0f)*velocidadActual*tiempoDiferencial;
	y += sin((anguloTrayectoria + 90.0f) * 3.14159f / 180.0f)*velocidadActual*tiempoDiferencial;

	if (x < -1.1f) {
		x += 2.0f;
	}
	else if (x > 1.1f) {
		x -= 2.0f;
	}
	if (y < -1.1f) {
		y += 2.0f;
	}
	else if (y > 1.1f) {
		y -= 2.0f;
	}
}

bool Player::colision(float x, float boxDistanceX, float y, float boxDistanceY) {
	//si el triangulo colisiona con el cuadrado
	return ((this->x - 0.05f < x + boxDistanceX && this->x + 0.05f > x - boxDistanceX) && (this->y - 0.05f < y + boxDistanceY && this->y + 0.05f > y - boxDistanceY));

}

void Player::disparar(int indiceBala,float tiempoDiferencial) {
	bala[indiceBala].x = this->x;
	bala[indiceBala].y = this->y;
	bala[indiceBala].angulo = this->angulo;
}
