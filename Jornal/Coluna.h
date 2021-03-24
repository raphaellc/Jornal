#pragma once
#include "libUnicornio.h"
class Coluna
{
public:
	Coluna();
	~Coluna();
	void desenhar();
	void defineTextoColuna(string txt_coluna);
private:
	Texto coluna;
};

