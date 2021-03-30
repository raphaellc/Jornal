#include "Coluna.h"

Coluna::Coluna()
{
}

Coluna::~Coluna()
{
}

void Coluna::inicializar()
{
	if (gRecursos.carregouFonte("TextoColuna"))
		coluna.setFonte("TextoColuna");
	coluna.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	coluna.setLarguraMaxima(100);
	coluna.setEscala(0.5, 0.5);
	coluna.setCor(0, 0, 0);
	coluna.setEspacamentoLinhas(1.5);
}

void Coluna::desenhar()
{
	coluna.desenhar(gJanela.getLargura() / 3.8, gJanela.getAltura() / 1.8);
}

void Coluna::defineTextoColuna(string txt_coluna)
{
	coluna.setString(txt_coluna);
}

void Coluna::defineX(int x)
{
	_x = x;
}

void Coluna::defineY(int y)
{
	_y = y;
}
