#pragma once
#include <iostream>
#include <vector>
#include <string>
class showImportantMessages
{
public:
	showImportantMessages();
	~showImportantMessages();

	void showStepsOfProgram();
	void welcomeMessage();
	void showCurrentIngredientsList(std::vector<double>finalIgredientsAmounts, std::vector<std::string>finalIgredientsMeasurement,
		std::vector<std::string>ingredients, std::vector<std::string>descriptionForIngredients);
	void showCurrentMethodList(std::vector<std::string> currentMethodListVector);
};

