#include "Pagina.h"

Pagina::Pagina()
{
	x = 0;
	y = 0;
}

Pagina::Pagina(int x, int y)
{
	this->x = x;
	this->y = y;
}

Pagina::Pagina(Noticia* ntc)
{
	noticias = ntc;
}

Pagina::~Pagina()
{
}

void Pagina::inicializar()
{
	numero_pagina.setFonte("TextoColuna");
	noticias = new Noticia[2];
	for (int i = 0; i < 2; i++)
		noticias[i].inicializar();
}

void Pagina::desenhar()
{
	numero_pagina.desenhar(100,500);
	for (int i = 0; i < 2; i++)
		noticias[i].desenhar();
}

Noticia* Pagina::obtemNoticias()
{
	return noticias;
}
