#include<iostream>
using namespace std;
const int strsize = 20;//定义数组大小
 
//定义BOP成员的信息结构体
struct bop {
public:
	char fullname[strsize];//真实姓名
	char title[strsize];//头衔
	char bopname[strsize];//秘密姓名
	int preference;//成员偏好
};
 
//菜单显示
void caidan_show()
{
	cout << "a.display by name\t" << "b. display by title" << endl;
	cout << "c. display by bopname\t" << "d.display by preference" << endl;
	cout << "q. quit" << endl;
}
 
//new动态创建成员数组（输入信息）
bop* creat(int people) 
{
	bop* p = new bop[people];//创建大小为People的bop成员数组
	for (int i = 0; i < people; i++)//给每个成员赋值
	{
		cout << "请输入第" << i + 1 << "个人的信息：" << endl;
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
 
//preferrence函数输出
//如果preference符合 则输出相应的名称
void Preferrence(bop x)
{
	switch (x.preference)
	{
	case 0:cout << x.fullname << endl; break;
	case 1:cout << x.title << endl; break;
	case 2:cout << x.bopname << endl; break;
	}
}
 
//主函数
int main()
{
	int n,count=0;
	char choose;
	cout << "输入有多少成员需要填写信息： ";
	cin >> n;
	bop* bopmember = creat(n);
	caidan_show();
	cout << "Enter your choice: ";//第一遍循环执行这个
	cin >> choose;
	while(1)
	{
		while (count++)//第一遍不执行 next choice 所以在这写个循环
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