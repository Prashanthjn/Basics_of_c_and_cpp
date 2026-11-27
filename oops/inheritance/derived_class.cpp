#include<bits/stdc++.h>
using namespace std;

class human{
    protected:
        string name;
        int age,height;
};

class student:protected human{
    private:
    int usn,fee;

    public:

    void fun(string n,int a,int b){
        name=n;
        age=a;
        height=b;
    }
    void display(int fee=30,int usn=32){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<height<<" ";
        cout<< fee<< " ";
        cout<<usn<<" ";
    }
};

int main(){
    student s1;
    s1.fun("pra",22,35);
    s1.display();
}

