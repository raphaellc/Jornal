#pragma once
#include "Coluna.h"
class Noticia
{
public:
	Noticia();
	void desenhar();
	void inicializar();
	void defineTextoNoticia(string texto);
	void defineColuna(Coluna* col);
private:
	Coluna* colunas;
	string texto_not;
};

