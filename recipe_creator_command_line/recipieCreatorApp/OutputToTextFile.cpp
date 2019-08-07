#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "OutputToTextFile.h"



OutputToTextFile::OutputToTextFile()
{
}



OutputToTextFile::~OutputToTextFile()
{
}



void OutputToTextFile::outputToTextFile(std::string mealName, std::vector<std::string>finalIngredientsVector, std::vector<std::string>finalMethodVector) {

	std::ofstream outputFile; 
	std::string fileName = mealName + ".txt";


	outputFile.open(fileName);


	if (outputFile.is_open()) {

		outputFile << "Meal Name: " << mealName << std::endl << std::endl << std::endl;


		outputFile << "Ingredients:" << std::endl;
		for (int i = 0; i < finalIngredientsVector.size(); i++) {

			outputFile << finalIngredientsVector[i] << std::endl;
		}


		outputFile << std::endl << std::endl << std::endl;


		outputFile << "Method:" << std::endl;
		for (int i = 0; i < finalMethodVector.size(); i++) {

			outputFile << finalMethodVector[i] << std::endl;
		}
	}
	else {

		std::cout << "Could not create file:" << fileName << std::endl;
	}
	outputFile.close();
}