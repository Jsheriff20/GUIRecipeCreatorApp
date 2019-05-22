#include "GettingMealName.h"
#include "convertClass.h"

#include <iostream>
#include<string>


using namespace std;
GettingMealName::GettingMealName()
{
}


GettingMealName::~GettingMealName()
{
}

string currentMealName = "";
convertClass convertMealName;

string GettingMealName::getMealName() {



	do { // ask for meal name
		cout << endl << "Enter the meal name: " << flush;
		getline(cin, currentMealName);


		//clear the screen
		std::system("cls");


		// validate input
		if (currentMealName.length() < 3) {
			cout << endl << "Minimum of 3 characters" << endl;
		}
		else if (currentMealName.length() > 35) {
			cout << endl << "Maximum of 35 characters" << endl;
		}
	} while (currentMealName.length() < 3 || currentMealName.length() > 35);

	convertMealName.convertToUpper(currentMealName);
	return currentMealName;
}

string GettingMealName::confirmMealName(string currentMealName) {
	string mealNameConfirm;


	// confirm meal name
	cout << endl << "Please confirm your meal's name is: '" << currentMealName << "' [Yes/No]: " << flush;


	getline(cin, mealNameConfirm);
	convertMealName.convertToLower(mealNameConfirm);

	cout << endl;


	return mealNameConfirm;
}
