#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int start; 
    int end;
    cout << "��������ʼ��";
    cin >> start;
    cout << "�����������";
    cin >> end;
    int sum;
    while(start <= end){
        sum += start;
        start++;
    }
    cout << "�ܺ�Ϊ" << sum;
    return 0;
}