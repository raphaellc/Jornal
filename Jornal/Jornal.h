#pragma once
#include "libUnicornio.h"
#include "Pagina.h"
class Jornal
{
public:
	Jornal();
	~Jornal();
	void adicionaTituloJornal(string tit_jornal);
	void adicionaTituloNoticia(string tit_noticia);
	void adicionaTextoNoticia(string texto_noticia, int nro_pg, int nro_noticia);
	void desenhar();
private:
	void inicializar();
	Sprite sprite_tempJornal;
	Texto texto_tituloJornal, texto_coluna, texto_tituloNoticia;
	Pagina* paginas;
	int numero_paginas;
};

