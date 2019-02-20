#pragma once
class Asteroide
{
public:
	Asteroide();
	~Asteroide();

	float x;
	float y;
	float tiempo;
	float velocidad;
	float anguloTrayectoria;

	void dibujar();
	void mover(float tiempoDiferencial, float anguloTrayectoria);
	void reset();
};

