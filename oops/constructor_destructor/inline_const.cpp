#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        string name;
        int marks,age;

        public:             //inline constructor
            inline student(string a,int b):name(a),marks(b){

            }

            student(string name,int marks,int age){
                this->name=name;
                this->marks=marks;
                this->age=age;
            }

            student (student &c){          //copy constructor 
                name=c.name;               // it will be auto created actually
                age=c.age;
                marks=c.marks;
            }

            void dispaly(){
                cout<<name<<endl;
                cout<<marks<<endl;
                cout<<age<<endl;
            }


};

int main(){
    student s1("prashi",25);
    student s2("girish",25,56);
    s1.dispaly();
    s2.dispaly();
    student s3(s2);
    s3.dispaly();

}