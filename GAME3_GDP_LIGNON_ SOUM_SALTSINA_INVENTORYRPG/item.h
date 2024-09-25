#pragma once

#include "string"
#include "iostream"

class item
{
public:

	item();
	~item();

	std::string name;
	std::string description;
	std::string hiddenDescription;
	std::string imagePath;
	int amount;
	int weight;
};

