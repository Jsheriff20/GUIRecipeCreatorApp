#include <string>
#include <iostream>

#include "pch.h"
#include "covertCase.h"

using namespace std;


covertCase::covertCase()
{
}


covertCase::~covertCase()
{
}

void covertCase::convertToLower(string& s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
}

void covertCase::convertToUpper(string& s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
}