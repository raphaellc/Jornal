#include "Jogo.h"

int main(int argc, char* argv[])
{
	//Criar uma classe chamada Jornal
	//Encapsular as característicar e ações do Jornal
	//Características: título do jornal; data da edição, site, título da notícia, texto da notícia.
	
	Jogo jornal;
	
	jornal.inicializar();
	jornal.executar();
	jornal.finalizar();

	return 0;
}