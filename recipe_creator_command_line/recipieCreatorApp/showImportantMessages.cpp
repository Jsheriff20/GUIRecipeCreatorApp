#include "showImportantMessages.h"
#include <iostream>
#include <vector>
#include <string>



showImportantMessages::showImportantMessages()
{
}


showImportantMessages::~showImportantMessages()
{
}

void showImportantMessages::showStepsOfProgram() {
	std::cout << "Here are the steps you will be following to create your meal recipie:" << std::endl;
	std::cout << "1. Give the meal a name" << std::endl;
	std::cout << "2. Confirm the meal name" << std::endl;
	std::cout << "3. Add the ingredients" << std::endl;
	std::cout << "4. Confirm the ingredients list" << std::endl;
	std::cout << "5. Add each step to the method" << std::endl;
	std::cout << "6. Confirm the method" << std::endl;
	std::cout << "7. Confirm the whole meal recipie" << std::endl;
	std::cout << "8. Recipie Created" << std::endl << std::endl;
}

void showImportantMessages::welcomeMessage() {
	std::cout << std::endl << "Welcome to the Meal Recipie Application used to create meals for the 'Meal Planner Generator' Program" << std::endl << std::endl;
}

void showImportantMessages::showCurrentIngredientsList(std::vector<double>finalIgredientsAmounts, std::vector<std::string>finalIgredientsMeasurement, 
	std::vector<std::string>ingredients, std::vector<std::string>descriptionForIngredients) {


	//check to see if list is empty
	if (ingredients.size() < 1) {
		std::cout << "No ingredients" << std::endl;	
	}
	else {

		for (int i = 0; i < ingredients.size(); i++) {
			int x = i + 1;
			std::cout << x << ". " << finalIgredientsAmounts[i] << " " << finalIgredientsMeasurement[i] << " " << ingredients[i] <<
				" " << descriptionForIngredients[i] << " " << std::endl;
		};
	}
	std::cout << std::endl;
}

void showImportantMessages::showCurrentMethodList(std::vector<std::string> currentMethodListVector) {
	for (int i = 0; i < currentMethodListVector.size(); i++) {
		int step = (i + 1);
		std::cout << step << ". " << currentMethodListVector[i] << std::endl; // output step number and step description
	};

}