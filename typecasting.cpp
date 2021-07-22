#include<iostream>
using namespace std;

int main(){
    int a = 2;
    float b = 3.2;

    // typecasting
    // cout<<"The value of a is "<<float(a)<<endl;
    // cout<<"The value of b is "<<int(b)<<endl;
    // cout<<"The value of b is "<<(int)b<<endl;
    // cout<<int(a + 2.3f)<<endl;
    // cout<<float(b + 2)<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<a<<endl;

    cout<<"The value of a is "<<int(b)<<endl;
    cout<<"The value of a is "<<(a)<<endl;

    cout<<int( a + 2.1f) << endl;
    cout<<float(b + 3) << endl;

    cout<<float(2.1 + 2)<< endl;
    cout<<int(2.1 + 3)<<endl;
    return 0;
}