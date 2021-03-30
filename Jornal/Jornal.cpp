#include "Jornal.h"

Jornal::Jornal()
{
	inicializar();
}

Jornal::~Jornal()
{
	delete[]paginas;
}

void Jornal::adicionaTituloJornal(string tit_jornal)
{
	texto_tituloJornal.setString(tit_jornal);
}

void Jornal::adicionaTituloNoticia(string tit_noticia)
{
	texto_tituloNoticia.setString(tit_noticia);
}

void Jornal::adicionaTextoNoticia(string texto_noticia, int nro_pg, int nro_noticia)
{
	paginas[0].obtemNoticias()[0].obtemColunas()[0].defineTextoColuna(texto_noticia);
	paginas[0].obtemNoticias()[0].obtemColunas()[1].defineTextoColuna(texto_noticia);
	paginas[0].obtemNoticias()[1].obtemColunas()[0].defineTextoColuna(texto_noticia);
	paginas[0].obtemNoticias()[1].obtemColunas()[1].defineTextoColuna(texto_noticia);
}

void Jornal::desenhar()
{
	sprite_tempJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 1.2);
	texto_tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 6);
	texto_tituloNoticia.desenhar(gJanela.getLargura() / 3.3, gJanela.getAltura() / 2.5);
	for (int i = 0; i < numero_paginas; i++)
		paginas[i].desenhar();
		
}

void Jornal::inicializar()
{
	numero_paginas = 1;
	sprite_tempJornal.setSpriteSheet("templateJornal");
	sprite_tempJornal.setEscala(0.5, 0.5);
	
	texto_tituloJornal.setFonte("TituloJornal");
	texto_tituloJornal.setCor(0, 0, 0);
	texto_tituloJornal.setAlinhamento(TEXTO_CENTRALIZADO);
	texto_tituloJornal.setCorPalavra("Diário", 128, 0, 0);
	texto_tituloJornal.setEscala(5, 5);

	texto_tituloNoticia.setFonte("TituloJornal");
	texto_tituloNoticia.setCor(0, 0, 0);
	texto_tituloNoticia.setAlinhamento(TEXTO_CENTRALIZADO);
	texto_tituloNoticia.setEscala(1.5, 1.5);

	paginas = new Pagina[numero_paginas];
	for (int i = 0; i < numero_paginas; i++)
		paginas[i].inicializar();
	
	
		
}
