#include "Pagina.h"

Pagina::Pagina()
{
	x = 0;
	y = 0;
	_numeroNoticiasPPg = 0;
	_noticiaAdefinir = 0;
}

Pagina::Pagina(int x, int y)
{
	this->x = x;
	this->y = y;
}

Pagina::Pagina(Noticia* ntc)
{
	x = 0;
	y = 0;
	_numeroNoticiasPPg = 0;
	_noticiaAdefinir = 0;
	_noticias = ntc;
}

Pagina::~Pagina()
{
}

void Pagina::inicializar()
{
	numero_pagina.setFonte("TextoColuna");
	_noticias = new Noticia[_numeroNoticiasPPg];
	for (int i = 0; i < _numeroNoticiasPPg; i++)
		_noticias[i].inicializar();
}

void Pagina::desenhar()
{
	numero_pagina.desenhar(100,500);
	for (int i = 0; i < 2; i++)
		_noticias[i].desenhar();
}

void Pagina::adicionaTextoNoticia(string texto_noticia)
{
	obtemNoticias()[_noticiaAdefinir].obtemColunas()->defineTextoColuna(texto_noticia);
	_noticiaAdefinir++;
}

void Pagina::adicionaNoticia(string tit_noticia, string texto_noticia)
{
	_noticias[_noticiaAdefinir].defineTituloNoticia(tit_noticia);
	_noticias[_noticiaAdefinir].defineTextoNoticia(texto_noticia);
	if (_noticiaAdefinir >= 0 && _noticiaAdefinir < _numeroNoticiasPPg) _noticiaAdefinir++;
	else { _noticiaAdefinir = 0; }
}

void Pagina::defineNumeroNoticiasPorPagina(int nnpp)
{
	_numeroNoticiasPPg = nnpp;
}

Noticia* Pagina::obtemNoticias()
{
	return _noticias;
}
