#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int num[12];
    string month[12] = {"һ","��","��","��","��","��","��","��","��","ʮ","ʮһ","ʮ��"};
    int i,j;
    int sum = 0;
    for (j = 1; j < 4; j++)
    {
        /* code */
        for ( i = 0; i < 12; i++)
    {
        /* code */
        cout << "������" << j << "��" << month[i] <<"����������";
        cin >> num[i];
        sum += num[i];
    }
    }
    
    
    cout << "ȫ�����������Ϊ" << sum;
    return 0;

    
}