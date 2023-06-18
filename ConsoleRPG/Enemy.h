#pragma once

#include <stdlib.h>
#include <string>

class Enemy {
	public:
		Enemy(int level = 0);
		virtual ~Enemy();

		inline bool isAlive() { return this->mobHp > 0; }
		std::string getAsString() const;
		inline void takeDamage(int damage) { this->mobHp -= damage; }
		inline int getDamage() const { return rand() % this->mobDmgMax - this->mobDmgMin; }
		inline int getExp() const { return this->mobLvl * 100; }

	private:
		int mobLvl;
		int mobHp;
		int mobHpMax;
		int mobDmgMin;
		int mobDmgMax;
		float mobDropChance;
		int mobDefence;
		int mobAccuracy;

};