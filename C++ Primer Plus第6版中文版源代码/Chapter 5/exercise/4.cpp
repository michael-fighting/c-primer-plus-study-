#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
    int sumDaphne;
    int sumCleo;
    int year;
    for(sumCleo = 100, sumDaphne = 100, year = 1; sumCleo <= sumDaphne; year++){
        sumCleo *= (1 + year*0.05);
        sumDaphne = 100 * (1+ year * 0.1);
    }
    cout<<year;
    return 0;
}