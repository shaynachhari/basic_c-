#include<iostream>
using namespace std;

int main(){
    for(int ns=0; ns<=5; ns++){
        if(ns==2){
            continue;
        }
        //cout<<ns<<endl;
    }
    for (int i=0 ; i<=3; i++){
        if(i == 0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}