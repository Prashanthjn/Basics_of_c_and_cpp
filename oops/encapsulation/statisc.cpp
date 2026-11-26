//wrappping data and info in a single unit with controlled access
 #include<bits/stdc++.h>
 using namespace std;


 class bank{
    
        int balance,acc_no,amt;
        string name;
        
        public:
        bank(string name,int balance,int acc_no){
            this->name=name;
            this->balance=balance;
            this->acc_no=acc_no;
        }

        void withdraw(int amt){
            if (amt>balance || amt<1){
                cout<<"insufficient balance!\n";
            }
            else if (amt>0){
                cout<<amt<<" "<<"withdrawn\n";
                balance-=amt;
            }
            else{
                cout<<"invalid amount\n";
            }
        }
        void deposit(int amt){
            if(amt<0){
                cout<<"enter amt greater than 0\n";
            }
            else{
                cout<<amt<<" "<<"deposited\n";
                balance+=amt;
            }
        }
        void dispaly(){
            cout<<"account holder: "<<name<<endl;
            cout<<"available amt is :"<<balance<<endl;
        }
 };

 int main(){
    bank b1("prah",3000,334233);
    b1.dispaly();
    //b1.balance+=-20;
    b1.deposit(20);
    b1.withdraw(200);
    b1.dispaly();
 }