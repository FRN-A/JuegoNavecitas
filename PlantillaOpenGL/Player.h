#pragma once
#include "Bala.h"

class Player
{

public:
	float colorR, colorG, colorB;

	static int asd;
	int vidas;
	float x;
	float y;
	float angulo;
	float anguloTrayectoria;
	float velocidadAngular;

	Bala bala[5] = { Bala(), Bala(), Bala(), Bala(), Bala() };

	float velocidad;
	float aceleracion;
	float desaceleracion;
	float velocidadActual;
	float tiempoDisparo;
	float tiempoGolpe;
	int balaActual;

	int estadoTeclaDerecha;
	int estadoTeclaIzquierda;
	int estadoTeclaArriba;
	int estadoTeclaAbajo;


	Player();
	~Player();
	void dibujar();
	void mover(float, int, int, int, int);
	bool colision(float, float, float, float);
	void disparar(int indiceBala, float tiempoDiferencial);
};

