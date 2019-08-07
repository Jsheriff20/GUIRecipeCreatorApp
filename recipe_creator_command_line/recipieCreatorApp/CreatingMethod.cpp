#include "CreatingMethod.h"
#include "convertClass.h"

#include <string>
#include <iostream>
#include <vector>

using namespace std;


CreatingMethod::CreatingMethod()
{
}



CreatingMethod::~CreatingMethod()
{
}



convertClass convertToLower;



string addMethodStep(vector<string> methodList) {

	string methodStepDescription = "";
	int stepNumber = (methodList.size() + 1);


	cout << endl << "Once finished adding method steps enter 'done' " << endl;


	do {

		cout << "Enter next step: " << stepNumber << ". " << flush;
		getline(cin, methodStepDescription);


		if (methodStepDescription == "" || methodStepDescription == " ") {

			cout<< endl << "Please enter description for method step: " << stepNumber << " ,or if finished enter 'done'" << endl;
		}
		else if (methodStepDescription.length() < 6) {

			if (methodStepDescription != "done") {

				cout << endl << "Please enter valid description for step " << stepNumber << endl;
			}
		}
	} while (methodStepDescription.length() < 6 && methodStepDescription != "done");


	convertToLower.convertToLower(methodStepDescription);


	return methodStepDescription;
}



void CreatingMethod::CreateMethodStepsVector(vector<string>* methodList) {

	while (true) {

		string methodStep = addMethodStep(*methodList);


		if (methodStep == "done") {

			break;
		}
		else {

			methodList->push_back(methodStep);
		}
	}
}