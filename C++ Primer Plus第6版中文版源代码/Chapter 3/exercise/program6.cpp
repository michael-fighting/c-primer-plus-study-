#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    double distanceY, gasJ, distanceG, gasS;
    cout << "请输入驱车里程(英里)";
    cin >> distanceY;
    cout << "请输入使用汽油量（加仑）";
    cin >> gasJ;
    cout << "汽车耗油量为一加仑的里程为" << distanceY/gasJ << endl;
     cout << "请输入驱车里程(公里)";
    cin >> distanceG;
    cout << "请输入使用汽油量（升）";
    cin >> gasS;
    cout << "每百公里的耗油量（升）" << gasS/distanceG*100 << endl; 



}