#include "Noticia.h"

Noticia::Noticia()
{
}

void Noticia::desenhar()
{
	for (int i = 0; i < 2; i++)
		colunas[i].desenhar();
}

void Noticia::inicializar()
{
	colunas = new Coluna[2];
	for (size_t i = 0; i < 2; i++)
	{
		colunas[i].inicializar();
	}
	
}

void Noticia::defineTituloNoticia(string texto)
{
	titulo_noticia.setString(texto);
}


Coluna* Noticia::obtemColunas()
{
	return colunas;
}

