#include <iostream>
#include <string>
#include <vector>

#include "editIngredientsList.h"
#include "convertClass.h"
#include "SearchForIngredient.h"
#include "GettingIngredients.h"
#include "showImportantMessages.h"


convertClass convertInput;



std::string editIngredientsList::showIngredientsEditOptions() {

	std::string editIngredientsSelection;


	std::cout << "- To edit/ delete an ingredient enter the Ingredient's name." << std::endl;
	std::cout << "- To add another ingredient enter 'Add'." << std::endl;
	std::cout << "- If ingredient list is fine then type 'Skip'." << std::endl;


	std::getline(std::cin, editIngredientsSelection);
	convertInput.convertToLower(editIngredientsSelection);


	return editIngredientsSelection;
}



int editIngredientsList::checkIfIgredientIsInList(std::vector<std::string> ingredients, std::string ingredientsEditOptions) {

	for (int i = 0; i < ingredients.size(); i++){

		if (ingredients[i] == ingredientsEditOptions){

			return i;
		}
	}


	return -1;
}



std::string editIngredientsList::returnEditOrDelete(std::vector<std::string> ingredients, int editOrDeleteItemLocation) {

	std::string editOrDelete;


	do {

		std::cout << "Item selected: " << ingredients[editOrDeleteItemLocation] << std::endl;
		std::cout << "Enter: 'delete' OR 'edit'" << std::endl;
		std::getline(std::cin, editOrDelete);


		convertInput.convertToLower(editOrDelete); // convert input to lower
	} while (editOrDelete != "delete" && editOrDelete != "edit");


	return editOrDelete;
};



void editIngredientsList::deleteIngredientFromList(std::vector<double>*amountOfIngredient, std::vector<std::string>*measurement, std::vector<std::string>*ingredientName, std::vector<std::string>*ingredientDescription, int editOrDeleteItemLocation) {

	ingredientName->erase(ingredientName->begin() + editOrDeleteItemLocation);


	amountOfIngredient->erase(amountOfIngredient->begin() + editOrDeleteItemLocation);


	measurement->erase(measurement->begin() + editOrDeleteItemLocation);


	ingredientDescription->erase(ingredientDescription->begin() + editOrDeleteItemLocation);
};
