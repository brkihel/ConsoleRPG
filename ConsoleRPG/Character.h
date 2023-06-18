#pragma once
#include "Inventory.h"
#include "Enemy.h"

class Character {
	
	public:
		Character();
		virtual ~Character();

		//Accessors
		inline const double& getX() const { return this->xPos; }
		inline const double& getY() const { return this->yPos; }
		inline const int& getDistanceTravelled() const { return this->distanceTravelled; }

		inline const std::string& getName() const { return this->name; }
		inline const int& getLevel() const { return this->level; }
		inline const int& getExp() const { return this->exp; }
		inline const int& getExpNext() const { return this->expNext; }
		inline const int& getHp() const { return this->hp; }
		inline const int& getHpMax() const { return this->hpMax; }
		inline const int& getStamina() const { return this->stamina; }
		inline const int& getStaminaMax() const { return this->staminaMax; }

		inline const int& getDamageMin() const { return this->damageMin; }
		inline const int& getMeleeDamageMin() const { return this->meleeDamageMin; }
		inline const int& getRangedDamageMin() const { return this->rangedDamageMin; }
		inline const int& getDamageMax() const { return this->damageMax; }
		inline const int& getMeleeDamageMax() const { return this->meleeDamageMax; }
		inline const int& getRangedDamageMax() const { return this->rangedDamageMax; }
		inline const int& getDamageCrit() const { return this->damageCrit; }
		inline const int& getDefence() const { return this->defence; }

		//Modifiers
		inline void setDistanceTravelled(const int& distance) { this->distanceTravelled = distance; }
		inline void travel() { this->distanceTravelled++; }

		//Functions
		void initialize(const std::string name);
		void printStats() const;
		void levelUp();
		std::string getAsString()const;

	private:
		double xPos;
		double yPos;

		int distanceTravelled;
		
		Inventory inventory;
		Weapon weapon;
		Armor armor_head;
		Armor armor_chest;
		Armor armor_arms;
		Armor armor_legs;
		int gold;

		std::string name;
		int level;
		int exp;
		int expNext;

		//Common character atributes
		int strenght;
		int vitality;
		int dexterity;
		int intelligence;
		int luck;

		int areaPercept;

		//Common stats
		int hp;
		int hpMax;
		int stamina;
		int staminaMax;

		//Damage types/accuracy/reduction
		int damageMin;
		int meleeDamageMin;
		int rangedDamageMin;
		int damageMax;
		int meleeDamageMax;
		int rangedDamageMax;
		int damageCrit;
		int defence;
		int critChance;		
		int accuracy;
		
		int statPoints;
		int skillPoints;
};

