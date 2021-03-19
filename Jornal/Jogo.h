#pragma once
#include "libUnicornio.h"
#include "Jornal.h"

class Jogo
{
public:
	Jogo();
	~Jogo();
	void inicializar();
	void finalizar();
	void executar();
protected:
	void carregarRecursos();
private:
	Jornal * jornal;
	Sprite player;
};

