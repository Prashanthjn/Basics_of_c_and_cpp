#include<bits/stdc++.h>
using namespace std;

void num1(int x){
    x+=5;
}

void num2(int &y){      //original value will be changed 
    y+=5;
}

int main(){
    int a=10,b=10;

    num1(a);
    num2(b);
    cout << a << endl;
    cout << b << endl;
}