#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    const float paragram1 = 3.876;
    const float paragram2 = 62.14;
    double gasOnehundred;
    cout << "�����������ĺ�������ÿ100�������ĵ���������������";
    cin >> gasOnehundred;
    cout << "ת����ÿ���ض���Ӣ��Ϊ" << int(paragram2/(gasOnehundred/paragram1)) << "mpg";
    return 1;

}