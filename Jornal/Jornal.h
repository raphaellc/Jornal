#pragma once
#include "libUnicornio.h"
class Jornal
{
public:
	Jornal();
	void adicionaTituloJornal(string tit_jornal);
	void adicionaTituloNoticia(string tit_noticia);
	void adicionaTextoNoticia(string texto_noticia);
	void desenhar();
private:
	void inicializar();
	Sprite sprite_tempJornal;
	Texto texto_tituloJornal, texto_coluna;
};

