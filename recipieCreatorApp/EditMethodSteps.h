#pragma once
#include <string>
#include <iostream>
#include <vector>

class EditMethodSteps
{
public:
	EditMethodSteps();
	~EditMethodSteps();

	std::string showMethodStepsEditOptions();
	bool carryOutFunctionDependingOnInput(std::string editMethodStepsSelection, std::vector<std::string>* methodStepsVector);
};

