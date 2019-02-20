#include "stdafx.h"
#include "Corazon.h"


#include <stdio.h>
#include <stdlib.h>
#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

Corazon::Corazon()
{
	x = -2.0f;
	y = -2.0f;
	tiempo = 0.0f;
}


Corazon::~Corazon()
{
}

void Corazon::reset() {
	x = -2.0f;
	y = -2.0f;
	tiempo = 0.0f;
}

void Corazon::dibujar() {
	//---------------------CORAZON------------------------------
		//corazon
		glPushMatrix();
		//transformaciones
		glTranslatef(x, y, 0.0f);



		glBegin(GL_POLYGON);
		glColor3f(0.0f, 1.0f, 1.0f);

		for (int i = 0; i < 180; i++) {
			glVertex3f(0.03 * cos((double)i * 3.14159 / 180.0) + 0.025, 0.03 * sin((double)i * 3.14159 / 180.0), 0);
		}

		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.0f, 1.0f, 1.0f);

		for (int i = 0; i < 180; i++) {
			glVertex3f(0.03 * cos((double)i * 3.14159 / 180.0) + -0.025, 0.03 * sin((double)i * 3.14159 / 180.0), 0);
		}

		glEnd();
	
		glBegin(GL_TRIANGLES);
		glColor3f(0.0f, 1.0f, 1.0f);

		glVertex3f(-0.055f, 0.0f, 0.0f);
		glVertex3f(-0.0f, -0.05f, 0.0f);
		glVertex3f(0.055f, 0.0f, 0.0f);

		glEnd();
		glPopMatrix();

}
