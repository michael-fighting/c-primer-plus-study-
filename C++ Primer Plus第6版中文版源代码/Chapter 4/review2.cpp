#include<iostream>
#include<stdio.h>
#include<vector>
#include<array>
using namespace std;

int main(){
    cout << (int *) "Home of the jolly bytes";
    struct fish
    {
        char type[20];
        int weight;
        float changdu;
    };
    fish * po = new fish;
    cout << "Enter kind of fish:";
    cin >> po->type;

    const int num = 10;
    vector<string> ve(num);
    array <string,num> str;
    
    return 0;

}