#pragma once
#include "Functions.h"
#include "Event.h"

#include <ctime>
#include <vector>

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
		void Travel();

	private:
		int choice;
		bool playing;


		//Character related
		int activeCharacter;
		std::vector<Character> characters;
		std::string fileName;
};

