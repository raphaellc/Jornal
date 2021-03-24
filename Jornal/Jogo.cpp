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

	//	O resto da inicializa��o vem aqui!
	//	Carregar os Recursos
	carregarRecursos();
	
	//Definindo a base do jornal.
	jornal = new Jornal();
	jornal->adicionaTituloJornal("Movimento Di�rio");
	jornal->adicionaTituloNoticia("Pandemia j� faz XXXX v�timas");
	jornal->adicionaTextoNoticia("Ap�s descaso do Governo de Jair Bolsonaro, Brasil bate novos r�cordes de mortes e sistema de sa�de col�psa.");
	
	
	//Player
	
	player.setSpriteSheet("player");
	player.setAnimacao(0);
	//Painel Debug
	gDebug.setPos(150, 350);
}

void Jogo::finalizar()
{
	//	O resto da finaliza��o vem aqui (provavelmente, em ordem inversa a inicializa��o)!
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
