#ifndef _FILE_H
#define _FILE_H
#include "sorcerer.h"
#include <string>
using namespace std;
class File
{
public:
	File(string name = 0);
	~File();
private:
	string name;
	sorcerer* mySorcerer;
	//����ÿ���ؿ�������
};
#endif

