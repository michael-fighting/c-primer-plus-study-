#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    long long int globalPopu, amePopu;
    cout << "Enter the world's population: ";
    cin >> globalPopu;
    cout << "Enter the population of the US: ";
    cin >> amePopu;
    long double result = (amePopu)/float(globalPopu);
    cout << "The population of the US is" << result*100 <<"% of the world population.";
    return 1;


}