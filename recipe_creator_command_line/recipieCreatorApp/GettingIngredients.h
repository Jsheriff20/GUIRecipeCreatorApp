#pragma once
#include <iostream>
#include <string>
#include <vector>

class GettingIngredients
{
public:

	GettingIngredients();
	~GettingIngredients();

	void GetIngredient(std::vector<double>*finalIngredientsAmounts, std::vector<std::string>*finalIngredientsMeasurement, 
		std::vector<std::string>*ingredients, std::vector<std::string>*descriptionForIngredients, int *ingredientNum, 
		bool editingExistingIngredientsListOrNot, int editOrDeleteItemLocation);
};

