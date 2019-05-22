#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "BuildFinalIngredientsListVector.h"



BuildFinalIngredientsListVector::BuildFinalIngredientsListVector()
{
}


BuildFinalIngredientsListVector::~BuildFinalIngredientsListVector()
{
}

void BuildFinalIngredientsListVector::buildFinalIngredientsListVector(std::vector<std::string>* finalIngredientsListVector,
	std::vector<double>* finalIngredientsAmount, std::vector<std::string>* finalIngredientsMeasurement, 
	std::vector<std::string>* finalIngredientsName, std::vector<std::string>* finalIngredientsDescription) {

	for (int i = 0; i < finalIngredientsName->size(); i++) {


		std::stringstream concatinatedString;
		concatinatedString << (*finalIngredientsAmount)[i];
		concatinatedString << " ";
		concatinatedString << (*finalIngredientsMeasurement)[i];
		concatinatedString << " ";
		concatinatedString << (*finalIngredientsName)[i];
		concatinatedString << " ";
		concatinatedString << (*finalIngredientsDescription)[i];


		finalIngredientsListVector->push_back(concatinatedString.str());
	}
}