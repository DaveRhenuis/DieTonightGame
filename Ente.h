#pragma once

class Ente {
	public:
		int id;

		Ente();
		~Ente();
		virtual void executar() = 0;
		void desenhar();
	protected:

	private:
};
