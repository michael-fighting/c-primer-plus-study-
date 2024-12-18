#include<iostream>

struct Pizza
{
    /* data */
    char companyName[20];
    float diameter;
    int weight;
};

int main(){
    using namespace std;
    Pizza *pizza = new Pizza;
    cout << "请输入披萨德直径： ";
    cin >> pizza->diameter;

    cout << "请输入披萨的品牌： ";
    cin.get();
    cin.getline(pizza->companyName, sizeof(pizza->companyName));
    cout << " 请输入披萨的重量";
	cin >> pizza->weight;
	cout << "披萨的品牌是：" << pizza->companyName
		<< " 披萨的直径是：" << pizza->diameter
		<< " 披萨的重量是：" << pizza->weight << endl;
	return 0;
}
