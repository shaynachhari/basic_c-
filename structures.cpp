#include<iostream>
using namespace std;

typedef struct students
{
    int rollno;
    string name;
    float marks;
}stu;

int main(){
    struct students nitin;
    nitin.rollno = 51;
    nitin.name = "Nitin Goswami";
    nitin.marks= 9.1;
    cout<<"Details of Nitin"<<endl;
    cout<<"The name of Nitin : "<<nitin.name<<endl;
    cout<<"The roll no. of Nitin : "<<nitin.rollno<<endl;
    cout<<"The marks of Nitin : "<<nitin.marks<<endl;
    cout<<endl;


    cout<<"Details of Shayna"<<endl;
    stu shayna;
    shayna.name="Shayna Chhari";
    shayna.rollno=71;
    shayna.marks=9.5;
    cout<<"The name of Shayna : "<<shayna.name<<endl;
    cout<<"The roll no. of Shayna : "<<shayna.rollno<<endl;
    cout<<"The marks of Shayna : "<<shayna.marks<<endl;
    
    getchar();
    return 0;
}
