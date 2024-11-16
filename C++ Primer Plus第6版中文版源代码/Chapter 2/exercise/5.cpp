#include<iostream>

using namespace std;

int main(){
    double Celsius;
    cout << "Please enter a Celsius value: ";
    cin >> Celsius;
    double Fahrenheit = Celsius*1.8 + 32.0;
    cout << Celsius << " degree Celsius is " << Fahrenheit << " degrees Fahrenheit";

}