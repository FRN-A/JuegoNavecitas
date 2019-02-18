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

//---------------------ASTEROIDE (QUITA VIDA)-------------------
void Fondo::asteroide() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.04 * cos((double)i * 3.14159 / 180.0) + 0.45, 0.04 * sin((double)i * 3.14159 / 180.0) + 0.3, 0);
	}

	glEnd();

}
//Crateres internos
void Fondo::crater1() {
	glBegin(GL_POLYGON);

	glColor3f(0.2f, 0.2f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01 * cos((double)i * 3.14159 / 180.0) + 0.43, 0.01 * sin((double)i * 3.14159 / 180.0) + 0.32, 0);
	}



	glEnd();

}
void Fondo::crater2() {
	glBegin(GL_POLYGON);

	glColor3f(0.2f, 0.2f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.019 * cos((double)i * 3.14159 / 180.0) + 0.47, 0.019 * sin((double)i * 3.14159 / 180.0) + 0.3, 0);
	}

	glEnd();
}
void Fondo::crater3() {
	glBegin(GL_POLYGON);

	glColor3f(0.2f, 0.2f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.013 * cos((double)i * 3.14159 / 180.0) + 0.44, 0.013 * sin((double)i * 3.14159 / 180.0) + 0.27, 0);
	}

	glEnd();

}
//Crateres externos
void Fondo::crater4() {
	glBegin(GL_QUADS);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(0.41f, 0.31f, 0.0f);
	glVertex3f(0.41f, 0.29f, 0.0f);
	glVertex3f(0.41f, 0.29f, 0.0f);
	glVertex3f(0.4f, 0.31f, 0.0f);

	glEnd();
}
void Fondo::crater5() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(0.49f, 0.3f, 0.0f);
	glVertex3f(0.48f, 0.28f, 0.0f);
	glVertex3f(0.49f, 0.28f, 0.0f);
	glVertex3f(0.5f, 0.3f, 0.0f);

	glEnd();
}
void Fondo::crater6() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(0.44f, 0.35f, 0.0f);
	glVertex3f(0.44f, 0.33f, 0.0f);
	glVertex3f(0.46f, 0.33f, 0.0f);
	glVertex3f(0.46f, 0.34f, 0.0f);

	glEnd();
}
void Fondo::crater7() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(0.44f, 0.26f, 0.0f);
	glVertex3f(0.44f, 0.26f, 0.0f);
	glVertex3f(0.46f, 0.25f, 0.0f);
	glVertex3f(0.46f, 0.26f, 0.0f);

	glEnd();
}


//---------------------CORAZON------------------------------
void Fondo::medioCirculo1() {
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 1.0f);

	for (int i = 0; i < 180; i++) {
		glVertex3f(0.03 * cos((double)i * 3.14159 / 180.0) + -0.5, 0.03 * sin((double)i * 3.14159 / 180.0) + 0.3, 0);
	}

	glEnd();
}
void Fondo::medioCirculo2() {
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 1.0f);

	for (int i = 0; i < 180; i++) {
		glVertex3f(0.03 * cos((double)i * 3.14159 / 180.0) + -0.45, 0.03 * sin((double)i * 3.14159 / 180.0) + 0.3, 0);
	}

	glEnd();
}
void Fondo::triangulo() {
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex3f(-0.53f, 0.3f, 0.0f);
	glVertex3f(-0.48f, 0.25f, 0.0f);
	glVertex3f(-0.42f, 0.3f, 0.0f);

	glEnd();
}


//----------------------------ESTRELLAS------------------------------
//===Estrella Derecha arriba==
//estrella parte 1
void Fondo::estrella1Triangulo1() { //Pico abajo
	glBegin(GL_TRIANGLES);
	glEnable(GL_BLEND);
	
	glColor4f(1.0f, 1.0f, 0.0f, 0.1f);

	glVertex3f(0.76f, 0.77f, 0.0f);
	glVertex3f(0.82f, 0.77f, 0.0f);
	glVertex3f(0.79f, 0.70f, 0.0f);

	glEnd();

}
//estrella parte 2
void Fondo::estrella1Triangulo2() { //Pico arriba
	glBegin(GL_TRIANGLES);
	glEnable(GL_BLEND);

	glColor4f(1.0f, 1.0f, 0.0f, 0.1f);

	glVertex3f(0.79f, 0.79f, 0.0f);
	glVertex3f(0.76f, 0.72f, 0.0f);
	glVertex3f(0.82f, 0.72f, 0.0f);

	glEnd();

}

//===Estrella izquierda arriba==
//estrella2 parte 1
void Fondo::estrella2Triangulo1() { //Pico abajo
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.76f, 0.77f, 0.0f);
	glVertex3f(-0.82f, 0.77f, 0.0f);
	glVertex3f(-0.79f, 0.70f, 0.0f);

	glEnd();

}
//estrella2 parte 2
void Fondo::estrella2Triangulo2() { //Pico arriba
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.79f, 0.79f, 0.0f);
	glVertex3f(-0.76f, 0.72f, 0.0f);
	glVertex3f(-0.82f, 0.72f, 0.0f);

	glEnd();

}

//===Estrella izquierda abajo==
//estrella3 parte 1
void Fondo::estrella3Triangulo1() { //Pico abajo
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.76f, -0.77f, 0.0f);
	glVertex3f(-0.82f, -0.77f, 0.0f);
	glVertex3f(-0.79f, -0.70f, 0.0f);

	glEnd();

}
//estrella3 parte 2
void Fondo::estrella3Triangulo2() { //Pico arriba
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.79f, -0.79f, 0.0f);
	glVertex3f(-0.76f, -0.72f, 0.0f);
	glVertex3f(-0.82f, -0.72f, 0.0f);

	glEnd();

}

//===Estrella derecha abajo==
//estrella4 parte 1
void Fondo::estrella4Triangulo1() { //Pico abajo
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(0.76f, -0.77f, 0.0f);
	glVertex3f(0.82f, -0.77f, 0.0f);
	glVertex3f(0.79f, -0.70f, 0.0f);

	glEnd();

}
//estrella4 parte 2
void Fondo::estrella4Triangulo2() { //Pico arriba
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(0.79f, -0.79f, 0.0f);
	glVertex3f(0.76f, -0.72f, 0.0f);
	glVertex3f(0.82f, -0.72f, 0.0f);

	glEnd();

}


//---------------PLANETA TIERRA--------------------
void Fondo::planetaTierra() {
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.0f, 1.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + 0.45, 0.06 * sin((double)i * 3.14159 / 180.0) - 0.3, 0);
	}

	glEnd();
}
void Fondo::tierra() {
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 1.0f, 0.0f);


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
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 1.0f, 0.0f);


	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01* cos((double)i * 3.14159 / 180.0) + 0.42, 0.01 * sin((double)i * 3.14159 / 180.0) - 0.31, 0);
	}


	glEnd();
}


//----------------Planeta Verde--------
void Fondo::planetaVerde() {
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 1.0f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + 0.75, 0.06 * sin((double)i * 3.14159 / 180.0) + 0.35, 0);
	}

	glEnd();
}


//---------------Planeta naranja Con anillo----------
void Fondo::planetaNaranja() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.5f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + -0.48, 0.06 * sin((double)i * 3.14159 / 180.0) + 0.43, 0);
	}

	glEnd();
}
//Anillo
void Fondo::anillo() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);

	for (int i = 0; i < 180; i++) {
		glVertex3f(0.07* cos((double)i * 3.14159 / 180.0) + -0.48, 0.015 * sin((double)i * 3.14159 / 180.0) + 0.43, 0);
	}

	glEnd();
}


//--------------Planeta cafe-------
void Fondo::planetaCafe() {
	glBegin(GL_POLYGON);

	glColor3f(0.3f, 0.0f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + -0.27, 0.06 * sin((double)i * 3.14159 / 180.0) + -0.74, 0);
	}

	glEnd();
}


//-------Astronauta----------
void Fondo::casco() {
	glBegin(GL_POLYGON);

	glColor3f(0.8f, 1.0f, 1.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.04 * cos((double)i * 3.14159 / 180.0) + 0.0, 0.04 * sin((double)i * 3.14159 / 180.0) + -0.35, 0);
	}

	glEnd();

}
void Fondo::lineaCuerpo() {
	glBegin(GL_LINES);

	glColor3f(0.8f, 1.0f, 1.0f);

	glVertex3f(0.0f, -0.35f, 0.0f);
	glVertex3f(0.0f, -0.48f, 0.0f);

	glEnd();
}
void Fondo::lineaBrazo1() {
	glBegin(GL_LINES);

	glColor3f(0.8f, 1.0f, 1.0f);

	glVertex3f(0.0f, -0.4f, 0.0f);
	glVertex3f(0.03f, -0.43f, 0.0f);

	glEnd();
}
void Fondo::lineaBrazo2() {
	glBegin(GL_LINES);

	glColor3f(0.8f, 1.0f, 1.0f);

	glVertex3f(0.0f, -0.4f, 0.0f);
	glVertex3f(-0.03f, -0.43f, 0.0f);

	glEnd();
}
void Fondo::lineaPierna1() {
	glBegin(GL_LINES);

	glColor3f(0.8f, 1.0f, 1.0f);

	glVertex3f(0.0f, -0.48f, 0.0f);
	glVertex3f(0.05f, -0.53f, 0.0f);

	glEnd();
}
void Fondo::lineaPierna2() {
	glBegin(GL_LINES);

	glColor3f(0.8f, 1.0f, 1.0f);

	glVertex3f(0.0f, -0.48f, 0.0f);
	glVertex3f(-0.05f, -0.53f, 0.0f);

	glEnd();
}


//----------------Ovni--------------
void Fondo::ovalo() {
	glBegin(GL_POLYGON);

	glColor3f(0.1f, 0.1f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.09* cos((double)i * 3.14159 / 180.0) + 0.2, 0.06 * sin((double)i * 3.14159 / 180.0) + 0.60, 0);
	}

	glEnd();
}
void Fondo::circuloNave() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 1.0f, 1.0f);

	for (int i = 0; i < 180; i++) {
		glVertex3f(0.05* cos((double)i * 3.14159 / 180.0) + 0.2, 0.06 * sin((double)i * 3.14159 / 180.0) + 0.64, 0);
	}

	glEnd();
}
void Fondo::lineaAlrededor() {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 1.0f, 1.0f);

	for (int i = 0; i < 180; i++) {
		glVertex3f(0.09* cos((double)i * 3.14159 / 180.0) + 0.2, 0.01 * sin((double)i * 3.14159 / 180.0) + 0.60, 0);
	}

	glEnd();
}
void Fondo::lineas() {
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.15f, 0.58f, 0.0f);
	glVertex3f(0.12f, 0.52f, 0.0f);
	glVertex3f(0.25f, 0.58f, 0.0f);
	glVertex3f(0.28f, 0.52f, 0.0f);

	glEnd();
}


//--------------Cohete-------------------
void Fondo::rectanguloNave() {
	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex3f(-0.7f, 0.0f, 0.0f);
	glVertex3f(-0.7f, 0.2f, 0.0f);
	glVertex3f(-0.8f, 0.2f, 0.0f);
	glVertex3f(-0.8f, 0.0f, 0.0f);

	glEnd();
}
void Fondo::trianguloNave() {
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(-0.7f, 0.2f, 0.0f);
	glVertex3f(-0.8f, 0.2f, 0.0f);
	glVertex3f(-0.75f, 0.3f, 0.0f);

	glEnd();
}
void Fondo::triangulo1Nave() {
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(-0.79f, 0.1f, 0.0f);
	glVertex3f(-0.79f, -0.05f, 0.0f);
	glVertex3f(-0.81f, -0.05f, 0.0f);

	glEnd();
}
void Fondo::triangulo2Nave() {
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(-0.69f, -0.05f, 0.0f);
	glVertex3f(-0.71f, 0.1f, 0.0f);
	glVertex3f(-0.71f, -0.05f, 0.0f);

	glEnd();
}
void Fondo::triangulo3Nave() {
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(-0.72f, -0.05f, 0.0f);
	glVertex3f(-0.78f, -0.05f, 0.0f);
	glVertex3f(-0.75f, 0.0f, 0.0f);

	glEnd();
}
void Fondo::ventanaCircular() {
	glBegin(GL_POLYGON);

	glColor3f(0.8f, 1.0f, 1.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.03 * cos((double)i * 3.14159 / 180.0) + -0.75, 0.03 * sin((double)i * 3.14159 / 180.0) + 0.15, 0);
	}

	glEnd();

}
void Fondo::ventanaCircularBorde() {
	glBegin(GL_LINE_STRIP);

	glColor3f(0.0f, 0.0f, 0.0f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.03 * cos((double)i * 3.14159 / 180.0) + -0.75, 0.03 * sin((double)i * 3.14159 / 180.0) + 0.15, 0);
	}

	glEnd();

}


//-----------Satelite---------
void Fondo::ovaloSatelite() {
	glBegin(GL_POLYGON);

	glColor3f(0.5f, 0.5f, 0.5f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.03* cos((double)i * 3.14159 / 180.0) + 0.72, 0.09 * sin((double)i * 3.14159 / 180.0) + -0.35, 0);
	}

	glEnd();
}
void Fondo::circuloSatelite() {
	glBegin(GL_POLYGON);

	glColor3f(0.5f, 0.5f, 0.5f);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.03* cos((double)i * 3.14159 / 180.0) + 0.72, 0.05 * sin((double)i * 3.14159 / 180.0) + -0.27, 0);
	}

	glEnd();
}
void Fondo::cuadrado1Satelite() {
	glBegin(GL_QUADS);

	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.69, -0.30, 0.0f);
	glVertex3f(0.69, -0.37, 0.0f);
	glVertex3f(0.63, -0.37, 0.0f);
	glVertex3f(0.63, -0.30, 0.0f);

	glEnd();
}
void Fondo::cuadrado2Satelite() {
	glBegin(GL_QUADS);

	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.75, -0.30, 0.0f);
	glVertex3f(0.75, -0.37, 0.0f);
	glVertex3f(0.80, -0.37, 0.0f);
	glVertex3f(0.80, -0.30, 0.0f);

	glEnd();
}
void Fondo::lineasSatelite() {
	glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 0.0f);

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

void Fondo::dibujar() {
	/*
	//dibujarCorazon();
	medioCirculo1();
	medioCirculo2();
	triangulo();

	//Asteroide
	asteroide();
	crater1();
	crater2();
	crater3();

	crater4();
	crater5();
	crater6();
	crater7();
	*/



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
	cuadrado1Satelite();
	cuadrado2Satelite();
	lineasSatelite();

}