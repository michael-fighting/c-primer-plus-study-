#include<iostream>

using namespace std;
int main(){
    double arr[10];
    int count = 0;
    double average = 0.0;
    double sum = 0.0;
    int res = 0;
    for(count = 0; count < 10; count++){
        cin >> arr[count];
        if (cin.fail()){
            cout << "非法输入，该值将被忽略！" << endl;
            cin.clear(); // 清除错误状态
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
        sum += arr[count];
    }
    //求平均值
    average = sum /count;
    for (int j = 0; j < count; j++){
        if (arr[j] > average){
            res++;
        }
    }
    cout << res << endl;
    return 0;

}