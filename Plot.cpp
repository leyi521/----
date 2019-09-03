#include "Plot.h"
#include "File.h"
#include <fstream>

void Plot::init_new(sorcerer * mySorcerer)
{
	
	cout << "��ѡ��������õ��������Լӳ�:" << endl;
	cout << "1.սʿϵ		 2.̹��ϵ 			3.����ϵ" << endl;
	int op;
	string name;
	cin >> op;
	cout << "��������Ҫ���õĽ�ɫ���֣�" << endl;
	cin >> name;
	//File myFile(name + ".txt");
	//ofstream tempFile(name + ".txt");
	
	system("cls");
	switch (op)
	{
	case 1:
		mySorcerer->setValue(100, 120, 100, 100, 100, name, 3000);
		break;
	case 2:
		mySorcerer->setValue(100, 100, 120, 100, 100, name, 3000);
		break;
	case 3:
		mySorcerer->setValue(100, 100, 100, 120, 100, name, 3000);
		break;
	default:
		cout << "����������������룡" << endl;
		break;
	}
	//tempFile << mySorcerer->get
}



int Plot::init1(sorcerer * mySorcerer)
{
	bool end = 0;
	cout << "ħ��ʦ�ǣ�Ϊ�������Ǳ�ø���ǿ�����Ǹ�����һ�����" << endl;
	Magicitem magicStick("ħ����", 1);
	mySorcerer->addMagicitem(magicStick);
	system("pause");
	system("cls");
	vector<Medicine> medicine_G1;
	Medicine medicineTempSmall("Сҩˮ", 20, 400);
	medicine_G1.push_back(medicineTempSmall);
	medicine_G1.push_back(medicineTempSmall);
	Medicine medicineTempMiddle("��ҩˮ", 40, 800);
	medicine_G1.push_back(medicineTempMiddle);
	medicine_G1.push_back(medicineTempMiddle);
	Medicine medicineTempLarge("��ҩˮ", 60, 1200);
	medicine_G1.push_back(medicineTempLarge);
	Shop shop_G1(medicine_G1, "��Ƥʿħ����Ʒ��", 5);
	Skill Alohomora("Alohomora", 10);
	bool check = 1;
	room hall("����");
	room President_Office("У����");
	room Crypt("��Ѩ");
	room Attic("��¥");
	mySorcerer->inRoom(&hall);
	map map1("\t*********\t\t\t\t*********\n\t*\t*\t\t\t\t*\t*\n\t*0.����\t*\t<--------------->\t*2.��¥\t*\n\t*\t*\t\t\t\t*\t*\n\t*********\t\t\t\t*********\n\t   /\\\t\t\t\t\t   ||\n\t   ||\t\t\t\t\t   ||\n\t   ||\t\t\t\t\t   ||\n\t   ||\t\t\t\t\t   ||\n\t   ||\t\t\t\t\t   ||\n\t   ||\t\t\t\t\t   ||\n\t   ||\t\t\t\t\t   ||\n\t   \\/\t\t\t\t\t   \\/\n\t*********\t\t\t\t*********\n\t*\t*\t\t\t\t*\t*\n\t*1.У����\t\t\t\t*3.��Ѩ\t*\n\t*\t*\t\t\t\t*\t*\n\t*********\t\t\t\t*********");
	cout << "��С���������������Ĺ�������\n��������һ���˵�����������\nȻ������11����������\n�������ص�֪���Լ�ԭ������ʦ\n���ұ�¼ȡΪ�����ִ�ħ��ѧУ�е�һԱ��\n���ϻ����ִ��ؿ��г�\n������ʼ������ħ���ó�������������䷢����ħ��ʯ�����ܡ�����������" << endl;
	system("pause");
	system("cls");
	cout << "��ӭ�����һ��~" << endl;
	cout << "��ϲ���ڿ��ֻ����һ����������ͨ��������ĳ������..." << endl;
	goodPerson Dumbledore("�˲�����", "���쾵�Ӿ�Ҫ�ᵽһ���µĵط��ˣ������������㲻Ҫ��ȥ�����ˡ�������������ɿ���������Ҫ������׼����\n");
	President_Office.addGoodPerson(Dumbledore);
	badPerson Chiro(100, 10, 35, "����");
	badPerson Kerberos(20, 0, 5, "��ͷ��");
	Crypt.addBadPerson(Chiro);

	while (check) {
		system("pause");
		system("cls");
		cout << "����100���Բ鿴��ǰ�Լ�������" << endl;
		cout << "����101���Բ鿴��ʹ���Լ�ӵ�е�ҩƷ" << endl;
		cout << "����102���Բ鿴�Լ�Ŀǰ�Ѿ�ӵ�е�ħ������" << endl;
		cout << "����103���Խ���ؿ��ĵ���" << endl;
		cout << "����110���Ա��浱ǰ����" << endl;
		cout << "����111�����˳���ǰ��Ϸ" << endl;
		cout << "��Ŀǰ���ڵ�λ��Ϊ��" << mySorcerer->getRoom()->getName() << endl;
		cout << "�����ͼ���Ͻǵ����ֿ��Խ���õ�ͼ" << endl;
		cout << "�˹ؿ��ĵ�ͼ��" << endl;
		map1.showMap();
		cout << "����������ѡ��:" << endl;
		int op = 0;
		cin >> op;
		switch (op)
		{
		case 100:
			system("cls");
			mySorcerer->showInformation();
			break;
		case 101:
			system("cls");
			mySorcerer->showMedicine();
			break;
		case 102:
			system("cls");
			mySorcerer->showMagicItem();
			break;
		case 103:
			system("cls");
			shop_G1.showShop(mySorcerer);
			break;
		case 110:
			cout << "��δ����" << endl;
			break;
		case 111:
			cout << "���Ѿ���������Ϸ��" << endl;
			return -1;
			break;
		default:
			cout << "����ʧ�ܣ�" << endl;
			break;
		case 1:
			mySorcerer->inRoom(&President_Office);
			system("cls");
			cout << "��ӭ���� " << President_Office.getName() << endl;
			if (President_Office.getIfIn()) {
				cout << "��ӭ���ٴ����� " << President_Office.getName() << endl;
				break;
			}
			cout << "\n" << Dumbledore.getName() << "��" << Dumbledore.getSentence() << endl;
			cout << "����" << Dumbledore.getName() << "������̸��֮�� �����һ�����" << endl;
			mySorcerer->addSkill(Alohomora);
			mySorcerer->increaseSkillNum();
			President_Office.inRoom();
			break;
		case 2:
			mySorcerer->inRoom(&Attic);
			system("cls");
			cout << "��ӭ���� " << Attic.getName() << endl;
			cout << "��ʱ��ͷ�����ڿ���ĳ�����䣬���Ƿ�ѡ����������ս����" << endl;
			cout << "1.��		2.��" << endl;
			int op1 = 0;
			cin >> op1;
			system("cls");
			if (op1 == 1) {
				cout << "ս���Ѿ���ʼ��" << endl;
				bool ifWin = 1;
				ifWin = mySorcerer->battle(mySorcerer, Kerberos);
				if (ifWin) {
					system("pause");
					system("cls");
					cout << "��ͨ��ս�����ɽ����" << Kerberos.getName() << "����ͨ�����ŵ�����ɹ������Ѩ......" << endl;
					system("pause");
					system("cls");
					cout << "��ӭ������Ѩ~" << endl;
					mySorcerer->inRoom(&Crypt);
					cout << "��ʱ�������ھ����ԣ����Ƿ�ѡ����������ս����" << endl;
					cout << "1.��		2.��" << endl;
					int op2 = 0;
					cin >> op2;
					system("cls");
					if (op2 == 1) {
						bool ifWin = 0;
						cout << "ս����ʼ�����ѽ���ս��ģʽ..." << endl;
						ifWin = mySorcerer->battle(mySorcerer, Chiro);
						if (ifWin) {
							cout << "��ϲ��ɹ�ͨ����һ�ز������";
							check = 0;
							system("pause");
							system("cls");
						}
						else {
							cout << "caicaicai" << endl;
						}
					}
					else if (op2 == 2) {
						cout << "���Ѿ�����ս����" << endl;
					}
					else {
						cout << "����ʧ�ܣ������˳��÷��䣡" << endl;
					}
				}
				else {
					cout << "caicaicai" << endl;
				}
			}
			else if (op1 == 2) {
				cout << "���Ѿ�����ս����" << endl;
			}
			else {
				cout << "����ʧ�ܣ������˳��÷��䣡" << endl;
			}
			break;
		}
	}
	return 1;
}


Plot::Plot()
{
}

Plot::~Plot()
{
}

int Plot::init2(sorcerer *mySorcerer) {
	room Crypt("��Ѩ");
	room bathroom("ϴ�ּ�");
	room chamber("����");
	room hathouse("ñ����");
	mySorcerer->inRoom(&Crypt);
	vector<Medicine> medicine_G2;
	Medicine medicineTempSmall("Сҩˮ", 20, 400);
	medicine_G2.push_back(medicineTempSmall);
	medicine_G2.push_back(medicineTempSmall);
	Medicine medicineTempMiddle("��ҩˮ", 40, 800);
	medicine_G2.push_back(medicineTempMiddle);
	medicine_G2.push_back(medicineTempMiddle);
	Medicine medicineTempLarge("��ҩˮ", 60, 1200);
	medicine_G2.push_back(medicineTempLarge);
	Shop shop_G2(medicine_G2, "��ÿռ�ħ����Ʒ��", 5);
	bool check = 1;
	Magicitem phoenix("���", 2);
	map map2("\t0.*******\t\t\t\t1.*******\t\t\t3.*******\n\t*\t*\t\t\t\t*\t*\t\t\t*\t*\n\t*��Ѩ\t*\t < --------------->\t*ϴ�ּ�\t*\t----------->\t*����\t*\n\t*\t*\t\t\t\t*\t*\t\t\t*\t*\n\t*********\t\t\t\t*********\t\t\t*********\n\t / \\.\t\t\t\t\t / \\.\t\n\t || \t\t\t\t\t || \n\t || \t\t\t\t\t || \n\t || \t\t\t\t\t || \n\t || \t\t\t\t\t || \n\t || \t\t\t\t\t || \n\t  \\ / \t\t\t\t\t || \t\n\t2.*******\t\t\t\t || \n\t*\t*\t\t\t\t || \n\t*ñ����\t*<===================================\n\t*\t*\n\t*********");
	cout << "ѧУ������һϵ�С��ֲ����¼���ѧ��Ī�����ʯ��\nǽ�ϳ����˿ֲ���Ѫ��...\n���ǻ������߹���Ϊ\n��˵�е����ұ�˹�����ֵļ̳��˴�\n������Ϊ������ǻ�������˻��ɡ�������������" << endl;
	system("pause");
	system("cls");
	cout << "��ӭ����ڶ���~" << endl;
	cout << "��Ŀǰ���ڵ�λ��: " << mySorcerer->getRoom()->getName() << endl;
	cout << "��˵��ϴ�ּ���ҽ���Ի����Ի�����صĶ���..." << endl;
	goodPerson Moaning_Myrtle("�ҽ���", "��ϴ����������Ķ���...��ʱ�Ҿ�����Ϊ���������۾���...\n");
	bathroom.addGoodPerson(Moaning_Myrtle);

	//mySorcerer->decreaseBlood(100);//����debug��

	badPerson Basilisk(100, 10, 35, "�߹�");
	//badPerson Kerberos(20, 0, 5, "��ͷ��");
	chamber.addBadPerson(Basilisk);
	while (check) {
		system("pause");
		system("cls");
		cout << "����100���Բ鿴��ǰ�Լ�������" << endl;
		cout << "����101���Բ鿴��ʹ���Լ�ӵ�е�ҩƷ" << endl;
		cout << "����102���Բ鿴�Լ�Ŀǰ�Ѿ�ӵ�е�ħ������" << endl;
		cout << "����103���Խ���ؿ��ĵ���" << endl;
		cout << "����110���Ա��浱ǰ����" << endl;
		cout << "����111�����˳���ǰ��Ϸ" << endl;
		cout << "��Ŀǰ���ڵ�λ��Ϊ��" << mySorcerer->getRoom()->getName() << endl;
		cout << "�����ͼ���Ͻǵ����ֿ��Խ���õ�ͼ" << endl;
		cout << "�˹ؿ��ĵ�ͼ��" << endl;
		map2.showMap();
		cout << "����������ѡ��:" << endl;
		int op = 0;
		cin >> op;
		switch (op)
		{
		case 100:
			system("cls");
			mySorcerer->showInformation();
			break;
		case 101:
			system("cls");
			mySorcerer->showMedicine();
			break;
		case 102:
			system("cls");
			mySorcerer->showMagicItem();
			break;
		case 103:
			system("cls");
			shop_G2.showShop(mySorcerer);
			break;
		case 110:
			cout << "��δ����" << endl;
			break;
		case 111:
			cout << "���Ѿ���������Ϸ��" << endl;
			return -1;
			break;
		default:
			cout << "����ʧ�ܣ�" << endl;
			break;
		case 1:
			mySorcerer->inRoom(&bathroom);
			system("cls");
			cout << "��ӭ���� " << bathroom.getName() << endl;
			if (bathroom.getIfIn()) {
				cout << "��ӭ���ٴ����� " << bathroom.getName() << endl;
				break;
			}
			cout << "\n" << Moaning_Myrtle.getName() << "��" << Moaning_Myrtle.getSentence() << endl;
			cout << "����" << Moaning_Myrtle.getName() << "������̸��֮�� �����Լ�ӵ�����" << endl;
			
			bathroom.inRoom();
			break;
		case 2:
			mySorcerer->inRoom(&hathouse);
			system("cls");
			cout << "��ӭ���� " << hathouse.getName() << endl;
			if (bathroom.getIfIn()) {
				cout << "��ӭ���ٴ����� " << hathouse.getName() << endl;
				break;
			}
			cout << "ֻ����������ʿ���ܵõ�" << phoenix.getName() << endl;
			cout << "������������ʿ��" << endl;
			mySorcerer->addMagicitem(phoenix);
			hathouse.inRoom();
			break;
		case 3:
			mySorcerer->inRoom(&chamber);
			system("cls");
			cout << "��ӭ���� " << chamber.getName() << endl;
			cout << "��ʱ��ķ������������Ƿ�ѡ���������жԻ���" << endl;
			cout << "1.��		2.��" << endl;
			int op1 = 0;
			cin >> op1;
			system("cls");
			if (op1 == 1) {
				cout << "���� Tom Marvolo Riddle������֮���� Lord Voldemort(����ħ)������\n˿˿˹˹~\n��ͨ�������ٻ������߹֡�����" << endl;
				bool ifWin = 1;
				ifWin = mySorcerer->isHasTheMagicitem(2);
				if (ifWin) {
					system("pause");
					system("cls");
					cout << "��ͨ����˴�Ϲ��" << Basilisk.getName() << "���۾���������������ս��......" << endl;
					system("pause");
					system("cls");
					cout << "��ʱ����ս���������������Ƿ�ѡ����������ս����" << endl;
					cout << "1.��		2.��" << endl;
					int op2 = 0;
					cin >> op2;
					system("cls");
					if (op2 == 1) {
						bool ifWin = 0;
						cout << "ս����ʼ�����ѽ���ս��ģʽ..." << endl;
						ifWin = mySorcerer->battle(mySorcerer, Basilisk);
						if (ifWin) {
							cout << "��ϲ��ɹ�ͨ���ڶ��ز������";
						}
						else {
							cout << "caicaicai" << endl;
						}
					}
					else if (op2 == 2) {
						cout << "���Ѿ�����ս����" << endl;
					}
					else {
						cout << "����ʧ�ܣ������˳��÷��䣡" << endl;
					}
				}
				else {
					cout << "�㱻�������۾���ɱ������\n" << endl;
				}
			}
			else if (op1 == 2) {
				cout << "���Ѿ����������Ի���" << endl;
			}
			else {
				cout << "����ʧ�ܣ������˳��÷��䣡" << endl;
			}
			break;
		}
	}
	return 1;
}

int Plot::init3(sorcerer * mySorcerer)
{
	vector<Medicine> medicine_G3;
	Medicine medicineTempSmall("Сҩˮ", 20, 400);
	medicine_G3.push_back(medicineTempSmall);
	medicine_G3.push_back(medicineTempSmall);
	Medicine medicineTempMiddle("��ҩˮ", 40, 800);
	medicine_G3.push_back(medicineTempMiddle);
	medicine_G3.push_back(medicineTempMiddle);
	Medicine medicineTempLarge("��ҩˮ", 60, 1200);
	medicine_G3.push_back(medicineTempLarge);
	Shop shop_G3(medicine_G3, "·��ħ����Ʒ��", 5);
	//�̵��������ػ���������������ͨ��
	bool check = 1;
	room chamber("����");
	room auditorium("����");
	room villa("����");
	room lakes("����");
	Magicitem phoenix("���", 2);
	mySorcerer->inRoom(&chamber);
	map map3("\t2.*******\t\t\t\t1.*******\t\t\t\t0.*******\n\t*\t*\t\t\t\t*\t*\t\t\t\t*\t*\n\t*����\t*\t<--------------->\t*����\t*\t<--------------->\t*����\t*\n\t*\t*\t\t\t\t*\t*\t\t\t\t*\t*\n\t*********\t\t\t\t*********\t\t\t\t*********\n\t  /\\.\t\t\t\t\t   /\\.\t\n\t  ||\t\t\t\t\t   ||\n\t  ||\t\t\t\t\t   ||\n\t  ||\t\t\t\t\t   ||\n\t  ||\t\t\t\t\t   ||\n\t  ||\t\t\t\t\t   ||\n\t  \\/\t\t\t\t\t   ||\t\n\t3.*******\t\t\t\t   ||\n\t*\t*\t\t\t\t   ||\n\t*����\t*====================================\n\t*\t*\n\t*********");
	cout << "��֪���ȿ����ﷸС�������ӳ�����\n������������ȥ����Ī��ʱ������������С�����Ǳ����˹����ĸ�ĸ\nʹ���⵽�˷���ħ��ɱ��\n����С�����ǳ��֣���������������-��û�б��й����ĸ�ĸ������С���Ǳ˵ñ��Ѻ�һ������ת�Ƶ����������ϡ�������������������" << endl;
	system("pause");
	system("cls");
	cout << "��ӭ���������~" << endl;
	cout << "��Ŀǰ���ڵ�λ��: " << mySorcerer->getRoom()->getName() << endl;
	//cout << "��˵��ϴ�ּ���ҽ���Ի����Ի�����صĶ���..." << endl;
	goodPerson Sirius("С������", "�Ҹ�ղķ˹��������һ����ô�ã���ȴû�У��Ǻܲ��̡�...\n");
	villa.addGoodPerson(Sirius);
	badPerson pettigrew(100, 10, 30, "С����");
	badPerson dementor(100, 10, 35, "����");
	villa.addBadPerson(pettigrew);
	lakes.addBadPerson(dementor);
	while (check) {
		system("pause");
		system("cls");
		cout << "����100���Բ鿴��ǰ�Լ�������" << endl;
		cout << "����101���Բ鿴��ʹ���Լ�ӵ�е�ҩƷ" << endl;
		cout << "����102���Բ鿴�Լ�Ŀǰ�Ѿ�ӵ�е�ħ������" << endl;
		cout << "����103���Խ���ؿ��ĵ���" << endl;//�ڽ��200�����������400��ҩˮ����ұ��-200.�о�Ҫ���̵������������ܹ�������������
		cout << "����110���Ա��浱ǰ����" << endl;
		cout << "����111�����˳���ǰ��Ϸ" << endl;
		cout << "��Ŀǰ���ڵ�λ��Ϊ��" << mySorcerer->getRoom()->getName() << endl;
		cout << "�����ͼ���Ͻǵ����ֿ��Խ���õ�ͼ" << endl;
		cout << "�˹ؿ��ĵ�ͼ��" << endl;
		map3.showMap();
		cout << "����������ѡ��:" << endl;
		int op = 0;
		int op1 = 0; //ս��ʱ��ѡ��
		cin >> op;
		switch (op)
		{
		case 100:
			system("cls");
			mySorcerer->showInformation();
			break;
		case 101:
			system("cls");
			mySorcerer->showMedicine();
			break;
		case 102:
			system("cls");
			mySorcerer->showMagicItem();
			break;
		case 103:
			system("cls");
			shop_G3.showShop(mySorcerer);
			break;
		case 110:
			cout << "��δ����" << endl;
			break;
		case 111:
			cout << "���Ѿ���������Ϸ��" << endl;
			return -1;
			break;
		default:
			cout << "����ʧ�ܣ�" << endl;
			break;
		case 0:
			//����
			mySorcerer->inRoom(&chamber);
			cout << "��ӭ�������ң�����ڴ������Լ�����������װ������һ��ȥ��Ϊ����" << endl;
			break;
		case 1:
			//����
			mySorcerer->inRoom(&auditorium);
			system("cls");
			cout << "��ӭ���� " << auditorium.getName() << endl;
			cout << "�ڻ������ȳǱ��⣬�����ڼ����˴����Ѿõ�С�����ǲ����ˣ���Ȼ����������������һζ���ã���е��ɻ�������ͣ�º����Ի�" << endl;
			cout << "�����ˣ���׷ɱ��һֱ���ǳ���߰ߣ��������㣬�Ǹ��߰���С���Ǳ˵ñ�ã��������������ħ�����㸸ĸ���г̵ġ�" << endl;
			cout << "�����Ų����˵��渵�������������������������" << endl;
			cout << "�㣺���������ڸ���ô�죿" << endl;
			cout << "�����ˣ�������Ҫȥ������С���ǣ���Ҫ֤���Լ�����ף�������Ľ̸�" << endl;
			cout << "��ѡ��ͨ����һ��Ŀ�ĵأ�����" << endl;
			if (auditorium.getIfIn()) {
				cout << "��ӭ���ٴ����� " << auditorium.getName() << endl;
				break;
			}
			//cout << "\n" << Moaning_Myrtle.getName() << "��" << Moaning_Myrtle.getSentence() << endl;
			//cout << "����" << Moaning_Myrtle.getName() << "������̸��֮�� �����Լ�ӵ�����" << endl;
			/*mySorcerer->addSkill(Alohomora);
			mySorcerer->increaseSkillNum();*/
			auditorium.inRoom();
			break;
		case 2://�и����⣬���ս��ʧ���� ���ٴ�ս����ʱ��ͳ��ֻ�ӭ�ٴ����������Ͳ���ս��
			//����
			mySorcerer->inRoom(&villa);
			system("cls");
			cout << "��ӭ���� " << villa.getName() << endl;
			if (villa.getIfIn()) {
				cout << "��ӭ���ٴ����� " << villa.getName() << endl;
				break;
			}
			villa.inRoom();
			//��С���ǽ���ս��
			cout << "��ʱС������׼�����ܣ����Ƿ�ѡ����������ս����" << endl;
			cout << "1.��		2.��" << endl;
			cin >> op1;
			system("cls");
			if (op1 == 1) {
				cout << "ս���Ѿ���ʼ��" << endl;
				bool ifWin = 1;
				ifWin = mySorcerer->battle(mySorcerer, pettigrew);
				if (ifWin) {
					system("pause");
					system("cls");
					//����������1000
					cout << "��ͨ��ս��������" << pettigrew.getName() << "�Ĵ󲿷��������ɹ����С���ǻ�ý��1000��С���Ǳ˵ø����������࣬����ħ�����������ɲ���С�����ǣ���ʱС�������ӵ��˺���......" << endl;
					cout << "��ʱС�����Ǵ���Σ�ѵ��У�����Ҫ����Ľ̸�������ٸϵ�����" << endl;
					system("pause");
					system("cls");
				}
				else {
					cout << "�㱻С���ǻ��ܣ������ٹ�����װ������ս����" << endl;
				}
			}
			else if (op1 == 2) {
				cout << "���Ѿ�����ս����С���ǳɹ�����" << endl;
			}
			else {
				cout << "����ʧ�ܣ������˳��÷��䣡" << endl;
			}
			

			break;
		case 3:
			//����
			mySorcerer->inRoom(&lakes);
			system("cls");
			cout << "��ӭ���� " << lakes.getName() << endl;
			cout << "��ʱ�����Ѿ���С�����ǰ�Χ�����Ƿ�ѡ��������ս�����С�����ǣ�" << endl;
			cout << "1.��		2.��" << endl;
			int op1 = 0;
			cin >> op1;
			system("cls");
			if (op1 == 1) {
				cout << "ս���Ѿ���ʼ��" << endl;
				bool ifWin = 1;
				ifWin = mySorcerer->battle(mySorcerer, dementor);
				if (ifWin) {
					system("pause");
					system("cls");
					//����������1200
					cout << "��ͨ��ս��������" << dementor.getName() << "��С�����ǳɹ����룬��ý��1200���ź����Ǳ˵ó���֮�����ݣ��ص�����ħ���׼����������ɽ����" << endl;
					system("pause");
					system("cls");
				}
				else {
					cout << "�㱻���ֻ��ܣ������ٹ�����װ������ս����" << endl;
				}
			}
			else if (op1 == 2) {
				cout << "���Ѿ�����ս����С���ǳɹ����ܣ��ص�����ħ���׼����������ɽ����" << endl;
			}
			else {
				cout << "����ʧ�ܣ������˳��÷��䣡" << endl;
			}
			break;
		}
	}
	return 1;
}
//���Ĺص�ͼ������
int Plot::init4(sorcerer *mySorcerer) {
	vector<Medicine> medicine_G4;
	Medicine medicineTempSmall("Сҩˮ", 20, 400);
	medicine_G4.push_back(medicineTempSmall);
	medicine_G4.push_back(medicineTempSmall);
	Medicine medicineTempMiddle("��ҩˮ", 40, 800);
	medicine_G4.push_back(medicineTempMiddle);
	medicine_G4.push_back(medicineTempMiddle);
	Medicine medicineTempLarge("��ҩˮ", 60, 1200);
	medicine_G4.push_back(medicineTempLarge);
	Shop shop_G4(medicine_G4, "·��ħ����Ʒ��", 5);
	//�̵��������ػ���������������ͨ��
	bool check = 1;

	Magicitem The_goblet_of_fire("���汭", 100);

	room hall("����");
	room auditorium("����");
	room maze("�Թ�");	//1�Թ� 2��Ĺ
	room grave("��Ĺ");
	room office("�칫��");
	mySorcerer->inRoom(&auditorium);
	//Magicitem phoenix("���", 2);
	map map4("\t0.*******\t\t\t\t1.*******\t\t\t\t2.*******\n\t*\t*\t\t\t\t*\t*\t\t\t\t*\t*\n\t*����\t*\t<--------------->\t*�Թ�\t*\t---------------->\t*��Ĺ\t*\n\t*\t*\t\t\t\t*\t*\t\t\t\t*\t*\n\t*********\t\t\t\t*********\t\t\t\t*********\n\t\t\t\t\t\t\t\t\t\t\t   ||\n \t\t\t\t\t\t\t\t\t\t\t   ||\n\t\t\t\t\t\t\t\t\t\t\t   ||\n\t\t\t\t\t\t\t\t\t\t\t   ||\n\t\t\t\t\t\t\t\t\t\t\t   ||\n\t\t\t\t\t\t\t\t\t\t\t   \\/\n\t\t\t\t\t\t\t4.*******\t\t\t3.*******\n\t\t\t\t\t\t\t*\t*\t\t\t*\t*\n\t\t\t\t\t\t\t*�칫��\t*<----------------------*����\t*\n\t\t\t\t\t\t\t*\t*\t\t\t*\t*\n\t\t\t\t\t\t\t*********\t\t\t*********");
	cout << "����û�б����μӡ���ǿ��������ȴ����س�Ϊ����ǿ�������ĵ�������ʿ\nû�뵽�������ı���ں������������������������" << endl;
	system("pause");
	system("cls");
	cout << "��ӭ������Ĺ�~" << endl;
	cout << "��Ŀǰ���ڵ�λ��: " << mySorcerer->getRoom()->getName() << endl;//�ҵ�Ŀǰ����λ��Ϊ���� ������ ��������˳��·�ߣ�Ӧ��Ϊ����
	//cout << "��˵��ϴ�ּ���ҽ���Ի����Ի�����صĶ���..." << endl;
	//goodPerson Sirius("С������", "�Ҹ�ղķ˹��������һ����ô�ã���ȴû�У��Ǻܲ��̡�...\n");
	//villa.addGoodPerson(Sirius);
	badPerson voldemort(100, 10, 35, "����ħ");
	badPerson Little_buddy(100, 10, 15, "С�͵�");
	grave.addBadPerson(voldemort);
	office.addBadPerson(Little_buddy);
	int trueanswer = 0;
	while (check) {
		system("pause");
		system("cls");
		cout << "����100���Բ鿴��ǰ�Լ�������" << endl;
		cout << "����101���Բ鿴��ʹ���Լ�ӵ�е�ҩƷ" << endl;
		cout << "����102���Բ鿴�Լ�Ŀǰ�Ѿ�ӵ�е�ħ������" << endl;
		cout << "����103���Խ���ؿ��ĵ���" << endl;
		cout << "����110���Ա��浱ǰ����" << endl;
		cout << "����111�����˳���ǰ��Ϸ" << endl;
		cout << "��Ŀǰ���ڵ�λ��Ϊ��" << mySorcerer->getRoom()->getName() << endl;
		cout << "�����ͼ���Ͻǵ����ֿ��Խ���õ�ͼ" << endl;
		cout << "�˹ؿ��ĵ�ͼ��" << endl;
		map4.showMap();
		cout << "����������ѡ��:" << endl;
		int op = 0;
		int op2 = 0;//�칫���Ƕ����ж�
		int op3 = 0;//����ʱ���ж�
		cin >> op;
		switch (op)
		{
		case 100:
			system("cls");
			mySorcerer->showInformation();
			break;
		case 101:
			system("cls");
			mySorcerer->showMedicine();
			break;
		case 102:
			system("cls");
			mySorcerer->showMagicItem();
			break;
		case 103:
			system("cls");
			shop_G4.showShop(mySorcerer);
			break;
		case 110:
			cout << "��δ����" << endl;
			break;
		case 111:
			cout << "���Ѿ���������Ϸ��" << endl;
			return -1;
			break;
		default:
			cout << "����ʧ�ܣ�" << endl;
			break;
		case 0:
			mySorcerer->inRoom(&auditorium);
			cout << "��ӭ���� " << auditorium.getName() << endl;
			break;
		case 1:
			//�Թ�
			system("cls");
			mySorcerer->inRoom(&maze);

			char indicatation;
			cout << "ͨ���ش�һЩС���������ͨ���Թ���" << endl;
			system("pause");
			while (trueanswer < 3) {
				trueanswer = 0;
				cout << "1���������ص������Ǽ��¼��գ�" << endl;
				cout << "A.8.31    B. 7.31    C.7.11" << endl;
				cin >> indicatation;
				switch (indicatation) {
				case 'B': {
					cout << "�ش���ȷ" << endl;
					cout << "2.����Imperio��ʲô��˼��" << endl;
					cout << "A. ���ǳ���              B. �������              C. ��ħ���" << endl;
					cin >> indicatation;
					switch (indicatation) {
					case 'A': {
						cout << "�ش���ȷ" << endl;
						cout << "3. Bezoar ë��ʯ��ʲô���ã�" << endl;
						cout << "A. �����ⶾ B.���Ѳ����������ر����Ч  C.��ˮ����Ժ���" << endl;
						cin >> indicatation;
						switch (indicatation) {
						case 'A': {
							cout << "�ش���ȷ" << endl;
							trueanswer = trueanswer + 1;
							break;
						}
						default: {
							cout << "�ش����" << endl;
							trueanswer = trueanswer;
							break;
						}
						}
						trueanswer = trueanswer + 1;
						break;
					}
					default: {
						cout << "�ش����" << endl;
						trueanswer = trueanswer;
						break;
					}
					}
					trueanswer = trueanswer + 1; break; }
				default: {
					cout << "�ش����" << endl;
					cout << "2.����Imperio��ʲô��˼��" << endl;
					cout << "A. ���ǳ���              B. �������              C. ��ħ���" << endl;
					cin >> indicatation;
					switch (indicatation) {
					case 'A': {
						cout << "�ش���ȷ" << endl;
						cout << "3. Bezoar ë��ʯ��ʲô���ã�" << endl;
						cout << "A. �����ⶾ B.���Ѳ����������ر����Ч  C.��ˮ����Ժ���" << endl;
						cin >> indicatation;
						switch (indicatation) {
						case 'A': {
							cout << "�ش���ȷ" << endl;
							trueanswer = trueanswer + 1;
							break;
						}
						default: {
							cout << "�ش����" << endl;
							trueanswer = trueanswer;
							break;
						}
						}
						trueanswer = trueanswer + 1;
						break;
					}
					default: {
						cout << "�ش����" << endl;
						cout << "3. Bezoar ë��ʯ��ʲô���ã�" << endl;
						cout << "A. �����ⶾ B.���Ѳ����������ر����Ч  C.��ˮ����Ժ���" << endl;
						cin >> indicatation;
						switch (indicatation) {
						case 'A': {
							cout << "�ش���ȷ" << endl;
							trueanswer = trueanswer + 1;
							break;
						}
						default: {
							cout << "�ش����" << endl;
							trueanswer = trueanswer;
							break;
						}
						}
						trueanswer = trueanswer + 1;
						break;
					}
							 trueanswer = trueanswer;
							 break;
					}
				}
						 trueanswer = trueanswer; break;
				}
			}

			cout << "��ͨ������Ļ��汭��������һ������ĵط�" << endl;
			system("pause");
			system("cls");
			mySorcerer->inRoom(&grave);
			cout << "��ӭ���� " << grave.getName() << endl;
			cout<<"ԭ��������һ����Կ�ף����������ڵ�λ���Ƿ���ħ���׵ķ�Ĺ������ħ��С��������������㡣"<<endl;
			cout << "����ħ���ù�����Ѫ�������׵Ĺ�ͷ�������Լ����ϵ�����Ϊԭ�ϣ��˿̣���������" << endl;

			cout << "�Ƿ�ѡ�������ħ����ս��:" << endl;
			cout << "1.��		2.��" << endl;
			cin >> op3;
			if (op3 == 1) {
				cout << "ս�������У�����ʵ�����ϴ���ʹ�û��汭˳�����ѡ�" << endl;
			}
			else {
				cout << "��ʹ�û��汭˳�����ѡ�" << endl;
			}
			system("pause");
			system("cls");
			mySorcerer->inRoom(&hall);
		
			break;
		case 4://��ͼ����û�а칫�ң�û��4���ѡ��
			mySorcerer->inRoom(&office);
			cout << "��ӭ����" << office.getName() << endl;
			cout << "ԭ��С�͵���ʳ˾ͽ!!!" << endl;
			cout << "���Ƿ�ѡ����������ս����" << endl;
			cout << "1.��		2.��" << endl;
			cin >> op2;
			system("cls");
			if (op2 == 1) {
				bool ifWin = 0;
				cout << "ս����ʼ�����ѽ���ս��ģʽ..." << endl;
				ifWin = mySorcerer->battle(mySorcerer, Little_buddy);
				if (ifWin) {
					cout << "��ϲ��ɹ�ͨ�����Ĺعز������1000���"<<endl;//������Ӹ�����������Ըı�
					check = 0;
				}
				else {
					cout << "caicaicai" << endl;
				}
			}
			else if (op2 == 2) {
				cout << "���Ѿ�����ս����" << endl;
			}
			else {
				cout << "����ʧ�ܣ������˳��÷��䣡" << endl;
				mySorcerer->inRoom(&hall);
			}
		}
	}
	cout << "������һ�ء�" << endl;
	system("pause");
	system("cls");
	return 1;
}


int Plot::init5(sorcerer *mySorcerer) {

	//ҩˮ���ô���
	vector<Medicine> medicine_G5;
	Medicine medicineTempSmall("Сҩˮ", 20, 400);
	medicine_G5.push_back(medicineTempSmall);
	medicine_G5.push_back(medicineTempSmall);
	Medicine medicineTempMiddle("��ҩˮ", 40, 800);
	medicine_G5.push_back(medicineTempMiddle);
	medicine_G5.push_back(medicineTempMiddle);
	Medicine medicineTempLarge("��ҩˮ", 60, 1200);
	medicine_G5.push_back(medicineTempLarge);
	Shop shop_G5(medicine_G5, "��ÿռ�ħ����Ʒ��", 5);
	bool check = 1;
	room Room_of_requirement("�����Ӧ��");
	room bathroom("ϴ�ּ�");
	room hall("����");
	room The_ministry_of_magic("ħ����");
	room The_dragon_pavilion("������");
	map map5("\t1.*******\n\t*\t*\n\t*ħ����\t*\n\t*\t*\n\t*********\n\t   /\\\n\t   ||\n\t   ||\n\t   ||\n\t   \\/\n\t0.*******\t\t\t\t2.***************\n\t*\t*\t\t\t\t*\t\t*\n\t*����\t*<----------------------------->*�����Ӧ��\t*\n\t*\t*\t\t\t\t*\t\t*\n\t*********\t\t\t\t*****************\n\t   /\\\n\t   ||\n\t   ||\n\t   ||\n\t   ||\n\t   \\/\n\t3.*******\n\t*\t*\n\t*������\t*\n\t*\t*\n\t*********");
	cout << "û�������ŷ���ħ������\n��������Ϊ�Ǹ�ƭ�ӣ�\nֻ���������������Ų�֧��������\n�����ڻ�����齨�˲���������ֿ���\n�������������˷���ħ�Ĺ�ƣ�\n������������ħ������Ƚ̸�С�����ǡ�������������" << endl;
	system("pause");
	system("cls");
	mySorcerer->inRoom(&hall);
	cout << "��ӭ��������~" << endl;
	cout << "��Ŀǰ���ڵ�λ��: " << mySorcerer->getRoom()->getName() << endl;

	goodPerson Sirius("С������", "�Ҹ�ղķ˹��������һ����ô�ã���ȴû�У��Ǻܲ��̡�...\n");
	badPerson Lucius(100, 10, 35, "¬��˹");
	The_ministry_of_magic.addGoodPerson(Sirius);

	badPerson Fire_dragon(100, 10, 35, "����");
	badPerson Earth_dragon(100, 10, 35, "����");
	badPerson Water_dragon(100, 10, 35, "ˮ��");
	badPerson Wind_dragon(100, 10, 35, "����");
	badPerson Far_from_cologne(100, 10, 35, "Զ����");
	//����������� ��սľ����������������������Զ����

	The_dragon_pavilion.addBadPerson(Fire_dragon);
	The_dragon_pavilion.addBadPerson(Earth_dragon);
	The_dragon_pavilion.addBadPerson(Water_dragon);
	The_dragon_pavilion.addBadPerson(Far_from_cologne);
	while (check) {
		system("pause");
		system("cls");
		cout << "����100���Բ鿴��ǰ�Լ�������" << endl;
		cout << "����101���Բ鿴��ʹ���Լ�ӵ�е�ҩƷ" << endl;
		cout << "����102���Բ鿴�Լ�Ŀǰ�Ѿ�ӵ�е�ħ������" << endl;
		cout << "����103���Խ���ؿ��ĵ���" << endl;
		cout << "����110���Ա��浱ǰ����" << endl;
		cout << "����111�����˳���ǰ��Ϸ" << endl;
		cout << "��Ŀǰ���ڵ�λ��Ϊ��" << mySorcerer->getRoom()->getName() << endl;
		cout << "�����ͼ���Ͻǵ����ֿ��Խ���õ�ͼ" << endl;
		cout << "�˹ؿ��ĵ�ͼ��" << endl;
		map5.showMap();
		cout << "����������ѡ��:" << endl;
		int op = 0;
		bool ifWin = 0;
		int op3 = 0;//ѡ��
		int op1 = 0;//¬��˹
		cin >> op;
		switch (op)
		{
		case 100:
			system("cls");
			mySorcerer->showInformation();
			break;
		case 101:
			system("cls");
			mySorcerer->showMedicine();
			break;
		case 102:
			system("cls");
			mySorcerer->showMagicItem();
			break;
		case 103:
			system("cls");
			shop_G5.showShop(mySorcerer);
			break;
		case 110:
			cout << "��δ����" << endl;
			break;
		case 111:
			cout << "���Ѿ���������Ϸ��" << endl;
			return -1;
			break;
		default:
			cout << "����ʧ�ܣ�" << endl;
			break;
		case 3:	//����������
			mySorcerer->inRoom(&The_dragon_pavilion);
			system("cls");
			cout << "��ӭ���� " << The_dragon_pavilion.getName() << endl;
			The_dragon_pavilion.inRoom();
			cout << "�������������ս�����������������Ի����Ӧ�ļӳ�" << endl;
			cout << "1.����		2.����		3.ˮ��		4.����		5.Զ����	0.���ܴ���" << endl;
			cin >> op3;
			switch (op3)
			{
			case 1:
				cout << "��׼����ս���ǻ���...ս��������ʼ��" << endl;
				system("pause");
				system("cls");
				ifWin = mySorcerer->battle(mySorcerer, Fire_dragon);
				if (ifWin == 1) {
					cout << "��ϲ��������˻�������������Լӳɡ�" << endl;
					//д���Լӳ�������
				}
				else {
					cout << "�㱻�������ܣ������״̬��������" << endl;
				}
				break;
			case 2:
				cout << "��׼����ս���Ƿ���...ս��������ʼ��" << endl;
				system("pause");
				system("cls");
				ifWin = mySorcerer->battle(mySorcerer, Wind_dragon);
				if (ifWin == 1) {
					cout << "��ϲ��������˷�������������Լӳɡ�" << endl;
					//д���Լӳ�������
				}
				else {
					cout << "�㱻�������ܣ������״̬��������" << endl;
				}
				break;
			case 3:
				cout << "��׼����ս����ˮ��...ս��������ʼ��" << endl;
				system("pause");
				system("cls");
				ifWin = mySorcerer->battle(mySorcerer, Water_dragon);
				if (ifWin == 1) {
					cout << "��ϲ���������ˮ������������Լӳɡ�" << endl;
					//д���Լӳ�������
				}
				else {
					cout << "�㱻ˮ�����ܣ������״̬��������" << endl;
				}
				break;
			case 4:
				cout << "��׼����ս��������...ս��������ʼ��" << endl;
				system("pause");
				system("cls");
				ifWin = mySorcerer->battle(mySorcerer, Earth_dragon);
				if (ifWin == 1) {
					cout << "��ϲ�����������������������Լӳɡ�" << endl;
					//д���Լӳ�������
				}
				else {
					cout << "�㱻�������ܣ������״̬��������" << endl;
				}
				break;
			case 5:
				cout << "��׼����ս����Զ����...ս��������ʼ��" << endl;
				system("pause");
				system("cls");
				ifWin = mySorcerer->battle(mySorcerer, Far_from_cologne);
				if (ifWin == 1) {
					cout << "��ϲ���������Զ��������������Լӳɡ�" << endl;
					//д���Լӳ�������
				}
				else {
					cout << "�㱻Զ�������ܣ������״̬��������" << endl;
				}
				break;
			default:
				break;
			}
			mySorcerer->inRoom(&hall);
			break;
		case 2:
			mySorcerer->inRoom(&Room_of_requirement);
			system("cls");
			cout << "��ӭ���� " << Room_of_requirement.getName() << endl;
			if (bathroom.getIfIn()) {
				cout << "��ӭ���ٴ����� " << Room_of_requirement.getName() << endl;
				break;
			}
			//�������Ӧ�ݻ��ʲô�ȴ���ӡ�
			Room_of_requirement.inRoom();
			break;
		case 1:

			mySorcerer->inRoom(&The_ministry_of_magic);
			system("cls");
			cout << "��ӭ���� " << The_ministry_of_magic.getName() << endl;
			cout << "��ʱ¬��˹����ħ��������Ƿ�ѡ������" << endl;
			cout << "1.��		2.��" << endl;
			cin >> op1;
			system("cls");
			if (op1 == 1) {
				cout << "¬��˹˵�Ļ�" << endl;
				ifWin = mySorcerer->battle(mySorcerer, Lucius);
				if (ifWin == 1) {
					//�ɹ���ܵĻ�
					check = 1;
				}
				else if (ifWin == 0) {
					cout << "��սʧ�ܣ�" << endl;
					mySorcerer->inRoom(&hall);
				}
			}
			else if (op1 == 2) {
				cout << "��ɹ����롣" << endl;
				mySorcerer->inRoom(&hall);
			}
			else {
				cout << "����ʧ�ܣ�����ȷ���롣" << endl;
				mySorcerer->inRoom(&hall);
			}
			break;
		}
	}
	cout << "��ϲ��ͨ�������" << endl;
	return 1;
}


int Plot::init6(sorcerer *mySorcerer) {

	//ҩˮ���ô���
	vector<Medicine> medicine_G5;
	Medicine medicineTempSmall("Сҩˮ", 20, 400);
	medicine_G5.push_back(medicineTempSmall);
	medicine_G5.push_back(medicineTempSmall);
	Medicine medicineTempMiddle("��ҩˮ", 40, 800);
	medicine_G5.push_back(medicineTempMiddle);
	medicine_G5.push_back(medicineTempMiddle);
	Medicine medicineTempLarge("��ҩˮ", 60, 1200);
	medicine_G5.push_back(medicineTempLarge);
	Shop shop_G5(medicine_G5, "��ÿռ�ħ����Ʒ��", 5);
	bool check = 1;
	room hall("����");
	room The_ministry_of_magic("ħ����");
	room gringotts("�����");
	map map6("\t1.*******\t\t\t\t2.*******\n\t*\t*\t\t\t\t*\t*\n\t*ħ����\t*\t<--------------->\t*�����\t*\n\t*\t*\t\t\t\t*\t*\n\t*********\t\t\t\t*********\n\t  /\\\t\t\t\t\t   ||\t\n\t  ||\t\t\t\t\t   ||\n\t  ||\t\t\t\t\t   ||\n\t  ||\t\t\t\t\t   ||\n\t  ||\t\t\t\t\t   ||\n\t  ||\t\t\t\t\t   ||\n\t  \\/\t\t\t\t\t   ||\t\n\t0.*******\t\t\t\t   ||\n\t*\t*\t\t\t\t   ||\n\t*����\t*<===================================\n\t*\t*\n\t*********");
	//cout << "û�������ŷ���ħ������\n��������Ϊ�Ǹ�ƭ�ӣ�\nֻ���������������Ų�֧��������\n�����ڻ�����齨�˲���������ֿ���\n�������������˷���ħ�Ĺ�ƣ�\n������������ħ������Ƚ̸�С�����ǡ�������������" << endl;
	system("pause");
	system("cls");
	mySorcerer->inRoom(&hall);
	cout << "��ӭ���������~" << endl;
	cout << "��Ŀǰ���ڵ�λ��: " << mySorcerer->getRoom()->getName() << endl;
	//�ڹ������Ҫ��6��ʳ��ͽ
	//������
	badPerson dolohov(100, 5, 10, "�������");
	badPerson rookwood(100, 5, 10, "¬�����");
	badPerson bellatrix(100, 5, 10, "���������˹");
	badPerson travers(100, 5, 10, "������˹");
	badPerson DoleFinn(100, 5, 10, "�����");
	badPerson malfoy(100, 5, 10, "�����");
	gringotts.addBadPerson(dolohov);
	gringotts.addBadPerson(rookwood);
	gringotts.addBadPerson(bellatrix);
	gringotts.addBadPerson(travers);
	gringotts.addBadPerson(DoleFinn);
	gringotts.addBadPerson(malfoy);

	while (check) {
		system("pause");
		system("cls");
		cout << "����100���Բ鿴��ǰ�Լ�������" << endl;
		cout << "����101���Բ鿴��ʹ���Լ�ӵ�е�ҩƷ" << endl;
		cout << "����102���Բ鿴�Լ�Ŀǰ�Ѿ�ӵ�е�ħ������" << endl;
		cout << "����103���Խ���ؿ��ĵ���" << endl;
		cout << "����110���Ա��浱ǰ����" << endl;
		cout << "����111�����˳���ǰ��Ϸ" << endl;
		cout << "��Ŀǰ���ڵ�λ��Ϊ��" << mySorcerer->getRoom()->getName() << endl;
		cout << "�����ͼ���Ͻǵ����ֿ��Խ���õ�ͼ" << endl;
		cout << "�˹ؿ��ĵ�ͼ��" << endl;
		map6.showMap();
		cout << "����������ѡ��:" << endl;
		int op = 0;
		bool ifWin = 0;
		int op1 = 1;	//ѡ��ʲô����
		int op2 = 0;
		cin >> op;
		switch (op)
		{
		case 100:
			system("cls");
			mySorcerer->showInformation();
			break;
		case 101:
			system("cls");
			mySorcerer->showMedicine();
			break;
		case 102:
			system("cls");
			mySorcerer->showMagicItem();
			break;
		case 103:
			system("cls");
			shop_G5.showShop(mySorcerer);
			break;
		case 110:
			cout << "��δ����" << endl;
			break;
		case 111:
			cout << "���Ѿ���������Ϸ��" << endl;
			return -1;
			break;
		default:
			cout << "����ʧ�ܣ�" << endl;
			break;
		case 1:
			mySorcerer->inRoom(&The_ministry_of_magic);
			cout << "��ӭ����ħ����" << endl;
			break;
		case 2:
			op2 = 1;
			mySorcerer->inRoom(&gringotts);
			cout << "��ӭ���������һȺʳ��ͽ���ڵ����㡣����������";
			while (op2 == 1) {
				gringotts.showBadPerson();
				cout << "��������Ҫ��ս��ʳ��ͽ:(0������)" << endl;
				cin >> op1;
				if (op1 == 0) {
					cout << "���ܳɹ���" << endl;
					mySorcerer->inRoom(&The_ministry_of_magic);
				}
				ifWin = mySorcerer->battle(mySorcerer, gringotts.getBadPerson(op1));	//	�޸�
				if (ifWin == 1) {
					gringotts.eraseBadPerson(op1);
					cout << "��ϲ���������һ��ʳ˾ͽ,�����ѡ�����ս���������ܡ�" << endl;
					cout << "1.����ս��		2.����" << endl;
					cin >> op2;
					if (op2 == 2) {
						op2 = 0;
						cout << "���ܳɹ���" << endl;
						mySorcerer->inRoom(&The_ministry_of_magic);
					}
					else {
						cout << "��ѡ���˼���ս��" << endl;
					}
				}
				else {
					cout << "�㱻���" << endl;
				}
				if (gringotts.getBadPersonSize() == 0) {
					check = 1;
					op2 = 0;
				}
			}

			break;
		}
	}
	cout << "��ϲ��ͨ��������" << endl;
	return 1;
}

int Plot::initFinal(sorcerer * mySorcerer)
{
	//ҩˮ���ô���
	vector<Medicine> medicine_G5;
	Medicine medicineTempSmall("Сҩˮ", 20, 400);
	medicine_G5.push_back(medicineTempSmall);
	medicine_G5.push_back(medicineTempSmall);
	Medicine medicineTempMiddle("��ҩˮ", 40, 800);
	medicine_G5.push_back(medicineTempMiddle);
	medicine_G5.push_back(medicineTempMiddle);
	Medicine medicineTempLarge("��ҩˮ", 60, 1200);
	medicine_G5.push_back(medicineTempLarge);
	Shop shop_G5(medicine_G5, "��ÿռ�ħ����Ʒ��", 5);
	bool check = 1;
	room hall("����");
	room The_black_forest("��ɭ��");
	map mapfinal("\t0.*******\t\t\t\t1.*******\n\t*\t*\t\t\t\t*\t*\n\t*����\t*\t---------------- > \t*��ɭ��\t*\n\t*\t*\t\t\t\t*\t*\n\t*********\t\t\t\t*********");
	//cout << "û�������ŷ���ħ������\n��������Ϊ�Ǹ�ƭ�ӣ�\nֻ���������������Ų�֧��������\n�����ڻ�����齨�˲���������ֿ���\n�������������˷���ħ�Ĺ�ƣ�\n������������ħ������Ƚ̸�С�����ǡ�������������" << endl;
	system("pause");
	system("cls");
	mySorcerer->inRoom(&hall);
	cout << "��ӭ������վ�֮ս~" << endl;
	cout << "��Ŀǰ���ڵ�λ��: " << mySorcerer->getRoom()->getName() << endl;

	badPerson voldemort(100, 5, 10, "����ħ");


	while (check) {
		system("pause");
		system("cls");
		cout << "����100���Բ鿴��ǰ�Լ�������" << endl;
		cout << "����101���Բ鿴��ʹ���Լ�ӵ�е�ҩƷ" << endl;
		cout << "����102���Բ鿴�Լ�Ŀǰ�Ѿ�ӵ�е�ħ������" << endl;
		cout << "����103���Խ���ؿ��ĵ���" << endl;
		cout << "����110���Ա��浱ǰ����" << endl;
		cout << "����111�����˳���ǰ��Ϸ" << endl;
		cout << "��Ŀǰ���ڵ�λ��Ϊ��" << mySorcerer->getRoom()->getName() << endl;
		cout << "�����ͼ���Ͻǵ����ֿ��Խ���õ�ͼ" << endl;
		cout << "�˹ؿ��ĵ�ͼ��" << endl;
		mapfinal.showMap();
		cout << "����������ѡ��:" << endl;
		int op = 0;
		bool ifWin = 0;
		int op1 = 1;	//ѡ��ʲô����
		int op2 = 0;
		cin >> op;
		switch (op)
		{
		case 100:
			system("cls");
			mySorcerer->showInformation();
			break;
		case 101:
			system("cls");
			mySorcerer->showMedicine();
			break;
		case 102:
			system("cls");
			mySorcerer->showMagicItem();
			break;
		case 103:
			system("cls");
			shop_G5.showShop(mySorcerer);
			break;
		case 110:
			cout << "��δ����" << endl;
			break;
		case 111:
			cout << "���Ѿ���������Ϸ��" << endl;
			return -1;
			break;
		default:
			cout << "����ʧ�ܣ�" << endl;
			break;
		case 1:
			mySorcerer->inRoom(&The_black_forest);
			cout << "��ӭ����ħ����" << endl;
			//��һЩ��
			cout << "��ʱ����ħ���ں�ɭ������Ƿ�ѡ���������֮ս" << endl;
			cout << "1.��		2.��" << endl;
			cin >> op1;
			system("cls");
			if (op1 == 1) {
				ifWin = mySorcerer->battle(mySorcerer, voldemort);
				if (ifWin == 1) {
					//�ɹ���ܵĻ�
					check = 1;
				}
				else if (ifWin == 0) {
					cout << "��սʧ�ܣ�" << endl;
					mySorcerer->inRoom(&hall);
				}
			}
			else if (op1 == 2) {
				cout << "��ɹ����롣" << endl;
				mySorcerer->inRoom(&hall);
			}
			else {
				cout << "����ʧ�ܣ�����ȷ���롣" << endl;
				mySorcerer->inRoom(&hall);
			}
			break;
		}
	}
	cout << "��ϲ��ͨ�����йؿ�" << endl;
	return 1;
}


