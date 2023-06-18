#include "Puzzle.h"


Puzzle::Puzzle(std::string fileName) {
	this->correctAnswer = 0;

	std::ifstream inFile(fileName);
	
	int numberOfAns = 0;
	std::string answer = " ";
	int correctAns = 0;

	if (inFile.is_open()) {
		std::getline(inFile, this->question);
		inFile >> numberOfAns;
		inFile.ignore();

		for (size_t i = 0; i < numberOfAns; i++) {
			std::getline(inFile, answer);
			this->answers.push_back(answer);
		}

		inFile >> correctAns;
		this->correctAnswer = correctAns;
		inFile.ignore();
	}
	else
		throw("ERROR 01 - Could not open puzzle!(Puzzle.cpp)");

	inFile.close();

}

Puzzle::~Puzzle() {

}

std::string Puzzle::getAsString() {

	std::string answers = "";

	for (int i = 0; i < this->answers.size(); i++) {
		answers += std::to_string(i) + ": " + this->answers[i] + "\n";
	}

	return this->question + "\n" + "\n"
		+ answers + "\n"
		+ std::to_string(this->correctAnswer) + "\n";
}