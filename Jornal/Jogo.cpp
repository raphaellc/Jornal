#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	//	O resto da inicialização vem aqui!
	//	Carregar os Recursos
	carregarRecursos();
	
	//Definindo a base do jornal.
	jornal = new Jornal();
	jornal->adicionaTituloJornal("Movimento Diário");
	jornal->adicionaTituloNoticia("Pandemia já faz XXXX vítimas");
	jornal->adicionaTextoNoticia("Após descaso do Governo de Jair Bolsonaro, Brasil bate novos récordes de mortes e sistema de saúde colápsa.");
	
	
	//Player
	
	player.setSpriteSheet("player");
	player.setAnimacao(0);
	//Painel Debug
	gDebug.setPos(150, 350);
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...
	
	uniFinalizar();
}

void Jogo::executar()
{
	Jornal* j1;
	
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		//	Se pressionou R, restaura o painel de debug
		if (gTeclado.pressionou[TECLA_R])
			gDebug.restaurar();
		jornal->desenhar();
		gDebug.depurar("FPS", (int)gTempo.getFPS());
		gDebug.depurar("deltaTempo", gTempo.getDeltaTempo());
		player.avancarAnimacao();
		player.desenhar(gJanela.getLargura() / 3, gJanela.getAltura() / 6);
		uniTerminarFrame();
	}
	delete jornal;
}

void Jogo::carregarRecursos()
{
	gRecursos.carregarFonte("TituloJornal", "../assets/pixelplay.ttf");
	gRecursos.carregarFonte("TextoColuna", "../assets/new_browserlink.ttf");
	gRecursos.carregarSpriteSheet("templateJornal", "../assets/JornalTemplate.png", 1, 1);
	gRecursos.carregarSpriteSheet("player", "../assets/Player.png", 1, 2);
}
