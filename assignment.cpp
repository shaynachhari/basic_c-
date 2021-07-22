#include<iostream>
using namespace std;

int main(){
    int n = 0;
    int result = 0;
    cout<<"Enter value of n: ";
    cin>>n;
    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i+1 <<"th value: ";
        cin>>array[i];
        if (i == 0)
        {
            result = array[i];
        }
        else{
            result = result * array[i];
        }
    }
    cout<<"The multiple of values: "<<result;
    return 0;
}