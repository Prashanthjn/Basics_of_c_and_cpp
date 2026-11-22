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
        cout<<get_model();
        cout<<get_year()<<endl;
        cout<<get_brand()<<endl;
    }
};

int main()
{
    car c1;
    c1.set_brand("toyota");
    c1.set_model("innova");
    c1.set_year(2022);

    car c2;
    c2.set_brand("bmw");
    c2.set_model("x5");
    c2.set_year(2024);

    c1.displayDetails();
    c2.displayDetails();
}