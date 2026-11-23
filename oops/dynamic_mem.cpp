#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name,grade;
        int age,usn;

};

int main(){
    student *s=new student;   //using pointer which uses hashmap for better memery utilization
    (*s).name="Prashi";
    s->grade="A+";
    s->age=20;
    (*s).usn=32;

    cout<<s->name<<endl;
    cout<<s->grade<<endl;
    cout<<s->age<<endl;
    cout<<s->usn<<endl;
}
