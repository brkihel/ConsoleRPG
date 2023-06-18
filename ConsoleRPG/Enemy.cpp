#include "Enemy.h"

Enemy::Enemy(int level) {
	this->mobLvl = level;
	this->mobHpMax = level * 10;
	this->mobHp = mobHpMax;
	this->mobDmgMin = this->mobLvl * 4;
	this->mobDmgMax = this->mobLvl * 5;
	this->mobDropChance = rand() % 100;
	this->mobDefence = rand() % 100;
	this->mobAccuracy = rand() % 100;
}

Enemy::~Enemy() {

}

std::string Enemy::getAsString() const{
	return "Level " + std::to_string(this->mobLvl) + "\n" +
		"HP: " + std::to_string(this->mobHp) + " / " + std::to_string(this->mobHpMax) + "\n" +
		"Damage: " + std::to_string(this->mobDmgMin) + " / " + std::to_string(this->mobDmgMax) + "\n" +
		"Defence: " + std::to_string(this->mobDefence) + "\n" +
		"Accuracy: " + std::to_string(this->mobAccuracy) + "\n" +
		"Spoil drop chance: " + std::to_string(this->mobDropChance) + "\n";
}