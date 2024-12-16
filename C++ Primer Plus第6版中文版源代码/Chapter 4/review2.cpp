#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<array>


int main(){
    std::cout << (int *) "Home of the jolly bytes";
    struct fish
    {
        char type[20];
        int weight;
        float changdu;
    };

    fish * pole = new fish;
    std::cout << "Enter kind of fish: ";
    std::cin >> pole->type;

    const int Str_num{10};  
    std::vector<std::string> vstr(Str_num);
    std::array<std::string, Str_num> astr;
    

}

