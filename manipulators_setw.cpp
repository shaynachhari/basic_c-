#include<iostream>
#include<iomanip>
using namespace std;

// setw and endl both are manipulators
// setw used to set width of upcoming instance
// iomanip header file must be included for setw
int main(){
    int x = 658;
    int y = 1000666;
    long long int z = 16549431321;
    cout<<"Value of x is:"<<setw(20)<<x<<endl;
    cout<<"Value of y is:"<<setw(20)<<y<<endl;
    cout<<"Value of z is:"<<setw(20)<<z<<endl;
    return 0;
}
