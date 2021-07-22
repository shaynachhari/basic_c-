#include<iostream>
using namespace std;

inline int sum(int x, int y){
    return x+y;
}
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"The sum of the numbers is: "<<sum(a,b);
    return 0;
}