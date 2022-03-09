#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class complex 
{
public:
	double Re, Im;
	complex sum(complex n1, complex n2);
	complex min(complex n1, complex n2);
	complex mult(complex n1, complex n2);
	complex div(complex n1, complex n2);

	

};


#endif
