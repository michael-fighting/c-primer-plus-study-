#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
    /* data */
    char band[20];
    float weight;
    int caleroy;
};

int main(){
    CandyBar snack = {"Moncha Munch",2.3,350};
    cout << "这个糖块的品牌是： " << snack.band
         << "糖块的重量是： " << snack.weight
         << "糖块的卡路里含量： " << snack.caleroy << endl;
    CandyBar snacks[3] = {{"Moncha 1Munch",12.3,1350},{"2Moncha Munch",22.3,2350},{"3Moncha Munch",23.3,3350}};
    return 0;
}
