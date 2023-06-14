#pragma once
#include "Item.h"

class Inventory {
public:
	Inventory();
	virtual ~Inventory();
	void addItem(const Item& item);
	void removeItem(int index);

	inline void debugPrint() const {
		for (size_t i = 0; i < this->nrOfItems; i++) {
			std::cout << this->itemArr[i]->debugPrint() << std::endl;
		}
	}

private:
	int cap;
	int nrOfItems;
	Item** itemArr;
	void expand();
	void initialize(const int from);
};

