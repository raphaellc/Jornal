#pragma once
#include "libUnicornio.h"

class Jogo
{
public:
	Jogo();
	~Jogo();
	Sprite sprite_tempJornal, player;
	Texto texto_tituloJornal,texto_coluna;
	void inicializar();
	void finalizar();

	void executar();
};

