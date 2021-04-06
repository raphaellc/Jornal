#include "Jornal.h"

Jornal::Jornal()
{
	_pagina_atual = 0;
	_nro_noticia_por_pagina = 0;
	_noticiaPorPagina = 0;
	_numero_paginas = 0;
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
	paginas[0].obtemNoticias()[0].defineTituloNoticia(tit_noticia);
}

void Jornal::adicionaTextoNoticia(string texto_noticia, int nro_pg, int nro_noticia, int nro_coluna)
{
	paginas[nro_pg].obtemNoticias()[nro_noticia].obtemColunas()[nro_coluna].defineTextoColuna(texto_noticia);
}

void Jornal::adicionaNoticia(string tit_noticia, string texto_noticia)
{
	paginas[_pagina_atual].adicionaNoticia(tit_noticia, texto_noticia);
	if (_pagina_atual >= 0 && _pagina_atual < _numero_paginas)
		if (_noticiaPorPagina == _nro_noticia_por_pagina) {
			_pagina_atual++;
			_noticiaPorPagina = 0;
		}
	else
		_pagina_atual = 0;
}

void Jornal::desenhar()
{
	sprite_tempJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 1.2);
	texto_tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 6);
	texto_tituloNoticia.desenhar(gJanela.getLargura() / 3.3, gJanela.getAltura() / 2.5);
	for (int i = 0; i < _numero_paginas; i++)
		paginas[i].desenhar();
}

void Jornal::configurarJornal(int numero_paginas, int numero_not_pp, int nro_coluna_pn)
{
	_numero_paginas = numero_paginas;
	_nro_noticia_por_pagina = numero_not_pp;
}

void Jornal::inicializar()
{
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

	paginas = new Pagina[_numero_paginas];
	for (int i = 0; i < _numero_paginas; i++) {
		paginas[i].defineNumeroNoticiasPorPagina(_nro_noticia_por_pagina);
		paginas[i].inicializar();
	}
}
