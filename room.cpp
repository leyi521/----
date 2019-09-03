#include "room.h"





string room::getName()
{
	return name;
}

void room::addGoodPerson(goodPerson temp)
{
	goodperson.push_back(temp);
}

void room::addBadPerson(badPerson temp)
{
	badperson.push_back(temp);
}

void room::inRoom()
{
	ifIn = 1;
}

bool room::getIfIn()
{
	return ifIn;
}

void room::showBadPerson()
{
	cout << "�÷����л��˵����Ϊ��" << endl;
	if (badperson.size() == 0) {
		cout << "�÷�����޻���" << endl;
	}
	else {
		for (int i = 0; i < badperson.size(); i++) {
			cout << i + 1 << ".����:" << badperson[i].getName() << " �Ѷ�ֵ:" << badperson[i].getDown() + badperson[i].getUp() << " ����ֵ��" << badperson[i].getblood() << endl;
		}
	}
}

void room::eraseBadPerson(int id)
{
	vector<badPerson>::iterator it;
	it = badperson.begin() + id - 1;
	cout << "��������" << badperson[id - 1].getName()  << endl;
	badperson.erase(it);
}

badPerson room::getBadPerson(int id)
{
	return badperson[id - 1];
}

int room::getBadPersonSize()
{
	return badperson.size();
}



room::~room()
{
}
