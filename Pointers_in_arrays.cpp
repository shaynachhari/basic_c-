#include<iostream>
using namespace std;

int main(){
    int marks[4]={4,24,11,10};
    cout<<marks+3<<endl;
    int*p = marks;
    
    // Address of marks elements
    cout<<"The address of marks elements "<<p<<endl;
    cout<<"The address of marks elements "<<p+1<<endl;
    cout<<"The address of marks elements "<<p+2<<endl;
    cout<<"The address of marks elements "<<p+3<<endl;

    // Values of marks elements
    cout<<"The value of marks elements "<<*p<<endl;
    cout<<"The value of marks elements "<<*(p+1)<<endl;
    cout<<"The value of marks elements "<<*(p+2)<<endl;
    cout<<"The value of marks elements "<<*(p+3)<<endl; 

    //********************************************************************************************************************************************
    int arr[6] = {2,4,6,8,10,12};  

    arr[6] = 14;
    arr[7] = 16;
    arr[8] = 18;

    // cout<<arr[6]<<endl;
    // cout<<arr<<endl;
    // cout<<arr+1<<endl;
    // cout<<endl;

    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*arr+2<<endl;
    // cout<<endl;

    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;

    for (int i=0; i<6; i++){
        cout<<(arr+i)<<endl;
        cout<<endl;
        cout<<*(arr+i)<<endl;
    }


    return 0;
}