#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int num[12];
    string month[12] = {"һ","��","��","��","��","��","��","��","��","ʮ","ʮһ","ʮ��"};
    int i;
    int sum = 0;
    for ( i = 0; i < 12; i++)
    {
        /* code */
        cout << "������" <<month[i] <<"����������";
        cin >> num[i];
        sum += num[i];
    }
    cout << "ȫ�����������Ϊ" << sum;
    return 0;

    
}