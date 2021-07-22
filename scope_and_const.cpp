#include<iostream>
using namespace std;

// constant are those varibables whose value can not be update
// global constant
const int i = 5;

// global varibable
int j = 8;

int main(){
    // local constant
    const int i = 51;
    cout<<"Local value of i is "<<i<<endl;
    cout<<"Globle value of i is "<<::i<<endl;
    // local varibable
    int j = 3;
    // j = 8;
    // for printing globle value we use double coloun(::)before name of varibable
    cout<<"Local value of j is "<<j<<endl;
    cout<<"Globle value of j is "<<::j<<endl;
    return 0;
}