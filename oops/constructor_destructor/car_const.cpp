#include<bits/stdc++.h>
using namespace std;

class car{
    private :
        string brand,model;
        int year;

        public:
        car(string brand,string model,int year){
            this->brand=brand;
            this->model=model;
            this->year=year;
        }

        void displayDetails(){
            cout<< brand<<endl;
            cout<< model<<endl;
            cout<< year<<endl;
        }
};

int main(){
    car c1("Toyota", "Innova", 2022);
    car c2("BMW", "X5", 2024);
    car c3("Honda", "City", 2023);

    c1.displayDetails();
    c2.displayDetails();
    c3.displayDetails();
}