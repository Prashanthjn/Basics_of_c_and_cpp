#include <iostream>

using namespace std;

int main()
{
    int x,y;  //int small range    -2147483648 to 2147483647
    long a ;  //long but long range  -9223372036854775808 to 9223372036854775807
    long long b;
    float c=0.6;
    double d=2222505.9;
    char ch;


    string s1="Prash",s2="prath";
    string str;
    getline(cin,str);  // to take the sentence as one 

    cout << str;
    cout << s1 << endl << s2;

  
    cout << ch;
    cout << "enter x:" ;
    cin >> x;
    cout<< "enter Y:";
    cin >> y;
    cout << "x:" << x << endl << "y:" << y ;
    
    return 0;
}