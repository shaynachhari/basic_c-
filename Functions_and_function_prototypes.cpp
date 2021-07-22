#include<iostream>
using namespace std;


int sum(int , int);  //function prototype
void g(void);
int main(){
    int num1, num2;
    cout<<"Enter 1st number:";
    cin>>num1;
    cout<<"Enter 2nd number:";
    cin>>num2;
    cout<<"The sum of two number is:"<<sum(num1,num2);
    g();
    return 0;
}
int sum(int a, int b){
    //parameter a and b will be taking values from argument num1 and num2.
    int c =a+b;
    return c;
}
void g(){
    cout<<"\nHello, Good morning";
}