#include<iostream>

using namespace std;

int main(){
    const int ychiToYcun = 12;
    const float ycunToMi = 0.0254;
    const float kgToBang = 2.2;
    int ychi,ycun,bang;
    float bmi;
    cout<<"��������ߣ���Ӣ�ߺ�Ӣ��Ϊ��λ"<<endl;
    cout<< "Ӣ��Ϊ"<<endl;
    cin>> ychi;
    cout<<"Ӣ��Ϊ"<<endl;
    cin>> ycun;
    cout<<"���������أ��԰�Ϊ��λ"<<endl;
    cin>>bang;
    bmi = (bang/kgToBang)/((ychiToYcun*ychi+ycun)*ycunToMi);
    cout<<"bmiָ��Ϊ"<<bmi<<endl;
    return 1;
}