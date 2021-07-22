#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<max(2, 10)<<endl;
    cout<<min(2, 10)<<endl;
    //    cmath   header   file

    cout<<sqrt(64)<<endl; // returns square root
    cout<<cbrt(125)<<endl; // returns cude root
    cout<<pow(2, 5)<<endl; // it returns 2ng arg. power of 1st arg.

    // trignomatric angles 
    cout<<sin(1.5708)<<endl;  // returns sin value of angle(angle in radian)
    cout<<cos(45)<<endl;  // returns cos value of angle
    cout<<tan(30)<<endl;  // returns tan value of angle

    cout<<asin(1)<<endl;  // return sin inverse of x in radian
    cout<<acos(1)<<endl;  // return cos inverse of x in radian
    cout<<atan(1)<<endl;  // return tan inverse of x in radian

    cout<<round(2.43)<<endl;  //return round of integer
    cout<<ceil(2.63)<<endl;  // return forward nearest integer
    cout<<floor(2.63)<<endl;  //return backward nearest integer
    
    cout<<abs(-64.3)<<endl;  // return absolute value(positive value)
    cout<<abs(64)<<endl;

    cout<<fabs(-36)<<endl;  //  return floating absolute value(positive value)

    cout<<log(10)<<endl;  //  return log value of x
    return 0;
}
