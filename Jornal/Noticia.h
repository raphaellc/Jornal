#pragma once
#include "Coluna.h"
class Noticia
{
public:
	Noticia();
	void inicializar();
	void desenhar();
	void defineTituloNoticia(string titulo_noticia);
	void defineTextoNoticia(string texto_noticia);
	Coluna* obtemColunas();
private:
	Coluna* _colunas;
	string texto_not;
	Texto _titulo_noticia;
	int _coluna;
};

