#pragma once

#include <iostream>
#include <string>
#include <vector>

class OutputToTextFile
{
public:
	OutputToTextFile();
	~OutputToTextFile();

	void outputToTextFile(std::string mealName, std::vector<std::string>finalIngredientsVector, std::vector<std::string>finalMethodVector);
};

