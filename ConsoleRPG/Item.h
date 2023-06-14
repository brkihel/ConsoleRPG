#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class Item {
public:
	Item();
	virtual ~Item();

	inline std::string debugPrint() const { return this->name; }

private:
	std::string name;
	int buyValue;
	int sellValue;

};

