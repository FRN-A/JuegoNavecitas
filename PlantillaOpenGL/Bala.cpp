#include "stdafx.h"
#include "Bala.h"

#include <stdio.h>
#include <stdlib.h>
#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;


Bala::Bala()
{
	x = -2.0f;
	y = -2.0f;
	velocidad = 1.0f;
	angulo = 0.0f;
}


Bala::~Bala()
{
}

void Bala::dibujar(){
	glPushMatrix();

	//transformaciones
	glTranslatef(x, y, 0.0f);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.02f, 0.02f, 0.0f);
	glVertex3f(0.02f, 0.02f, 0.0f);
	glVertex3f(0.02f, -0.02f, 0.0f);
	glVertex3f(-0.02f, -0.02f, 0.0f);
	glEnd();
	glPopMatrix();
}

void Bala::mover(float tiempoDiferencial) {
	x += cos((angulo + 90.0f) * 3.14159f / 180.0f)*velocidad*tiempoDiferencial;
	y += sin((angulo + 90.0f) * 3.14159f / 180.0f)*velocidad*tiempoDiferencial;
}

void Bala::reset() {
	x = -2.0f;
	y = -2.0f;
	velocidad = 1.0f;
	angulo = 0.0f;
}