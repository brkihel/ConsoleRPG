#pragma once
#include <stdlib.h>

#include "Character.h"
#include "Puzzle.h"

class Event {

	public:
		Event();
		virtual ~Event();

		//Functions
		void generateEvent(Character &character);

		//Events
		void enemyEncounter(Character& character);
		void puzzleEncounter(Character& character);

	private:
		int nrOfEvents;
};

