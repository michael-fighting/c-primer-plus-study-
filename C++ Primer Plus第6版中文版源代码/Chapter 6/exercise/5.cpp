#include<iostream>
#include<cctype>
using namespace std;

int main(){
    int income;
    double res;
    while (1)
    {
        /* code */
        cout << "请输入收入";
        cin >> income ;
        if ( cin.fail() || income < 0){
            break;
        }
        if (income <= 5000) {
            res = income * 0.0;
        }else if (income <= 15000) {
            res = 5000 * 0.0 + (income - 5000) * 0.1;
        }else if (income <= 35000) {
            res = 5000 * 0.0 + 10000 * 0.1 + (income - 15000) * 0.15;
        }else {
            res = 5000 * 0.0 + 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        }
        cout << "用户的所得税为" << res << endl;
    }
    return 1;
}