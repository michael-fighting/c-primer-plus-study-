/**"pizza"  p

"taco"[2] 第3个字符

字符串常量的行为与数组名相同*/

/* 
struct glita
{
    data 
};

pass(glitz);
pass2(&glitz);*/

/*
int paraFunc(const char *a){

}

int judge(*paraFunc f){

}*/

struct application
{
    /* data */
    char name[30];
    int credit_ratings[3];
};
#include<iostream>
using namespace std;
void show(application a){
    cout << a.credit_ratings; 
    cout << a.name;
}

void show(application *a){
    cout << a->credit_ratings;
    cout << a->name;
}

typedef void (*p_f1) (application *);
p_f1 p1 = f1;
typedef const char * (*p_f2) (const application *, const application *);
p_f2 p2 = f2;
p_f1 ap[5];
p_f2 (*pa)[10];






