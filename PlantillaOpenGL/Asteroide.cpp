#include "stdafx.h"
#include "Asteroide.h"


#include <stdio.h>
#include <stdlib.h>
#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

Asteroide::Asteroide()
{
	x = -2.0f;
	y = -2.0f;
	tiempo = 0.0f;
	velocidad = 0.8f;
	anguloTrayectoria = 0;
}


Asteroide::~Asteroide()
{
}

void Asteroide::reset() {
	x = -2.0f;
	y = -2.0f;
	tiempo = 0.0f;
}

void Asteroide::mover(float tiempoDiferencial, float anguloTrayectoria) {
	x += cos((anguloTrayectoria + 90.0f) * 3.14159f / 180.0f)*velocidad*tiempoDiferencial;
	y += sin((anguloTrayectoria + 90.0f) * 3.14159f / 180.0f)*velocidad*tiempoDiferencial;
}

void Asteroide::dibujar() {
	//---------------------ASTEROIDE (QUITA VIDA)-------------------

		glPushMatrix();
		//transformaciones
		glTranslatef(x, y, 0.0f);
		glBegin(GL_POLYGON);

		glColor3f(1.0f, 0.0f, 0.0f);

		for (int i = 0; i < 360; i++) {
			glVertex3f(0.04 * cos((double)i * 3.14159 / 180.0), 0.04 * sin((double)i * 3.14159 / 180.0), 0);
		}

		glEnd();

	

		glBegin(GL_POLYGON);

		glColor3f(0.2f, 0.2f, 0.0f);

		for (int i = 0; i < 360; i++) {
			glVertex3f(0.01 * cos((double)i * 3.14159 / 180.0) + -0.02, 0.01 * sin((double)i * 3.14159 / 180.0) + 0.02, 0);
		}



		glEnd();


		glBegin(GL_POLYGON);

		glColor3f(0.2f, 0.2f, 0.0f);

		for (int i = 0; i < 360; i++) {
			glVertex3f(0.019 * cos((double)i * 3.14159 / 180.0) + 0.02, 0.019 * sin((double)i * 3.14159 / 180.0), 0);
		}

		glEnd();

		glBegin(GL_POLYGON);

		glColor3f(0.2f, 0.2f, 0.0f);

		for (int i = 0; i < 360; i++) {
			glVertex3f(0.013 * cos((double)i * 3.14159 / 180.0) + -0.01, 0.013 * sin((double)i * 3.14159 / 180.0) - 0.03, 0);
		}

		glEnd();

	
	//Crateres externos
	
		glBegin(GL_QUADS);

		glColor3f(1.0f, 0.0f, 0.0f);

		glVertex3f(-0.04f, 0.01f, 0.0f);
		glVertex3f(-0.04f, -0.01f, 0.0f);
		glVertex3f(-0.04f, -0.01f, 0.0f);
		glVertex3f(-0.05f, 0.01f, 0.0f);

		glEnd();
	
		glBegin(GL_POLYGON);

		glColor3f(1.0f, 0.0f, 0.0f);

		glVertex3f(0.04f, 0.0f, 0.0f);
		glVertex3f(0.03f, -0.02f, 0.0f);
		glVertex3f(0.04f, -0.02f, 0.0f);
		glVertex3f(0.05f, 0.0f, 0.0f);

		glEnd();
	
		glBegin(GL_POLYGON);

		glColor3f(1.0f, 0.0f, 0.0f);

		glVertex3f(-0.01f, 0.05f, 0.0f);
		glVertex3f(-0.01f, 0.03f, 0.0f);
		glVertex3f(0.01f, 0.03f, 0.0f);
		glVertex3f(0.01f, 0.04f, 0.0f);

		glEnd();
	
		glBegin(GL_POLYGON);

		glColor3f(1.0f, 0.0f, 0.0f);

		glVertex3f(-0.01f, -0.04f, 0.0f);
		glVertex3f(-0.01f, -0.04f, 0.0f);
		glVertex3f(0.01f, -0.05f, 0.0f);
		glVertex3f(0.01f, -0.04f, 0.0f);

		glEnd();
	
		glPopMatrix();

}
