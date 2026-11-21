#include<bits/stdc++.h>

using namespace std;

int main(){
    int age;
    cout << "enter age:" << endl;
    cin >> age;
    if (age < 18) {
        cout << "child";
    }
    else if (age > 18  and age <100) {
        cout<< "30's" << endl;
    }
    else{
        cout << "not eligible";
    }
    return 0;
}