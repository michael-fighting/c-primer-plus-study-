#include<iostream>
using namespace std;
const int strsize = 20;//���������С
 
//����BOP��Ա����Ϣ�ṹ��
struct bop {
public:
	char fullname[strsize];//��ʵ����
	char title[strsize];//ͷ��
	char bopname[strsize];//��������
	int preference;//��Աƫ��
};
 
//�˵���ʾ
void caidan_show()
{
	cout << "a.display by name\t" << "b. display by title" << endl;
	cout << "c. display by bopname\t" << "d.display by preference" << endl;
	cout << "q. quit" << endl;
}
 
//new��̬������Ա���飨������Ϣ��
bop* creat(int people) 
{
	bop* p = new bop[people];//������СΪPeople��bop��Ա����
	for (int i = 0; i < people; i++)//��ÿ����Ա��ֵ
	{
		cout << "�������" << i + 1 << "���˵���Ϣ��" << endl;
		cout << "fullname\t: ";
		cin >> p[i].fullname;
		cout << "title\t: ";
		cin >> p[i].title;
		cout << "bopname\t: ";
		cin >>p[i].bopname;
		cout << "preference\t: ";
		cin >> p[i].preference;
		system("cls");
	}
	return p;
}
 
//preferrence�������
//���preference���� �������Ӧ������
void Preferrence(bop x)
{
	switch (x.preference)
	{
	case 0:cout << x.fullname << endl; break;
	case 1:cout << x.title << endl; break;
	case 2:cout << x.bopname << endl; break;
	}
}
 
//������
int main()
{
	int n,count=0;
	char choose;
	cout << "�����ж��ٳ�Ա��Ҫ��д��Ϣ�� ";
	cin >> n;
	bop* bopmember = creat(n);
	caidan_show();
	cout << "Enter your choice: ";//��һ��ѭ��ִ�����
	cin >> choose;
	while(1)
	{
		while (count++)//��һ�鲻ִ�� next choice ��������д��ѭ��
		{
			cout << "Next choice: ";
			cin >> choose;
			break;
		}
		for (int i = 0; i < n; i++)
		{
			switch (choose)
			{
			case 'a':cout << bopmember[i].fullname << endl; break;
			case 'b':cout << bopmember[i].title << endl; break;
			case 'c':cout << bopmember[i].bopname << endl; break;
			case 'd': Preferrence(bopmember[i]);
			case 'q':delete[]bopmember; cout << "bye"; exit(0);
			}
		}
	}
	
}