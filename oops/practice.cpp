#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int marks,age;

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<marks<<endl;
        cout<<endl;
    }
};

int main(){
    student s1;

    s1.name="st1";
    s1.age=12;
    s1.marks=60;
    s1.display();

    student s2;

    s2.name="st2";
    s2.age=18;
    s2.marks=70;
    s2.display();
    

    student s3;

    s3.name="st3";
    s3.age=16;
    s3.marks=80;
    s3.display();


}