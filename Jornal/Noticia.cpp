#include "Noticia.h"

Noticia::Noticia()
{
	colunas = new Coluna[2];
}

void Noticia::desenhar()
{
	for (int i = 0; i < 2; i++)
		colunas[i].desenhar();
}

void Noticia::inicializar()
{
	
}

void Noticia::defineTextoNoticia(string texto)
{
	texto_not = texto;
}

void Noticia::defineColuna(Coluna* col)
{
}
