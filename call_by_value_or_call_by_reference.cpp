#include<iostream>
using namespace std;

// it will not swap value
void swap(int a, int b){
    int z = a;
    a = b;
    b = z;
}

void swap_pointer(int *x, int *y){
    int z = *y;
    *y = *x;
    *x = z;
}

void swap_reference(int &a, int &b){
    int z = a;
    a = b;
    b = z;
}

int main(){
    int x = 6;
    int y = 9;
    cout<<"the value of x: "<<x<<" and the value of y: "<<y<<endl;
    swap_pointer(&x, &y);
    cout<<"the swaped value by pointer of x: "<<x<<" and the value of y: "<<y<<endl;
    swap_reference(x, y);
    cout<<"the swaped value by reference of x: "<<x<<" and the value of y: "<<y<<endl;
    return 0;
}
