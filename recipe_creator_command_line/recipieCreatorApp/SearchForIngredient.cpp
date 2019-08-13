#include "SearchForIngredient.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
SearchForIngredient::SearchForIngredient()
{
}


SearchForIngredient::~SearchForIngredient()
{
}



bool SearchForIngredient::findIngredient(string ingredient) {
	string currentLine;
	ifstream ingredientsFile("ingredientsList.txt"); // set name of file with ingredients list in
	bool goodIngredient = false;
	if (ingredientsFile.is_open()) {

		//will get the line from the file then store it then loop through untill no more lines left
		while (getline(ingredientsFile, currentLine)) {

			if (currentLine == ingredient) {
				cout << endl<< "Item found!" << endl;
				return true;
			}

		}
		cout << endl <<"Could not find item." << endl;
		return false;
	}
	else {
		std::cout << "Error: File is not open" << endl;
		return false;
	}

}