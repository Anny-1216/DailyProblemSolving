#include<bits/stdc++.h>
using namespace std;
long acc_num=0;
long balancea=0;
long balanceb=0;
void create_account(){
    cout<<"Account number :"<<acc_num+1<<endl;
    cout<<"Name:";string name;cin>>name;cout<<endl;
    cout<<"Email:";string ename;cin>>ename;cout<<endl;
    cout<<"Addhar:";long adhar;cin>>adhar;cout<<endl;
    cout<<"Mobile:";long mobile;cin>>mobile;cout<<endl;
    cout<<"Account Pin:";int pin;cin>>pin;cout<<endl;
    cout<<"Sucessfuly created account!";

}

void account_operations(){
    int choice;
    cout<<"1.Add credit 2.Debit cash 3.Check balance 4.Pay online 5.Back to menu";
    cin>>choice;
    switch(choice){
        case 1:
        int amt;
        cout<<"Enter amount:";
        cin>>amt;
        if(amt>0){balancea=balancea+amt;cout<<"Amount deposit Sucessful,New balance "<<balancea;}
        else{cout<<"Invalid amount";}
        break;

        case 2:
        int amtb;
        cout<<"Enter amount:";
        cin>>amtb;
        if(balancea>amtb){balancea=balancea-amtb;cout<<"Amount debited Sucessful,New balance "<<balancea;}
        else{cout<<"Insufficient balance!";}
        break;

        case 3:
        cout<<"Current balance:"<<balancea;
        break;

        case 4:
        int acno;
        int amtc;
        cout<<"Enter account no:";
        cin>>acno;
        cout<<"Enter amount:";
        cin>>amtc;
        if(balancea>amtc){balancea=balancea-amtc;cout<<"Amount debited Sucessful,New balance "<<balancea;balanceb=balanceb+amtc;}
        else{cout<<"Insufficient balance!";}

        case 5:
                break;
        default:
                cout<<"Invalid choice. Please try again."<<endl;

    }

}

int main(void)
{
    int choice=1;
    cout<<"Welcome to the Bank!"<<endl;
   
    while (choice!=0)
    {
        cout<<"1.Create account 2.Account Operations "<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Create Account Initiated"<<endl;
                create_account();
                break;
            case 2:
                cout<<"Account Operations."<<endl;
                account_operations();
                break;
            
            case 0:
                cout<<"Thank you for using our services. Goodbye!"<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }
    
    return 0;
} 
