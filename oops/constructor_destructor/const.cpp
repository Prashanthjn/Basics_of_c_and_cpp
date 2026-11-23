#include<bits/stdc++.h>
using namespace std;

class customer{                  //constructor will be automatically when object is created               
    public:                      //has same name as class 
        string name;             //no return type
        int acc_no,amt;

        //default constructor
        customer(){        
                        
            cout<<"constructer initialised"<<endl;
        }

        //parameterized constructor
        customer(string name,int acc_no,int amt){
            this->name=name;
            this->acc_no=acc_no;
            (*this).amt=amt;

        }

        

        customer(string x,int y){       //constructor with same name & different number of parameters constructor overloading
            name=x;
            acc_no=y;
            amt=59000;
        }

        void display(){
            cout<<name<<endl;
            cout<<acc_no<<endl;
            cout<<amt<<endl;
        }

};

int main(){
    customer c1;
    customer c2("Prashi",87321,45000);
    customer c3("kimba",928829);
    c1.display();
    c2.display();
    c3.display();
}