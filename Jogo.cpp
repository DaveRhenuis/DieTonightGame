#include "Jogo.h"

using namespace sf;

//Construtora/Destrutora
Jogo::Jogo(){
	this->initVariables();
	this->initWindow();

	CircleShape shape(100.f);
	shape.setFillColor(Color::Green);
}

Jogo::~Jogo(){
	delete this->window;
}

//Funcoes ---------------------------------------------------------------------------------------------------------------------
void Jogo::update(){
	this->pollEvents();
}

//Event check
void Jogo::pollEvents(){
	while (this->window->pollEvent(this->event)){
		if (this->event.type == Event::Closed){
			this->window->close();
		}
		else if (this->event.type == Event::KeyPressed){
			if (this->event.key.code == Keyboard::Space){
				this->window->close();
			}
		}
	}
}

//Render drawables
void Jogo::render(){

	//clear old frame
	this->window->clear(Color::Red);

	//draw game objects

	//display the new frame with all drawables
	this->window->display();
}

//Variaveis -------------------------------------------------------------------------------------------------------------------
void Jogo::initVariables(){
	this->window = nullptr;
}

//Inicializar window
void Jogo::initWindow(){
	this->videoMode.width = 800;
	this->videoMode.height = 600;

	this->window = new RenderWindow(this->videoMode, "Die Tonight");
}

//Utilidade
const bool Jogo::running() const{
	return this->window->isOpen();
}

void Jogo::executar(){
	this->update();
	this->render();
}