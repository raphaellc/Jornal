#include "Jogo.h"

int main(int argc, char* argv[])
{
	//Criar uma classe chamada Jornal
	//Encapsular as caracter�sticar e a��es do Jornal
	//Caracter�sticas: t�tulo do jornal; data da edi��o, site, t�tulo da not�cia, texto da not�cia.
	
	Jogo jornal;
	
	jornal.inicializar();
	jornal.executar();
	jornal.finalizar();

	return 0;
}