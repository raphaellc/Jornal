#pragma once
#include "libUnicornio.h"
#include "Noticia.h"
#include "Coluna.h"
class Pagina
{
public:
	Pagina();
	Pagina(int x,int y);
	Pagina(Noticia * ntc);
	~Pagina();
	void inicializar();
	void desenhar();
	Noticia* obtemNoticias();
private:
	int x, y;
	Texto numero_pagina;
	Noticia* noticias;
};

