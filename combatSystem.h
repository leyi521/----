#ifndef _COMBATSYSTEM
#define _COMBATSYSTEM
#include <iostream>
#include <string>
#include "sorcerer.h"
#include <cstdlib>
#include <ctime>
#include "badPerson.h"
using namespace std;

//������ʤ����1���з���ʤ����2
bool battle(sorcerer *mySorcerer, badPerson &badperson) {
	double otherBloodNum = badperson.getblood();
	int otherDamageNum_Down = badperson.getDown();
	int otherDamageNum_Up = badperson.getUp();
	string otherName = badperson.getName();
	if (mySorcerer->isSkillEmpty())
		cout << "��Ŀǰû���κμ���" << endl;
	else
	{
		cout << "��Ŀǰӵ�еļ��ܣ�" << endl;
		for (int i = 1; i <= mySorcerer->getSkillNum(); i++) {
			cout << i << "." << mySorcerer->getSkill()[i - 1].getName() << endl;
		}
	}
	double mySorcererDamage = 0;
	double otherSorcererDamage = 0;
	double mySorcererBlood = mySorcerer->getBloodValue();
	int ii = 1;//����ս�����ִ���
	srand(time(NULL));
	while (1) {
		if (mySorcererBlood == 0) {
			if (otherBloodNum == 0) {
				cout << "˫��ͬ���ھ���" << endl;
			}
			cout << "���ź������ı���ս��ʧ�ܡ�����" << endl;
			return 0;
		}
		else if (otherSorcererDamage >= otherBloodNum) {
			mySorcerer->setBlood(mySorcererBlood);
			cout << "��ϲ�㣬���ɹ������" << otherName << "!!!" << endl;
			return 1;
		}
		system("pause");
		system("cls");
		if (mySorcerer->isSkillEmpty())
			cout << "��Ŀǰû���κμ���" << endl;
		else
		{
			cout << "��Ŀǰӵ�еļ��ܣ�" << endl;
			for (int i = 1; i <= mySorcerer->getSkillNum(); i++) {
				cout << i << "." << mySorcerer->getSkill()[i - 1].getName() << endl;
			}
		}
		if (mySorcerer->isSkillEmpty())
			cout << "��Ŀǰû���κμ���" << endl;
		else
		{
			cout << "��Ŀǰӵ�еļ��ܣ�" << endl;
			for (int i = 1; i <= mySorcerer->getSkillNum(); i++) {
				cout << i << "." << mySorcerer->getSkill()[i - 1].getName() << endl;
			}
		}
		cout << "��" << ii << "��ս��" << endl;
		cout << "����������ʹ�ü��ܣ�����0����ʹ����ͨ����" << endl;
		int op = 0;
		double damage = 0;
		cin >> op;
		if (op) {
			double skillDamage = mySorcerer->getSkill()[op - 1].getDamage();
			cout << "���ڵ�" << ii << "��ս����ʹ����" << mySorcerer->getSkill()[op - 1].getName() << ",";
			damage = mySorcerer->getForceValue() + skillDamage - 100 + rand() % 5;
		}	
		else if (!op) {
			cout << "���ڵ�" << ii << "��ս����ʹ������ͨ����" << ",";
			damage = mySorcerer->getForceValue() - 100 + rand() % 5;
		}
		cout << "�Զ��������" << damage << "�˺���" << endl;
		double damage_other = (rand() % (otherDamageNum_Up - otherDamageNum_Down + 1)) + otherDamageNum_Down;
		cout << otherName << "�ڵ�" << ii << "��ս���ж������" << damage_other << "�˺�" << endl;
		mySorcererBlood -= damage_other;
		otherBloodNum -= damage;
		if (mySorcererBlood < 0)
			mySorcererBlood = 0;
		if (otherBloodNum < 0)
			otherBloodNum = 0;
		cout << "��" << ii << "��ս������\n" << 
			"����Ѫ��Ϊ" << mySorcererBlood << endl;
		cout << otherName << "��Ѫ��Ϊ" << otherBloodNum << endl;
		ii++;
	}
}
#endif
