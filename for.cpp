#include<bits/stdc++.h>

using namespace std;

int main(){
    int num[5];
    
    for (int i=0;i < 5;i++){
        cin >> num[i];
    }
    for (int i=0;i<5;i++){
        if (num[i]%2==0){
            cout << num[i]<<" even"<< " ";
            if (num[i]%5==0){
                cout <<"divisible by 5 "<< endl;
            }
            cout << endl;
        }
        else{
            cout <<num[i]<< " odd"<< " ";
            if (num[i]%5==0){
                cout <<"divisible by 5 "<< endl;
            }
            cout << endl;
        }
    }
    return 0;
}