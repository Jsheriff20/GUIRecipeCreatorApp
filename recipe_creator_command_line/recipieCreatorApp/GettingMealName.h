#pragma once
#include <string>
#include <iostream>
class GettingMealName
{
public:
	GettingMealName();
	~GettingMealName();
	std::string getMealName();
	std::string confirmMealName(std::string currentMealName);
};

