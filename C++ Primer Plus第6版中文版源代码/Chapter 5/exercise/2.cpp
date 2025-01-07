#include<iostream>
#include<array>

const int ArSize = 16;
int main()
{
    using namespace std;
    array<long long, ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    std::cout << "½×³Ë½á¹ûÊä³ö£¡" << std::endl;
    for (int i = 0; i < ArSize; i++)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
    return 0;
}