#include<iostream>
using namespace std;

// constant parameter
void num(const int x, int y){
    // we can not change value of x because x is constant parameter
    // x += 1;
    y += 1;
    cout<<x<<endl<<y<<endl;
}

// static variable initilize value only 1 time after that it will retain the value
void some(int x, int y){
    static int z = 0;
    cout<<z<<endl;
    z = x + y;
    cout<<z<<endl;
}

int main(){
    // num(6, 9);
    some(9, 6);
    some(3, 7);
    some(15, 2);
    return 0;
}
