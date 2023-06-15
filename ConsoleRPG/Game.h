#pragma once
#include "Functions.h"
#include "Character.h"

#include <ctime>
#include <vector>
#include <fstream>

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
		void createNewCharacter();
		void saveCharacter();
		void loadCharacter();

	private:
		int choice;
		bool playing;


		//Character related
		int activeCharacter;
		std::vector<Character> characters;
		std::string fileName;
};

