#ifndef _BADPERSON_H
#define _BADPERSON_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class badPerson :
	public Person
{
public:
	badPerson(double blood = 0, double down = 0, double up = 0, string name = 0) : blood(blood), down(down), up(up), name(name){}
	~badPerson();
	double getblood();
	double getDown();
	double getUp();
	string getName();
private:
	double blood;
	double down;	//	����������˺�������
	double up;	//	����������˺�������
	string name;
};
#endif