#include<bits/stdc++.h>
using namespace std;

int add(int a,int b,int sum){
    sum=a+b;
    cout<< "the sum of "<<a<< " and "<<b << " is "<<sum<<endl;
    return 0;
}
int main(){
    int a,b,sum=0;
    cin>>a>>b;
    add(a,b,sum);
    cout<< "actual sum is "<<sum;
    return 0;
}