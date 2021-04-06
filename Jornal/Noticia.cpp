#include "Noticia.h"

Noticia::Noticia()
{
	_coluna = 0;
}

void Noticia::desenhar()
{
	for (int i = 0; i < 2; i++)
		_colunas[i].desenhar();
}

void Noticia::inicializar()
{
	_titulo_noticia.setFonte("TituloJornal");
	_titulo_noticia.setCor(0, 0, 0);
	_titulo_noticia.setAlinhamento(TEXTO_CENTRALIZADO);
	_titulo_noticia.setEscala(1.5, 1.5);
	_colunas = new Coluna[2];
	for (size_t i = 0; i < 2; i++)
	{
		_colunas[i].defineX(gJanela.getLargura() / (3.8 - i*2));
		_colunas[i].defineY(gJanela.getAltura() / (1.8));
		_colunas[i].inicializar();
	}
}

void Noticia::defineTituloNoticia(string titulo_noticia)
{
	_titulo_noticia.setString(titulo_noticia);
}

void Noticia::defineTextoNoticia(string texto_noticia)
{
	_colunas[_coluna].defineTextoColuna(texto_noticia);
	if (_coluna >= 1) _coluna = 0;
	else _coluna++;
}



Coluna* Noticia::obtemColunas()
{
	return _colunas;
}

