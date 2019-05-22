#pragma once
class BuildFinalIngredientsListVector
{
public:
	BuildFinalIngredientsListVector();
	~BuildFinalIngredientsListVector();
	void buildFinalIngredientsListVector(std::vector<std::string>* finalIngredientsListVector,
		std::vector<double>* finalIngredientsAmount, std::vector<std::string>* finalIngredientsMeasurement,
		std::vector<std::string>* finalIngredientsName, std::vector<std::string>* finalIngredientsDescription);
};

