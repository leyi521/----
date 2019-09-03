#include "sorcerer.h"
sorcerer::sorcerer(){
	cout << "���ﴴ���ɹ���" << endl;
	skillNum = 0;
	equipmentNum = 0;
	horcruxNum = 0;
}
sorcerer::~sorcerer()
{
}
void sorcerer::setValue(double disguiseValue, double forceValue, double defenceValue, double magicValue, double bloodValue, string name, double money)
{
	this->disguiseValue = disguiseValue;
	this->forceValue = forceValue;
	this->defenceValue = defenceValue;
	this->magicValue = magicValue;
	this->bloodValue = bloodValue;
	this->name = name;
	this->money = money;
	cout << "����" << name << "���óɹ���" << endl;
	cout << "����ѡ��������ʼ�������£�" << endl;
	cout << "αװֵ = " << disguiseValue << endl;
	cout << "����ֵ = " << forceValue << endl;
	cout << "����ֵ = " << defenceValue << endl;
	cout << "ħ��ֵ = " << disguiseValue << endl;
	cout << "αװֵ = " << magicValue << endl;
	cout << "Ѫ��   = " << bloodValue << endl;
	cout << "���   = " << money << endl;
}

bool sorcerer::isSkillEmpty()
{
	if (skill.empty())
		return 1;
	else return 0;
}
int sorcerer::getSkillNum()
{
	return skillNum;
}
int sorcerer::getEquipmentNum()
{
	return equipmentNum;
}
int sorcerer::getHorcruxNum()
{
	return horcruxNum;
}
int sorcerer::getMyCheckpoint()
{
	return myCheckpoint;
}
vector<Skill> sorcerer::getSkill()
{
	return skill;
}
vector<Horcrux> sorcerer::getHorcrux()
{
	return horcrux;
}
vector<Medicine> sorcerer::getMedicine()
{
	return medicine;
}
int sorcerer::getBloodValue()
{
	return bloodValue;
}
int sorcerer::getForceValue()
{
	return forceValue;
}
int sorcerer::getDefenceValue()
{
	return defenceValue;
}
int sorcerer::getMagicValue()
{
	return magicValue;
}
int sorcerer::getMoney()
{
	return money;
}
void sorcerer::increaseBlood(int blood)
{
	bloodValue += blood;
}
void sorcerer::decreaseBlood(int blood)
{
	bloodValue -= blood;
}
void sorcerer::setBlood(int blood)
{
	this->bloodValue = blood;
}
void sorcerer::addSkill(Skill mySkill)
{
	cout << "��ϲ����ü��ܣ�" << mySkill.getName() << endl;
	skill.push_back(mySkill);
}
void sorcerer::increaseSkillNum()
{
	skillNum++;
}
void sorcerer::showInformation()
{
	cout << "��ǰ��������������£�" << endl;
	cout << "αװֵ = " << disguiseValue << endl;
	cout << "����ֵ = " << forceValue << endl;
	cout << "����ֵ = " << defenceValue << endl;
	cout << "ħ��ֵ = " << disguiseValue << endl;
	cout << "αװֵ = " << magicValue << endl;
	cout << "Ѫ��   = " << bloodValue << endl;
	cout << "���   = " << money << endl;
}
bool sorcerer::battle(sorcerer * mySorcerer, badPerson badperson)
{
	double otherBloodNum = badperson.getblood();
	int otherDamageNum_Down = badperson.getDown();
	int otherDamageNum_Up = badperson.getUp();
	string otherName = badperson.getName();
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
		cout << "��" << ii << "��ս��" << endl;
		cout << "��ʱ����Ѫ��Ϊ" << mySorcererBlood << endl;
		cout << otherName << "��Ѫ��Ϊ" << otherBloodNum << endl;
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
void sorcerer::inRoom(room * myroom)
{
	this->myroom = myroom;
}
void sorcerer::increaseMoney(int money)
{
	this->money += money;
}
void sorcerer::decreaseMoney(int money)
{
	this->money -= money;
}
void sorcerer::addMedicine(Medicine temp)
{
	medicine.push_back(temp);
}
void sorcerer::showMedicine()
{
	if (medicine.empty()) {
		cout << "��Ŀǰû���κ�ҩˮ" << endl;
	}
	else {
		cout << "��Ŀǰӵ�е�ҩˮ��" << endl;
		for (int i = 0; i < medicine.size(); i++) {
			cout << i + 1 << ".����:" << medicine[i].getName() << " �۸�:" << medicine[i].getPrice() << " �ָ�ֵ��" << medicine[i].getRecoverValue() << endl;
		}
	}
	int op = 0;
	cout << "����������Ҫʹ��ҩƷ�ı�ţ���0�˳���" << endl;
	cin >> op;
	if (op == 0) {
		cout << "�鿴����" << endl;
	}
	else {
		useMedicine(op);
	}
}
void sorcerer::addMagicitem(Magicitem temp)
{
	magicitem.push_back(temp);
	cout << "��ϲ�����ˣ�" << temp.getName() << endl;
}
void sorcerer::showMagicItem()
{
	if (magicitem.empty()) {
		cout << "��Ŀǰû���κ�ħ������" << endl;
	}
	else {
		cout << "��Ŀǰӵ�еĵ��ߣ�" << endl;
		for (int i = 0; i < magicitem.size(); i++) {
			cout << i + 1 << ".����:" << magicitem[i].getName() << endl;
		}
	}
}
bool sorcerer::isHasTheMagicitem(int id)
{
	bool temp = 0;
	for (int i = 0; i < magicitem.size(); ++i) {
		if (id == magicitem[i].getId())
			temp = 1;
	}
	return temp;
}
void sorcerer::useMedicine(int op)
{
	vector<Medicine>::iterator it;
	it = medicine.begin() + op - 1;
	cout << "��ʹ����" << medicine[op - 1].getName() << ",Ѫ��������" << medicine[op - 1].getRecoverValue() << endl;
	this->increaseBlood(medicine[op - 1].getRecoverValue());
	medicine.erase(it);
}
void sorcerer::setMyCheckPoint(int temp)
{
	myCheckpoint = temp;
}
int sorcerer::getDisguiseValue()
{
	return disguiseValue;
}
room * sorcerer::getRoom()
{
	return myroom;
}
string sorcerer::getName()
{
	return name;
}

vector<Magicitem> sorcerer::getMagicitem()
{
	return magicitem;
}
