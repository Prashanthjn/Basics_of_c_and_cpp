#include<bits/stdc++.h>

using namespace std;

int main(){
    int day;

    cin >> day;
    switch (day)
    {
    case 1:
        /* code */
        cout << "mon";
        break;
    case 2:
        /* code */
        cout << "tue";
        break;
    case 3:
        /* code */
        cout << "wed";
        break;
    case 4:
        /* code */
        cout << "thu";
        break;
    case 5:
        /* code */
        cout << "fri";
        break;
    case 6:
        cout << "sat";
    case 7:
        cout << "sun";
        break;
    default:
        cout << "invalid day";
        break;
    }
}