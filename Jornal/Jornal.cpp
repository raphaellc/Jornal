#include "Jornal.h"

Jornal::Jornal()
{
	inicializar();
}

void Jornal::adicionaTituloJornal(string tit_jornal)
{
	texto_tituloJornal.setString(tit_jornal);
}

void Jornal::desenhar()
{
	sprite_tempJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 1.2);
	texto_tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 6);
	texto_coluna.desenhar(gJanela.getLargura() / 3.8, gJanela.getAltura() / 1.8);
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

	texto_coluna.setString("criar metodo");
	texto_coluna.setFonte("TextoColuna");
	texto_coluna.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	texto_coluna.setLarguraMaxima(100);
	texto_coluna.setEscala(0.5, 0.5);
	texto_coluna.setCor(0, 0, 0);
	texto_coluna.setEspacamentoLinhas(1.5);

}
