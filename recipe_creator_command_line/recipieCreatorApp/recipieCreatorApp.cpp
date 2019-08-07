// recipieCreatorApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// to do next:
// check to see if mealname has already been taken
// if user enters ingredient that can not be found give suggestions
// tidy up screen (clear users window of previous stuff, for example when moved onto the add ingredient clear the add meal name section from the screen)
// re-word a few things so it is clear what it is thats being asked for 








#include <iostream>
#include <string>
#include <vector>

#include "GettingIngredients.h"
#include "convertClass.h"
#include "CreatingMethod.h"
#include "showImportantMessages.h"
#include "GettingMealName.h"
#include "SearchForIngredient.h"
#include "editIngredientsList.h"
#include "EditMethodSteps.h"
#include "BuildFinalIngredientsListVector.h"
#include "OutputToTextFile.h"


string mealName;
vector<string> ingredients;
vector<string> finalIgredientsMeasurement;
vector<double> finalIgredientsAmounts;
vector<string> descriptionForIngredients;
vector<string> methodList;
vector<string> finalIngredientsVector;



int main(){

	// set name of window
	std::system("title Recipie Creator Appication for Meal Planner Application");


	// create class objects
	convertClass convert;
	showImportantMessages messages;
	GettingMealName gettingMealName;
	SearchForIngredient findIngredient;
	editIngredientsList editFinalIngredientsList;


	//create default values for variables
	string mealNameConfirm = "no";
	bool addIngredient = true;
	bool addAdditionalIngredient = false;
	int ingredientNum = 0;
	GettingIngredients createIngredient;


	// show messages for user to know about program
	messages.welcomeMessage();
	messages.showStepsOfProgram();


	//get meal name and validate
	do {

		mealName = gettingMealName.getMealName();
		mealNameConfirm = gettingMealName.confirmMealName(mealName);


		//clear the screen
		std::system("cls");
	} while (mealNameConfirm != "y" && mealNameConfirm != "done" && mealNameConfirm != "yes"
			&& mealNameConfirm != " y" && mealNameConfirm != "y " && mealNameConfirm != "yes "
			&& mealNameConfirm != " yes"); 	// check to see if the user has pressed enter (or space then enter accidentally) 


	//Create and confirm ingredients list
	do {

		int editOrDeleteItemLocation = -1;


		createIngredient.GetIngredient(&finalIgredientsAmounts, &finalIgredientsMeasurement, &ingredients, &descriptionForIngredients, &ingredientNum, false, editOrDeleteItemLocation);
		
		
		bool stillEditingFinalIngredientsList = true;


		// show all ingredients in list and edit options
		cout << endl << endl << "Current Ingredients List: " << endl;
		messages.showCurrentIngredientsList(finalIgredientsAmounts, finalIgredientsMeasurement, ingredients, descriptionForIngredients);


		while (stillEditingFinalIngredientsList == true) {

			bool ingredientFound = false;
			string ingredientsEditOptions = editFinalIngredientsList.showIngredientsEditOptions();
			addAdditionalIngredient = false;


			if (ingredientsEditOptions == "skip") {

				break;
			}
			else if (ingredientsEditOptions == "add") {

				addAdditionalIngredient = true;// will loop through again allowing for more ingredients to be added
				break;// break out of current while loop
			}
			else
			{
				ingredientFound = false;


				// check to see if input is in ingredients list
				editOrDeleteItemLocation = editFinalIngredientsList.checkIfIgredientIsInList(ingredients, ingredientsEditOptions);


				if (editOrDeleteItemLocation >= 0) {

					ingredientFound = true;
				}
			}


			if (ingredientFound == true) {

				string editOrDelete = editFinalIngredientsList.returnEditOrDelete(ingredients, editOrDeleteItemLocation);


				if (editOrDelete == "delete") {

					editFinalIngredientsList.deleteIngredientFromList(&finalIgredientsAmounts, &finalIgredientsMeasurement, &ingredients, &descriptionForIngredients, editOrDeleteItemLocation);
					cout << endl << endl << "Current Ingredients List: " << endl;
					messages.showCurrentIngredientsList(finalIgredientsAmounts, finalIgredientsMeasurement, ingredients, descriptionForIngredients);


					cout << "Item deleted!" << endl;
				}
				else if (editOrDelete == "edit") {

					//will edit currently selected ingredient
					createIngredient.GetIngredient(&finalIgredientsAmounts, &finalIgredientsMeasurement, &ingredients, 
						&descriptionForIngredients, &ingredientNum, true, editOrDeleteItemLocation);


					cout << endl << endl << "Current Ingredients List: " << endl;
					messages.showCurrentIngredientsList(finalIgredientsAmounts, finalIgredientsMeasurement, ingredients, descriptionForIngredients);
				}
			}
		}
	} while (addAdditionalIngredient == true); // will keep looping whilst user wants to add more 


	BuildFinalIngredientsListVector buildFinalIngredientsListVector;
	buildFinalIngredientsListVector.buildFinalIngredientsListVector(&finalIngredientsVector, &finalIgredientsAmounts, &finalIgredientsMeasurement,
		&ingredients, &descriptionForIngredients);


	// create and confirm method list
	string methodStep;

	CreatingMethod addMethodStep;

	addMethodStep.CreateMethodStepsVector(&methodList);
	 
	EditMethodSteps editMethodSteps;
	bool keepEditingMethodSteps = true;
	while (keepEditingMethodSteps) {
		cout << "Current method list:" << endl;
		messages.showCurrentMethodList(methodList);


		//show method edit steps options and take input
		string methodStepsEditOptions = editMethodSteps.showMethodStepsEditOptions();

		keepEditingMethodSteps = editMethodSteps.carryOutFunctionDependingOnInput(methodStepsEditOptions, &methodList);
	}






	cout << "Meal Name: " << 
		mealName << endl << endl;


	cout << "Ingredients:" << endl;
	messages.showCurrentIngredientsList(finalIgredientsAmounts, finalIgredientsMeasurement, ingredients, descriptionForIngredients);


	cout << endl << endl << "Method:" << endl;
	messages.showCurrentMethodList(methodList);


	OutputToTextFile outputToTextFile;
	outputToTextFile.outputToTextFile(mealName, finalIngredientsVector, methodList);
	std::system("pause");
}
