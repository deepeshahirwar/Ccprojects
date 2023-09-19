#include<iostream>
using namespace std; 
  class ATM {
    private: 
    int balance; 
    public: 
    ATM(int bal){
        balance = bal;
    } 
    int getBalance(){
        return balance;
    } 
    int withdraw(int amount){
        if(amount > balance){
            return false;
        } 
        balance -= amount; 
        return true;
    } 
    void deposit(int amount){
        balance += amount;
    }
  };  
  int main(){
    ATM atm(10000);  
    //for manue  
    int choice,amount,success; 
    char op;
   
         //cout<<"Your balance is : "<<atm.getBalance(); 
        
        do{  
        cout<<"1.View Balance\n"; 
        cout<<"2.Case Withdraw\n";
        cout<<"3.Case Deposit\n";  
        cout<<"4.Exit\n";
        cout<<"Enter Your Choice : "; 
        cin>>choice; 
            
             switch(choice){
            case 1: 
            cout<<"Your Balance is :"<<atm.getBalance();  
            break; 

            case 2:
            cout<<"Enter the amount to withdraw :"; 
            cin>>amount;  
            success = atm.withdraw(amount); 
            if(success){
                cout<<"withdraw successfuly...\n";
            } 
            else{
              cout<<"invalid balance";  
            }  
             cout<<"Your Available Balance :"<<atm.getBalance();  
             break;
             case 3: 

             cout<<"Enter the Amount to Deposit :"; 
             cin>>amount; 
             atm.deposit(amount); 
             cout<<"Deposit Successfully...\n";   
             break; 

             case 4:
             cout<<"Thanks for using ATM\n"; 
             break;  
             default: 
             cout<<"Invalid Choice\n";
              
        }  
        cout<<"\n Do you want to try another transaction [yes/no]:\n"; 
        cout<<"for YES type y/Y and\n for NO type another key:";
        cin>>op;
        }  
        while(op =='y' || op== 'Y');
   

  }

  