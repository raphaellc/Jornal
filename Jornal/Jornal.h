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
	void adicionaTextoNoticia(string texto_noticia, int nro_pg, int nro_noticia, int nro_coluna);
	void adicionaNoticia(string tit_noticia, string texto_noticia);
	void desenhar();
	void inicializar();
	void configurarJornal(int numero_paginas, int numero_not_pp, int nro_coluna_pn);
private:
	Sprite sprite_tempJornal;
	Texto texto_tituloJornal, texto_tituloNoticia;
	Pagina* paginas;
	int _numero_paginas,_pagina_atual, _nro_noticia_por_pagina, _noticiaPorPagina;
};