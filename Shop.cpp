#include "Shop.h"
void Shop::buy(sorcerer * mysorcerer)
{
	cout << "��������Ҫ�����ҩƿ��ţ�(��0�˳���" << endl;
	int op;
	cin >> op;
	if (op == 0) {
		cout << "��ӭ���Ĺ��٣�" << endl;
	}
	else {
		vector<Medicine>::iterator it;
		it = medicine.begin() + op - 1;
		cout << "��������" << medicine[op - 1].getName() << ",������" << medicine[op - 1].getPrice() << endl;
		mysorcerer->decreaseMoney(medicine[op - 1].getPrice());
		mysorcerer->addMedicine(medicine[op - 1]);
		medicine.erase(it);
	}
}

void Shop::showShop(sorcerer * mysorcerer)
{
	cout << "��ӭħ��ʦ" << mysorcerer->getName() << "�����̵꣡����" << endl;
	cout << "Ŀǰ�̵�Ĵ�����:" << endl;
	cout << "ҩˮ:" << endl;
	for (int i = 0; i < medicine.size(); i++) {
		cout << i + 1 << ".����:" << medicine[i].getName()  << " �۸�:" << medicine[i].getPrice() << " �ָ�ֵ��" << medicine[i].getRecoverValue() << endl;
	}
	buy(mysorcerer);
}
