#pragma once
#include "Functions.h"
#include "Character.h"

#include <ctime>

class Game {
	public:
		Game();
		virtual ~Game();

		//Accessors
		inline bool getPlaying() const { return this->playing; };

		//Modifiers

		//Operators

		//Functions
		void mainMenu();
		void initGame();

	private:
		int choice;
		bool playing;


		//Character related
		Character character;
};

