#include <iostream>
#include "sorcerer.h"
#include "Plot.h"
#include "File.h"
using namespace std;
int main() {
	int ifEnd = 0;
	sorcerer *mySorcerer = new sorcerer;
	Plot myPlot;
	cout << "Harry		Potter" << endl;
	cout << "1.�µ���;			2.��ȡ�浵			3.�˳�" << endl;
	int choice;
	cin >> choice;
	system("cls");
	switch (choice) {
	case 1:
		myPlot.init_new(mySorcerer);
		//ifEnd = myPlot.init1(mySorcerer);
		//if (ifEnd == -1)
		//	return 0;
		//ifEnd = myPlot.init2(mySorcerer);
		//ifEnd = myPlot.init3(mySorcerer);
		ifEnd = myPlot.init4(mySorcerer);
		//ifEnd = myPlot.init5(mySorcerer);
		//ifEnd = myPlot.init6(mySorcerer);
		//ifEnd = myPlot.initFinal(mySorcerer);
		break;
	case 2:

		break;
	case 3:
		cout << "���Ѿ��ɹ��˳���Ϸ��" << endl;
		return 0;
	default:
		cout << "����������������룡" << endl;
	}
	delete mySorcerer;
}