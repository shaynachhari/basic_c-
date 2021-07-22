#include<iostream>
using namespace std;

int main(){
    int math, hin, phy, chem, eng;
    int gtotal=500;
    cout<<"              Welcome to percentage calculator\n";
    cout<<"               Enter your subject wise marks";
    cout<<"\nEnglish :";
    cin>>eng;
    cout<<"Hindi :";
    cin>>hin;
    cout<<"Maths :";
    cin>>math;
    cout<<"Physics :";
    cin>>phy;
    cout<<"Chemistry :";
    cin>>chem;
    
    float total=math+hin+phy+chem+eng;
    float per=total*100/gtotal;
    cout<<"Your total marks :"<<total<<endl;
    cout<<"Your Percentage is "<<per<<"%";


    return 0;
}