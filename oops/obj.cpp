#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    string brand, model;
    int year;

public:
    void set_brand(string s)
    {
        if (s.size()==0){
            cout<< "invalid name"<<endl;
        }
        brand = s;
    }
    void set_model(string m)
    {
        model = m;
    }
    void set_year(int y)
    {
        year = y;
    }

    string get_brand()
    {
        return brand;
    }

    string get_model()
    {
        return model;
    }

    int get_year(){
        return year;
    }

    void displayDetails()
    {
        cout<<get_brand()<<endl;
        cout<<get_model()<<endl;
        cout<<get_year()<<endl;
    }
};

int main()
{
    car c1;                     //object (instance of a class)
    c1.set_brand("");           //when we assign the value to class it will be object
    c1.set_model("innova");
    c1.set_year(2022);

    car c2;
    c2.set_brand("bmw");
    c2.set_model("x5");
    c2.set_year(2024);

    c1.displayDetails();
    c2.displayDetails();
}