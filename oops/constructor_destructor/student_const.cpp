#include<bits/stdc++.h>

using namespace std;

class student{
    private:
        int marks;
        string name;

        public:
            student(){
                name="unknown";
                marks=0;
            }

            student(string name){
                this->name=name;
                marks=0;
            }

            student(string name,int marks){
                this->name=name;
                this->marks=marks;
            }

            void display(){
                cout<<name<<endl;
                cout<<marks<<endl;
            }

};

int main(){
    student s1;
    student s2("Prashanth");
    student s3("Rahul", 85);

    s1.display();
    s2.display();
    s3.display();
}