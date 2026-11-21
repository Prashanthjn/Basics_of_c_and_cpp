#include<bits/stdc++.h>

using namespace std;

int main(){
    int marks;
    string Grade;
    cout << "enter marks:";
    cin >> marks;
     if (marks < 25){
        Grade ="F";
        cout<< Grade;
     } 
     else if (marks>=25 and marks <=44){
        Grade= "E";
        cout<< Grade;

     }
     else if (marks>=45 and marks <=49){
        Grade= "D";
        cout<< Grade;
     }
     else if (marks>=50 and marks <=59){
        Grade= "C";
        cout<< Grade;
     }
     else if (marks>=60 and marks <=79){
        Grade= "B";
        cout<< Grade;
     }
     else if (marks>=80 and marks <=100){
        Grade= "A";
        cout<< Grade;
     }
     else{
        cout<< "invalid Marks !!";
     }


    return 0;
}