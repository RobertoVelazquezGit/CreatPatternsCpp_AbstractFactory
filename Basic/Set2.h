#pragma once
#include "AbstractProductA.h"
#include <iostream>
#include "AbstractProductB.h"

class ProductA2 : public AbstractProductA {

public:
	void ProductA() override {
		std::cout << "[2] Product A\n";
	}
};

class ProductB2 : public AbstractProductB {

public:
	void ProductB() override {
		std::cout << "[2] Product B\n";
	}
};
