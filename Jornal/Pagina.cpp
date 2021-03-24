#include "Pagina.h"

Pagina::Pagina()
{
}

Pagina::Pagina(int x, int y)
{
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
	noticias = new Noticia[2];
	Coluna* col = new Coluna;
	col->defineTextoColuna("asdfasdf");
	noticias[0].defineColuna(col);
	noticias[1].defineTextoNoticia("texto2");
}

void Pagina::desenhar()
{
	numero_pagina.desenhar(100,500);
	for (int i = 0; i < 2; i++)
		noticias[i].desenhar();
}
