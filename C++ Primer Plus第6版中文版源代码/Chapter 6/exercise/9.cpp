#include<stdio.h>
#include<iostream>
#include<vector>
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
    vector<string> donors;
    vector<string> nondonors; 
    int number;
    struct Grand
    {
        /* data */
        string name;
        double cash;
    };
    inFile >> number;
    inFile.ignore();
    Grand* arr = new Grand[number];
    for (int i = 0; i < number; i++)
    {
        /* code */
        getline(inFile, arr[i].name);
        inFile >> arr[i].cash;
        inFile.ignore();
    }
    while (number > 0){
        if (arr[number-1].cash > 10000){
            donors.push_back(arr[number-1].name);
        }else{
            nondonors.push_back(arr[number-1].name);
        }
        number--;
    }
    cout << "以下是重要捐赠者" << endl;
    if (donors.empty()){
        cout << "none" << endl;
    }
    for (const string& val : donors)
    {
        /* code */
        cout 
        << val << endl;
    }
    cout << "以下是非重要捐赠者" << endl;
    if (nondonors.empty()){
        cout << "none" << endl;
    }
    for (const string& val : nondonors)
    {
        /* code */
        cout << val << " "<< endl;
    }
    delete[] arr;
    return 0;
}