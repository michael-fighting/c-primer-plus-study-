#include<stdio.h>
#include<iostream>
#include<istream>

using namespace std;

int main(){
    struct pissa
    {
        /* data */
        char name[30];
        float diameter;
        float weight;
    };
    pissa info[10];
    cout << "请输入如下相关信息：" << endl;
    cout << "披萨饼公司的名称，可以有多个单词组成";
    cin.getline(info[0].name,30);
    cout << "披萨饼的直径";
    cin >> info[0].diameter;
    cout << "披萨饼的重量：";
    cin >> info[0].weight;
    cout << info[0].name << info[0].diameter << info[0].weight;
    return 0;

    
}