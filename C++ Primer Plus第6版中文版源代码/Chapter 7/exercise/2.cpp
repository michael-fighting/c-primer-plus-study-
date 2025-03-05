#include<stdio.h>
#include<iostream>
using namespace std;
double * input(int & len);
double show(double * val, int len);
void average(double val, int len);

int main(){
    int l = 0;  // 记录实际输入的数量

    double * res = input(l);
    double s = show(res, l);
    average(s, l);
    return 1;

}

double * input(int & len){
    double* data = new double[10];
    double temp;
    cout << "输入10个数据";
    while (len < 10 && cin >> temp) {
        data[len++] = temp;
    }
    return data;
}

double show(double * val, int len){
    double sum = 0;
    cout << "开始显示数值";
    for (int i = 0; i < len; i++)
    {
        /* code */
        cout << val[i] << endl;
        sum += val[i];
    }
    return sum;
}

void average(double val, int len){
    cout << "平均值为" << val /len;
    return;
}