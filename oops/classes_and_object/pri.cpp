#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        string name,grade;
        int usn,age;

        public:
        void setname(string n){
            name=n;
        }
        void setgrade(string g){
            grade=g;
        }
        void setusn(int u){
            usn=u;
        }
        void setage(int a){
            age=a;
        }

        string getname(){
            return name;
            
        }

        int getage(int pin){
            if (pin==25){
                return age;
            }
            return 0;
        }


};

int main(){

    student s1;
    s1.setname("prash");
    s1.setgrade("C");
    s1.setusn(34);
    s1.setage(20);

    cout<<s1.getname();
    cout<<s1.getage(250);

}