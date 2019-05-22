#include "GettingIngredients.h"
#include "convertClass.h"
#include <iostream>
#include <string>
#include <vector>

#include "SearchForIngredient.h"

using namespace std;

convertClass convert;

GettingIngredients::GettingIngredients()
{
}


GettingIngredients::~GettingIngredients()
{
}

string getIngredientName(bool editingExistingIngredientsListOrNot) {
	string ingredient;
	if (editingExistingIngredientsListOrNot == false) {
		cout << endl << "Enter yout ingredient, once finished adding ingredients enter 'done' " << endl;
	}
	else {
		cout << endl << "To exit ingredient edit: enter 'done' " << endl;
	}
	cout << "Search for item name: " << flush;
	getline(cin, ingredient);
	convert.convertToLower(ingredient);


	//clear the screen
	std::system("cls");


	return ingredient;
};

string getMeasurementType() {
	string measurement;
	do {

		cout << endl << "- Grams(type 'g')" << endl;
		cout << "- Kilo Grams (type 'kg')" << endl;
		cout << "- milliliter (type 'ml')" << endl;
		cout << "- litre (type 'l')" << endl;
		cout << "- table spoon (type 'tbsp')" << endl;
		cout << "- tea spoon (type 'tsp')" << endl;
		cout << "- number of items (type 'num')" << endl << endl;
		cout << "Enter the measurement type (find a list of options above): " << flush;
		getline(cin, measurement);
		convert.convertToLower(measurement);


		//clear the screen
		std::system("cls");


	} while (measurement != "g" && measurement != "kg" && measurement != "ml" && measurement != "l" && measurement != "tbsp" && measurement != "tsp" && measurement != "num");
	
	
	if (measurement == "num") {
		measurement = "";
	}

	return measurement;
};

double getAmount() {
	double amount;
	do {
		cout << endl << "enter the amount - only numbers(for 1/2 type 0.5): " << flush;
		cin >> amount;


		//clear the screen
		std::system("cls");


		if (cin.fail()) {
			cout << endl << "Please enter a valid number" << flush;
			amount = -1; // this will make it so it can not exit the while loop
			cin.clear(); // clear the bad input from cin
		}
		else if (amount <= 0) {
			cout << endl << "Please enter a valid number" << flush;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (amount <= 0);


	return amount;
};

string getDescription() {
	string description = "";
	cout << endl << "Enter description about ingredients (eg: finely diced) OR press 'ENTER' to skip: " << flush;
	getline(cin, description);

	.
	//clear the screen
	std::system("cls");


	return description;
};

SearchForIngredient findIngredient;
void GettingIngredients::GetIngredient(vector<double>*finalIngredientsAmounts, vector<string>*finalIngredientsMeasurement,
	vector<string>*ingredients, vector<string>*descriptionForIngredients, int *ingredientNum, bool editingExistingIngredientsListOrNot, int editOrDeleteItemLocation) {
	while (true) {
		bool goodIngredient = false;
		string ingredient;

		while (goodIngredient == false) {
			ingredient = getIngredientName(editingExistingIngredientsListOrNot);

			//see if user is done adding ingredients
			if (ingredient == "done") {
				break;
			}

			goodIngredient = findIngredient.findIngredient(ingredient);
		}

		if (ingredient == "done") {
			break;
		}

		// get specs for each ingredient
		string measurementType = getMeasurementType();
		double amount = getAmount();
		string description = getDescription();


		if (editingExistingIngredientsListOrNot == false) {
			// add ingredient and specs to vectors
			ingredients->push_back(ingredient);
			finalIngredientsMeasurement->push_back(measurementType);
			finalIngredientsAmounts->push_back(amount);
			descriptionForIngredients->push_back(description);
		}
		else {
			(*ingredients)[editOrDeleteItemLocation] = ingredient;
			(*finalIngredientsMeasurement)[editOrDeleteItemLocation] = measurementType;
			(*finalIngredientsAmounts)[editOrDeleteItemLocation] = amount;
			(*descriptionForIngredients)[editOrDeleteItemLocation] = description;


		}

		// increase the amount of ingredients in list
		*ingredientNum += 1;


		// display item just added to list
		if (editingExistingIngredientsListOrNot == false) {
			cout << endl << "Item: " << amount << " " << measurementType << " " << ingredient << " " << description << "    has been added to list." << endl << endl << endl << endl;
		}
		else {
			string oldIngredient = (*ingredients)[editOrDeleteItemLocation];
			cout << endl << "Item: " << oldIngredient << " has been replaced with " << amount << " " << measurementType
				<< " " << ingredient << " " << description << "    has been added to list." << endl << endl << endl << endl;
			break;
		}


	}
}


