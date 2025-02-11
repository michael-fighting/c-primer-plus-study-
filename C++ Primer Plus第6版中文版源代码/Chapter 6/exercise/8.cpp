#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
const int SIZE = 60;

int main(){
    char filename[SIZE];
    ifstream inFile;
    cout << "enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open()){
        cout << "Could not open the file ";
        exit(EXIT_FAILURE);
    }
    char value;
    int count = 0;
    inFile >> value;
    while (inFile.good()){
        ++count;
        inFile >> value;
    }
    cout << "字符数量为" << count << endl;
    inFile.close();
    return 0;

}