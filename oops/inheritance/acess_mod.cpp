#include<bits/stdc++.h>
using namespace std;

class Human{        //all the 3 can be accessed within the class
    
    private:        //only within class
    int b;

    protected:   
    int c;
                        //pri>pro>pub
    public:
    int a;

    void print(){
        a=200;
        b=300;
        c=400;
    }

};

int main(){
    Human h1;
    h1.a=20;
    // h1.b=20;
    // h1.c=20;
    h1.print();

}