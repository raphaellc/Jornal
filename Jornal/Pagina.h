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
	void adicionaTextoNoticia(string texto_noticia);
	void adicionaNoticia(string tit_noticia, string texto_noticia);
	void defineNumeroNoticiasPorPagina(int nnpp);
	Noticia* obtemNoticias();
private:
	int x, y;
	Texto numero_pagina;
	Noticia* _noticias;
	int _noticiaAdefinir = 0, _numeroNoticiasPPg;
};

