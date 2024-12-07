#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>

using namespace sf;

class Jogo {
	public:
		Jogo();
		~Jogo();

		void update();
		void pollEvents();
		void render();

		const bool running() const;

		void executar();
	protected:

	private:
		RenderWindow* window;
		VideoMode videoMode;
		
		Event event;

		void initVariables();
		void initWindow();
};