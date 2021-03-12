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
	//	Carregar os Assets
	gRecursos.carregarSpriteSheet("templateJornal", "../assets/JornalTemplate.png", 1, 1);
	//Definindo a base do jornal.
	sprite_tempJornal.setSpriteSheet("templateJornal");
	sprite_tempJornal.setEscala(0.5, 0.5);
	//carregar fontes
	gRecursos.carregarFonte("TituloJornal","../assets/pixelplay.ttf");
	gRecursos.carregarFonte("TextoColuna","../assets/new_browserlink.ttf");
	texto_tituloJornal.setFonte("TituloJornal");
	texto_tituloJornal.setString("Movimento Di�rio");
	texto_tituloJornal.setCor(0, 0, 0);
	texto_tituloJornal.setAlinhamento(TEXTO_CENTRALIZADO);
	texto_tituloJornal.setCorPalavra("Di�rio", 128, 0, 0);
	texto_tituloJornal.setEscala(5, 5);
	//TextoColuna
	texto_coluna.setFonte("TextoColuna");
	texto_coluna.setString("Na introdu��o, poderia ter mais informa��es do porque foram escolhidos os jogos para serem analisados, por exemplo ao citarem um jogo que v�o desenvolver, apresentar uma breve descri��o");
	texto_coluna.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	texto_coluna.setLarguraMaxima(100);
	texto_coluna.setEscala(0.5,0.5);
	texto_coluna.setCor(0, 0, 0);
	texto_coluna.setEspacamentoLinhas(1.5);
	//Player
	gRecursos.carregarSpriteSheet("player","../assets/Player.png",1,2);
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
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		//	Se pressionou R, restaura o painel de debug
		if (gTeclado.pressionou[TECLA_R])
			gDebug.restaurar();
		//	Seu c�digo vem aqui!
		//	...
		sprite_tempJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() /1.2);
		texto_tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 6);
		texto_coluna.desenhar(gJanela.getLargura() / 3.8, gJanela.getAltura() / 1.8);
		gDebug.depurar("FPS", (int)gTempo.getFPS());
		gDebug.depurar("deltaTempo", gTempo.getDeltaTempo());
		player.avancarAnimacao();
		player.desenhar(gJanela.getLargura() / 3, gJanela.getAltura() / 6);
		uniTerminarFrame();
	}
}