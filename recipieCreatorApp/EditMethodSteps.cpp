#include<iostream>
#include<string>
#include <vector>

#include "EditMethodSteps.h"
#include "convertClass.h"
#include "CreatingMethod.h"





EditMethodSteps::EditMethodSteps()
{
}


EditMethodSteps::~EditMethodSteps()
{
}

convertClass convertUserInput;
CreatingMethod createMethod;
std::string EditMethodSteps::showMethodStepsEditOptions() {
	std::string editMethodStepsSelection;


	std::cout << "- To Edit/ Delete an method step, enter the step number." << std::endl;
	std::cout << "- To Add a step, enter 'Add'." << std::endl;
	std::cout << "- To Confirm all Method steps, enter 'Skip'." << std::endl;

	std::getline(std::cin, editMethodStepsSelection);
	convertUserInput.convertToLower(editMethodStepsSelection);

	return editMethodStepsSelection;
}

void editCurrentMethodSteps() {
}

void deleteItemFromCurrentMethodSteps() {
}

bool EditMethodSteps::carryOutFunctionDependingOnInput(std::string editMethodStepsSelection, std::vector<std::string>* methodStepsVector) {

	if (editMethodStepsSelection == "skip") {
		// if function returns true then it will break out of loop in main file
		return false;

	}
	else if (editMethodStepsSelection == "add") {
		createMethod.CreateMethodStepsVector(methodStepsVector);
		return true;
	}
	else {
		try {
			if (stoi(editMethodStepsSelection) <= methodStepsVector->size() && stoi(editMethodStepsSelection) > 0
				&& editMethodStepsSelection.length() > 0) {
				string editOrDelete;
				while (editOrDelete != "edit" && editOrDelete != "delete") {

					cout << "Step number: " << editMethodStepsSelection << " selected." << endl;

					cout << "Type 'edit' or 'delete': " << flush;
					getline(cin, editOrDelete);
					convertUserInput.convertToLower(editOrDelete);

					if (editOrDelete == "delete") {
						int editMethodStepSelected = stoi(editMethodStepsSelection) - 1;

						// error handling (vectorName.erase does not work when deleting last item in vector)
						if (editMethodStepSelected = methodStepsVector->size()) {
							methodStepsVector->pop_back();
						}
						else {
							*methodStepsVector->erase(methodStepsVector->begin() + editMethodStepSelected); // error when deleting last element
						}
					}
					else if (editOrDelete == "edit") {
						string newStepDescription = "";
						while (newStepDescription.length() < 6) {
							cout << "Change step: " << editMethodStepsSelection << "'s description to: " << flush;
							getline(cin, newStepDescription);


							if (newStepDescription == "exit") {
								return true;
							}
							else if (newStepDescription.length() < 6) {
								cout << "Please enter valid description for step, or enter 'exit' to cancel edit" << endl;
							}
							else {
								int editMethodStepSelected = (stoi(editMethodStepsSelection) - 1);
								methodStepsVector->at(editMethodStepSelected) = newStepDescription;
							}
						}
					}
				}
				return true;
			}

		}
		catch (invalid_argument) {

			std::cout << "Please enter a valid input option:" << std::endl;
			showMethodStepsEditOptions();
			return true;
		}
	}
}