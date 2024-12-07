#include <stdio.h>
#include <iostream>

#include "Jogo.h"
#include "GerenciadorGrafico.h"
#include "GerenciadorColisoes.h"
#include "Ente.h"

using namespace sf;

int main()
{
    
    //Inicializar jogo
    Jogo game;

    //Main game loop
    while (game.running())
    {
        game.executar();   
    }

    return 0;
}