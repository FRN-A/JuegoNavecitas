#pragma once
class Fondo
{
public:
	Fondo();
	~Fondo();

	//asteroide (objeto que baja la vida}9
	void asteroide();
	void crater1();
	void crater2();
	void crater3();
	void crater4();
	void crater5();
	void crater6();
	void crater7();

	//corazon (objeto que sube vida)
	void medioCirculo1();
	void medioCirculo2();
	void triangulo();

	//Estrelas
	void estrella1Triangulo1();
	void estrella1Triangulo2();
	void estrella2Triangulo1();
	void estrella2Triangulo2();
	void estrella3Triangulo1();
	void estrella3Triangulo2();
	void estrella4Triangulo1();
	void estrella4Triangulo2();

	//planeta tierra
	void planetaTierra();
	void tierra();
	void tierra2();

	//planeta verde
	void planetaVerde();

	//Planeta con anillo
	void planetaNaranja();
	void anillo();

	//planeta cafe
	void planetaCafe();

	//Astronauta
	void casco();
	void lineaCuerpo();
	void lineaBrazo1();
	void lineaBrazo2();
	void lineaPierna1();
	void lineaPierna2();

	//Ovni
	void ovalo();
	void circuloNave();
	void lineaAlrededor();
	void lineas();

	//Cohete
	void rectanguloNave();
	void trianguloNave();
	void triangulo1Nave();
	void triangulo2Nave();
	void triangulo3Nave();
	void ventanaCircular();
	void ventanaCircularBorde();

	//Satelite
	void circuloSatelite();
	void ovaloSatelite();
	void cuadrado1Satelite();
	void cuadrado2Satelite();
	void lineasSatelite();


	void dibujar();
};

