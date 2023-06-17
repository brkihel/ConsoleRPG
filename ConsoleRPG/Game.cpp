#include "Game.h"

Game::Game(){
	choice = 0;
	playing = true;
	activeCharacter = 0;
	fileName = "caracters.txt";
}

Game::~Game() {

}

//Functions
void Game::initGame() {
	Inventory inv;
	createNewCharacter();
}

void Game::mainMenu() {
	std::cout << "MAIN MENU" << std::endl << std::endl;

	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Rest" << std::endl;
	std::cout << "3: Shop" << std::endl;
	std::cout << "4: Level Up" << std::endl;
	std::cout << "5: Character sheet" << std::endl;
	std::cout << "6: Save character" << std::endl;
	std::cout << "7: Load character" << std::endl;
	std::cout << "8: Create new character" << std::endl;
	std::cout << "0: Quit" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Choice: ";
	std::cin >> choice;

	switch (choice) {

	case 0:
		playing = false;
		break;

	case 5:
		characters[activeCharacter].printStats();
		break;

	case 6:
		saveCharacter();
		break;

	case 7:
		loadCharacter();
		break;

	case 8:
		std::cin.ignore();	
		createNewCharacter();
		saveCharacter();
		break;

	default:
		break;
	}
}

void Game::createNewCharacter() {
	std::string name;
	std::cout << "Enter the name for your character" << std::endl;
	getline(std::cin, name);

	characters.push_back(Character());
	activeCharacter = characters.size() - 1;
	characters[activeCharacter].initialize(name);
}

void Game::saveCharacter() {
	std::ofstream outFile(fileName);
	if (outFile.is_open()) {
		for (size_t i = 0; i < characters.size(); i++) {
			outFile << characters[i].getAsString() << "\n";
		}
	}

	outFile.close();
}

void Game::loadCharacter() {

}