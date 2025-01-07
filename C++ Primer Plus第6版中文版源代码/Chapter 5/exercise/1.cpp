#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int start; 
    int end;
    cout << "请输入起始数";
    cin >> start;
    cout << "请输入结束数";
    cin >> end;
    int sum;
    while(start <= end){
        sum += start;
        start++;
    }
    cout << "总和为" << sum;
    return 0;
}