#include<iostream>
#include<iostream>
double average(double x, double y);

using namespace std;

int main(){
    double i, j;
    cout << "请输入两个数，0 quit" << endl;
    while(cin >> i >> j){
        if (i != 0 && j != 0){
            cout << average(i, j) << endl;
        }else{
            break;
        }
        
    }
    return 1;

}

double average(double x, double y){
    double res;
    res = 2.0 * x * x / (x+y);
    return res; 
}