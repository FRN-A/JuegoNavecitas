#pragma once
class Bala
{
public:
	float x;
	float y;
	float angulo;

	float velocidad;

	Bala();
	~Bala();
	void dibujar();
	void mover(float tiempoDiferencial);
};

