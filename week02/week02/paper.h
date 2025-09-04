#pragma once
#include <iostream>
using namespace std;

class Paper {
private:
	string tree;
	
public:
	Paper();
	Paper(string tree);
	void print1() const;
};

