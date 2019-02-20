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
	float xVida;

	Bala bala[5] = { Bala(), Bala(), Bala(), Bala(), Bala() };

	float velocidad;
	float aceleracion;
	float desaceleracion;
	float velocidadActual;
	float tiempoDisparo;
	float tiempoGolpe;
	float tiempoCorazon;
	int balaActual;

	int estadoTeclaDerecha;
	int estadoTeclaIzquierda;
	int estadoTeclaArriba;
	int estadoTeclaAbajo;


	Player(float xVida, float posicionX, float posicionY);
	~Player();
	void dibujar();
	void mover(float, int, int, int, int);
	bool colision(float x, float boxDistanceX, float y, float boxDistanceY);
	void disparar(int indiceBala, float tiempoDiferencial);

	void dibujarVida();
	void reset(float posicionX, float posicionY);
};

