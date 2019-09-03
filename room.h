#ifndef _ROOM_H
#define _ROOM_H
#include <string>
#include "badPerson.h"
#include "goodPerson.h"
#include "badPerson.h"
#include <vector>

using namespace std;

class room 
{
public:
	room(string name = 0) : name(name) {
		ifIn = 0;
	}
	string getName();
	void addGoodPerson(goodPerson temp);
	void addBadPerson(badPerson temp);
	void inRoom();
	bool getIfIn();
	void showBadPerson();
	void eraseBadPerson(int id);
	badPerson getBadPerson(int id);
	int getBadPersonSize();
	~room();
private:
	string name;
	vector<badPerson> badperson;
	vector<goodPerson> goodperson;
	bool ifIn;
};
#endif

