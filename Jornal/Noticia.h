#pragma once
#include "Coluna.h"
class Noticia
{
public:
	Noticia();
	void desenhar();
	void inicializar();
	void defineTituloNoticia(string texto);
	Coluna* obtemColunas();
private:
	Coluna* colunas;
	string texto_not;
	Texto titulo_noticia;
};

