#include<bits/stdc++.h>
using namespace std;

class customer{
    private:
        string name;
        int *balance;


        public:
                customer(){
                    name="prashanth";
                    balance=new int;
                    *balance=200;
                    cout<<"constructor called\n"<<this->name<<"\n"<<*this->balance<<"\n"<<endl;
                }
                customer(string name){
                    this->name=name;
                    cout<<"const name "<<name<<endl;
                }
                ~customer(){
                    
                    cout<<"destructor called "<<name<<endl;
                }
                
};

int main(){
    customer c1;
    customer c2("2"),c3("3"),c4("4");
}