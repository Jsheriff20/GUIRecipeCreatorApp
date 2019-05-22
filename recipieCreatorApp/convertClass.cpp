#include <string>
#include <iostream>
#include "convertClass.h"

using namespace std;

convertClass::convertClass()
{
}


convertClass::~convertClass()
{
}

void convertClass::convertToLower(string& s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
};

void convertClass::convertToUpper(string& s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
};
