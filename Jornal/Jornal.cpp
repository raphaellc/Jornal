#include "Jornal.h"

Jornal::Jornal()
{
	inicializar();
}

void Jornal::adicionaTituloJornal(string tit_jornal)
{
	texto_tituloJornal.setString(tit_jornal);
}

void Jornal::adicionaTituloNoticia(string tit_noticia)
{
	texto_tituloNoticia.setString(tit_noticia);
}

void Jornal::adicionaTextoNoticia(string texto_noticia)
{
	texto_coluna.setString(texto_noticia);
}

void Jornal::desenhar()
{
	sprite_tempJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 1.2);
	texto_tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 6);
	texto_coluna.desenhar(gJanela.getLargura() / 3.8, gJanela.getAltura() / 1.8);
	texto_tituloNoticia.desenhar(gJanela.getLargura() / 3.3, gJanela.getAltura() / 2.5);
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

	texto_coluna.setFonte("TextoColuna");
	texto_coluna.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	texto_coluna.setLarguraMaxima(100);
	texto_coluna.setEscala(0.5, 0.5);
	texto_coluna.setCor(0, 0, 0);
	texto_coluna.setEspacamentoLinhas(1.5);

}
