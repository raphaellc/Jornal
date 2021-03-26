#pragma once
#include "libUnicornio.h"
class Coluna
{
public:
	Coluna();
	~Coluna();
	void desenhar();
	void defineTextoColuna(string txt_coluna);
	void defineX(int x);
	void defineY(int y);
private:
	Texto coluna;
	int x, y;
};

