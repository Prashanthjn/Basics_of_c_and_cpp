#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        string name;
        int marks;

        public:             //inline constructor
            inline student(string a,int b):name(a),marks(b){

            }

            void dispaly(){
                cout<<name<<endl;
                cout<<marks<<endl;
            }


};

int main(){
    student s1("prashi",25);
    s1.dispaly();

}