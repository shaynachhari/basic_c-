#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int n;
    cout<<"\t\t\tThis is a fibonacci squence programme.\n";
    cout<<"Please enter the sequence term: ";
    cin>>n;
    cout<<"The no. at "<<n<<"th term is: "<<fibo(n)<<endl;
    return 0;
}