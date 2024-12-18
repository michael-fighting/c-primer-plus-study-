#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
    /* data */
    char brand[20];
    float weight;
    int calorie;
};

int main() {
    CandyBar * snack = new CandyBar[1];

    cout << "这个糖块的糖块的品牌是：?";
	cin.getline(snack->brand, sizeof(snack->brand));//这样写是支持多个单词的公司
	cout << " 改储糖块的重量：?";
	cin >> snack->weight;
	cout << " 糖块的卡路里含量:?";
	cin >> snack->calorie;
	cout << "这个糖块的糖块的品牌是：" << snack->brand;
	cout << " 改储糖块的重量：" << snack->weight;
	cout << " 糖块的卡路里含量:" << snack->calorie << endl;

}