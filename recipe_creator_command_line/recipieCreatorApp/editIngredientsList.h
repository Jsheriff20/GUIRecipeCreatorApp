#pragma once
#include<iostream>
#include<string>
#include <vector>

class editIngredientsList
{
public:


	std::string showIngredientsEditOptions();
	int checkIfIgredientIsInList(std::vector<std::string> ingredients, std::string ingredientsEditOptions);
	std::string returnEditOrDelete(std::vector<std::string> ingredients, int editOrDeleteItemLocation);
	void deleteIngredientFromList(std::vector<double>*amountOfIngredient, std::vector<std::string>*measurement, std::vector<std::string>*ingredientName, std::vector<std::string>*ingredientDescription, int editOrDeleteItemLocation);

};