#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    double distanceY, gasJ, distanceG, gasS;
    cout << "�������������(Ӣ��)";
    cin >> distanceY;
    cout << "������ʹ�������������أ�";
    cin >> gasJ;
    cout << "����������Ϊһ���ص����Ϊ" << distanceY/gasJ << endl;
     cout << "�������������(����)";
    cin >> distanceG;
    cout << "������ʹ��������������";
    cin >> gasS;
    cout << "ÿ�ٹ���ĺ�����������" << gasS/distanceG*100 << endl; 



}