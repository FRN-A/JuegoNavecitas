#include "stdafx.h"
#include "Fondo.h"
#include "Player.h"
#include "Bala.h"

#include <stdio.h>
#include <stdlib.h>
#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;


Fondo::Fondo()
{
}


Fondo::~Fondo()
{
}




//----------------------------ESTRELLAS------------------------------
	//===Estrella Derecha arriba==
//estrella parte 1
void Fondo::estrella1Triangulo1() { //Pico abajo

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(0.76f, 0.77f, 0.0f);
	glVertex3f(0.82f, 0.77f, 0.0f);
	glVertex3f(0.79f, 0.70f, 0.0f);

	glEnd();

}
//estrella parte 2
void Fondo::estrella1Triangulo2() { //Pico arriba

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(0.79f, 0.79f, 0.0f);
	glVertex3f(0.76f, 0.72f, 0.0f);
	glVertex3f(0.82f, 0.72f, 0.0f);

	glEnd();

}

//===Estrella izquierda arriba==
//estrella2 parte 1
void Fondo::estrella2Triangulo1() { //Pico abajo
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(-0.76f, 0.77f, 0.0f);
	glVertex3f(-0.82f, 0.77f, 0.0f);
	glVertex3f(-0.79f, 0.70f, 0.0f);

	glEnd();

}
//estrella2 parte 2
void Fondo::estrella2Triangulo2() { //Pico arriba
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(-0.79f, 0.79f, 0.0f);
	glVertex3f(-0.76f, 0.72f, 0.0f);
	glVertex3f(-0.82f, 0.72f, 0.0f);

	glEnd();

}

//===Estrella izquierda abajo==
//estrella3 parte 1
void Fondo::estrella3Triangulo1() { //Pico abajo
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(-0.76f, -0.77f, 0.0f);
	glVertex3f(-0.82f, -0.77f, 0.0f);
	glVertex3f(-0.79f, -0.70f, 0.0f);

	glEnd();

}
//estrella3 parte 2
void Fondo::estrella3Triangulo2() { //Pico arriba
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(-0.79f, -0.79f, 0.0f);
	glVertex3f(-0.76f, -0.72f, 0.0f);
	glVertex3f(-0.82f, -0.72f, 0.0f);

	glEnd();

}

//===Estrella derecha abajo==
//estrella4 parte 1
void Fondo::estrella4Triangulo1() { //Pico abajo
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(0.76f, -0.77f, 0.0f);
	glVertex3f(0.82f, -0.77f, 0.0f);
	glVertex3f(0.79f, -0.70f, 0.0f);

	glEnd();

}
//estrella4 parte 2
void Fondo::estrella4Triangulo2() { //Pico arriba
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(0.79f, -0.79f, 0.0f);
	glVertex3f(0.76f, -0.72f, 0.0f);
	glVertex3f(0.82f, -0.72f, 0.0f);

	glEnd();

}


//---------------PLANETA TIERRA--------------------
void Fondo::planetaTierra() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.0f, 0.0f, 1.0f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + 0.45, 0.06 * sin((double)i * 3.14159 / 180.0) - 0.3, 0);
	}

	glEnd();
}
void Fondo::tierra() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.0f, 1.0f, 0.0f, 0.3f);


	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.45, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.28, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.46, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.29, 0);
	}

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.47, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.29, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.47, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.31, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.47, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.32, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.46, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.33, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.45, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.33, 0);
	}

	glEnd();
}
void Fondo::tierra2() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.0f, 1.0f, 0.0f, 0.3f);


	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.42, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.31, 0);
	}


	glEnd();
}


//----------------Planeta Verde--------
void Fondo::planetaVerde() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.0f, 1.0f, 0.0f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + 0.75, 0.06 * sin((double)i * 3.14159 / 180.0) + 0.35, 0);
	}

	glEnd();
}


//---------------Planeta naranja Con anillo----------
void Fondo::planetaNaranja() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(1.0f, 0.5f, 0.0f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + -0.48, 0.06 * sin((double)i * 3.14159 / 180.0) + 0.43, 0);
	}

	glEnd();
}
//Anillo
void Fondo::anillo() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(1.0f, 0.0f, 0.0f, 0.3f);

	for (int i = 0; i < 180; i++) {
		glVertex3f(0.07* cos((double)i * 3.14159 / 180.0) + -0.48, 0.015 * sin((double)i * 3.14159 / 180.0) + 0.43, 0);
	}

	glEnd();
}


//--------------Planeta cafe-------
void Fondo::planetaCafe() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.3f, 0.0f, 0.0f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + -0.27, 0.06 * sin((double)i * 3.14159 / 180.0) + -0.74, 0);
	}

	glEnd();
}


//-------Astronauta----------
void Fondo::casco() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.8f, 1.0f, 1.0f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.04 * cos((double)i * 3.14159 / 180.0) + 0.0, 0.04 * sin((double)i * 3.14159 / 180.0) + -0.35, 0);
	}

	glEnd();

}
void Fondo::lineaCuerpo() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINES);

	glColor4f(0.8f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.0f, -0.39f, 0.0f);
	glVertex3f(0.0f, -0.48f, 0.0f);

	glEnd();
}
void Fondo::lineaBrazo1() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINES);

	glColor4f(0.8f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.0f, -0.4f, 0.0f);
	glVertex3f(0.03f, -0.43f, 0.0f);

	glEnd();
}
void Fondo::lineaBrazo2() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINES);

	glColor4f(0.8f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.0f, -0.4f, 0.0f);
	glVertex3f(-0.03f, -0.43f, 0.0f);

	glEnd();
}
void Fondo::lineaPierna1() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINES);

	glColor4f(0.8f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.0f, -0.48f, 0.0f);
	glVertex3f(0.05f, -0.53f, 0.0f);

	glEnd();
}
void Fondo::lineaPierna2() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINES);

	glColor4f(0.8f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.0f, -0.48f, 0.0f);
	glVertex3f(-0.05f, -0.53f, 0.0f);

	glEnd();
}


//----------------Ovni--------------
void Fondo::ovalo() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.1f, 0.1f, 0.0f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.09* cos((double)i * 3.14159 / 180.0) + 0.2, 0.06 * sin((double)i * 3.14159 / 180.0) + 0.60, 0);
	}

	glEnd();
}
void Fondo::circuloNave() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(1.0f, 1.0f, 1.0f, 0.3f);

	for (int i = 0; i < 180; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + 0.2, 0.06 * sin((double)i * 3.14159 / 180.0) + 0.64, 0);
	}

	glEnd();
}
void Fondo::lineaAlrededor() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(1.0f, 1.0f, 1.0f, 0.3f);

	for (int i = 0; i < 180; i++) {
		glVertex3f(0.09* cos((double)i * 3.14159 / 180.0) + 0.2, 0.01 * sin((double)i * 3.14159 / 180.0) + 0.60, 0);
	}

	glEnd();
}
void Fondo::lineas() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINES);

	glColor4f(1.0f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.15f, 0.58f, 0.0f);
	glVertex3f(0.12f, 0.52f, 0.0f);
	glVertex3f(0.25f, 0.58f, 0.0f);
	glVertex3f(0.28f, 0.52f, 0.0f);

	glEnd();
}


//--------------Cohete-------------------
void Fondo::rectanguloNave() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_QUADS);

	glColor4f(0.0f, 0.0f, 1.0f, 0.3f);

	glVertex3f(-0.7f, 0.0f, 0.0f);
	glVertex3f(-0.7f, 0.2f, 0.0f);
	glVertex3f(-0.8f, 0.2f, 0.0f);
	glVertex3f(-0.8f, 0.0f, 0.0f);

	glEnd();
}
void Fondo::trianguloNave() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 0.0f, 0.0f, 0.3f);

	glVertex3f(-0.7f, 0.2f, 0.0f);
	glVertex3f(-0.8f, 0.2f, 0.0f);
	glVertex3f(-0.75f, 0.3f, 0.0f);

	glEnd();
}
void Fondo::triangulo1Nave() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 0.0f, 0.0f, 0.3f);

	glVertex3f(-0.79f, 0.1f, 0.0f);
	glVertex3f(-0.79f, -0.05f, 0.0f);
	glVertex3f(-0.81f, -0.05f, 0.0f);

	glEnd();
}
void Fondo::triangulo2Nave() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 0.0f, 0.0f, 0.3f);

	glVertex3f(-0.69f, -0.05f, 0.0f);
	glVertex3f(-0.71f, 0.1f, 0.0f);
	glVertex3f(-0.71f, -0.05f, 0.0f);

	glEnd();
}
void Fondo::triangulo3Nave() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 0.0f, 0.0f, 0.3f);

	glVertex3f(-0.72f, -0.05f, 0.0f);
	glVertex3f(-0.78f, -0.05f, 0.0f);
	glVertex3f(-0.75f, 0.0f, 0.0f);

	glEnd();
}
void Fondo::ventanaCircular() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.8f, 1.0f, 1.0f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.03 * cos((double)i * 3.14159 / 180.0) + -0.75, 0.03 * sin((double)i * 3.14159 / 180.0) + 0.15, 0);
	}

	glEnd();

}
void Fondo::ventanaCircularBorde() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINE_STRIP);

	glColor4f(0.0f, 0.0f, 0.0f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.03 * cos((double)i * 3.14159 / 180.0) + -0.75, 0.03 * sin((double)i * 3.14159 / 180.0) + 0.15, 0);
	}

	glEnd();

}


//-----------Satelite---------
void Fondo::ovaloSatelite() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.5f, 0.5f, 0.5f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.03* cos((double)i * 3.14159 / 180.0) + 0.72, 0.09 * sin((double)i * 3.14159 / 180.0) + -0.35, 0);
	}

	glEnd();
}
void Fondo::circuloSatelite() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(0.5f, 0.5f, 0.5f, 0.3f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.03* cos((double)i * 3.14159 / 180.0) + 0.72, 0.05 * sin((double)i * 3.14159 / 180.0) + -0.27, 0);
	}

	glEnd();
}
void Fondo::ventanaCuadrado() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_QUADS);

	glColor4f(1.0f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.70, -0.27, 0.0f);
	glVertex3f(0.70, -0.32, 0.0f);
	glVertex3f(0.74, -0.32, 0.0f);
	glVertex3f(0.74, -0.27, 0.0f);

	glEnd();
}
void Fondo::cuadrado1Satelite() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_QUADS);

	glColor4f(1.0f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.69, -0.30, 0.0f);
	glVertex3f(0.69, -0.37, 0.0f);
	glVertex3f(0.63, -0.37, 0.0f);
	glVertex3f(0.63, -0.30, 0.0f);

	glEnd();
}
void Fondo::cuadrado2Satelite() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_QUADS);

	glColor4f(1.0f, 1.0f, 1.0f, 0.3f);

	glVertex3f(0.75, -0.30, 0.0f);
	glVertex3f(0.75, -0.37, 0.0f);
	glVertex3f(0.80, -0.37, 0.0f);
	glVertex3f(0.80, -0.30, 0.0f);

	glEnd();
}
void Fondo::lineasSatelite() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINES);

	glColor4f(0.0f, 0.0f, 0.0f, 0.3f);

	glVertex3f(0.68, -0.31, 0.0f);
	glVertex3f(0.68, -0.36, 0.0f);

	glVertex3f(0.64, -0.36, 0.0f);
	glVertex3f(0.64, -0.31, 0.0f);

	glVertex3f(0.67, -0.32, 0.0f);
	glVertex3f(0.67, -0.35, 0.0f);

	glVertex3f(0.65, -0.35, 0.0f);
	glVertex3f(0.65, -0.32, 0.0f);


	glVertex3f(0.76, -0.31, 0.0f);
	glVertex3f(0.76, -0.36, 0.0f);

	glVertex3f(0.79, -0.36, 0.0f);
	glVertex3f(0.79, -0.31, 0.0f);

	glVertex3f(0.77, -0.32, 0.0f);
	glVertex3f(0.77, -0.35, 0.0f);

	glVertex3f(0.78, -0.35, 0.0f);
	glVertex3f(0.78, -0.32, 0.0f);


	glEnd();
}


//----------Estrella fugas----------
//estrella fugas parte 1
void Fondo::estrellaFugas() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(-0.34f, 0.77f, 0.0f);
	glVertex3f(-0.40f, 0.77f, 0.0f);
	glVertex3f(-0.37f, 0.70f, 0.0f);

	glEnd();

}
//estrella fugas parte 2
void Fondo::estrellaFugas2() { //Pico arriba
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(-0.37f, 0.79f, 0.0f);
	glVertex3f(-0.34f, 0.72f, 0.0f);
	glVertex3f(-0.40f, 0.72f, 0.0f);

	glEnd();
}
void Fondo::estrellaCola() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(1.0f, 0.0f, 0.0f, 0.3f);


	glVertex3f(-0.38, 0.75, 0.0f);

	glVertex3f(-0.38, 0.72, 0.0f);
	glVertex3f(-0.20, 0.80, 0.0f);

	glVertex3f(-0.24, 0.78, 0.0f);
	glVertex3f(-0.20, 0.76, 0.0f);
	glVertex3f(-0.24, 0.74, 0.0f);
	glVertex3f(-0.20, 0.72, 0.0f);

	glVertex3f(-0.24, 0.70, 0.0f);
	glVertex3f(-0.20, 0.68, 0.0f);




	glEnd();
}


//-------Sol------------
void Fondo::planetaSol() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_POLYGON);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	for (int i = 0; i < 360; i++) {

		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + -0.55, 0.06 * sin((double)i * 3.14159 / 180.0) + -0.35, 0);

	}

	glEnd();
}
void Fondo::lineasSol() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_LINES);

	glColor4f(1.0f, 1.0f, 0.0f, 0.3f);

	glVertex3f(-0.61f, -0.35f, 0.0f);
	glVertex3f(-0.64f, -0.35f, 0.0f);

	glVertex3f(-0.55f, -0.28f, 0.0f);
	glVertex3f(-0.55f, -0.25f, 0.0f);

	glVertex3f(-0.49f, -0.35f, 0.0f);
	glVertex3f(-0.46f, -0.35f, 0.0f);

	glVertex3f(-0.55f, -0.42f, 0.0f);
	glVertex3f(-0.55f, -0.45f, 0.0f);


	glVertex3f(-0.59f, -0.30f, 0.0f);
	glVertex3f(-0.61f, -0.27f, 0.0f);

	glVertex3f(-0.51f, -0.30f, 0.0f);
	glVertex3f(-0.49f, -0.27f, 0.0f);

	glVertex3f(-0.51f, -0.40f, 0.0f);
	glVertex3f(-0.49f, -0.43f, 0.0f);

	glVertex3f(-0.59f, -0.40f, 0.0f);
	glVertex3f(-0.61f, -0.43f, 0.0f);


	glEnd();
}

void Fondo::dibujar() {

	//Estrella Derecha Arriba
	estrella1Triangulo1();
	estrella1Triangulo2();

	//Estrella Izquierda Arriba
	estrella2Triangulo1();
	estrella2Triangulo2();

	//Estrella Izquierda Abajo
	estrella3Triangulo1();
	estrella3Triangulo2();

	//Estrella Derecha Abajo
	estrella4Triangulo1();
	estrella4Triangulo2();

	//Planeta tierra
	planetaTierra();
	tierra();
	tierra2();

	//Planeta verde
	planetaVerde();

	//Planeta Naranja con anillo
	planetaNaranja();
	anillo();

	//Planeta Cafe
	planetaCafe();

	//Astronauta
	casco();
	lineaCuerpo();
	lineaBrazo1();
	lineaBrazo2();
	lineaPierna1();
	lineaPierna2();

	//Ovni
	ovalo();
	circuloNave();
	lineaAlrededor();
	lineas();

	//Cohete
	rectanguloNave();
	trianguloNave();
	triangulo1Nave();
	triangulo2Nave();
	triangulo3Nave();
	ventanaCircular();
	ventanaCircularBorde();

	//Satelite
	circuloSatelite();
	ovaloSatelite();
	ventanaCuadrado();
	cuadrado1Satelite();
	cuadrado2Satelite();
	lineasSatelite();

	//Estrella Fugas
	estrellaCola();
	estrellaFugas();
	estrellaFugas2();

	//Sol
	planetaSol();
	lineasSol();
}