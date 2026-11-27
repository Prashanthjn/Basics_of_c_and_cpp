#include<bits/stdc++.h>
using namespace std;

class student{                         //parent class
    public:
        string name;
        int roll_num,age;
};

class application: private student{     //child class
    int application_num=20;
       
};
                                        //when we inhwrit the child class follow this rule while inheriting
int main(){                             //private>protected>public
    student s1;                         
    application a1;                 
    s1.name="prashi";
    a1.application_num=20;       //can't access bcz it's private      
}
