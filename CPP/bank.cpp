#include <bits/stdc++.h>
using namespace std;
long acc_num_count = 0;

class bank_customer
{
private:
    long balance;
    int pin;

public:
    long acc_num = 0;
    string name;
    long balancea = 0;
    string ename;
    long adhar;
    long mobile;
    int credit();
    int debit();
    void credit_to_party(int amt);
    void create_account()
    {
        acc_num_count++;
        acc_num = acc_num_count;
        cout << "Account number :" << acc_num << endl;
        cout << "Name:";
        cin >> name;
        cout << endl;
        cout << "Email:";
        
        cin >> ename;
        cout << endl;
        cout << "Addhar:";
        
        cin >> adhar;
        cout << endl;
        cout << "Mobile:";
        
        cin >> mobile;
        cout << endl;
        cout << "Account Pin:";
        cin >> pin;
        cout << endl;
        cout << "Sucessfuly created account!";
    }
  

};

int bank_customer :: credit () {
            int amt;
            cout<<"Enter amount:";
            cin>>amt;
            if(amt>0){balancea=balancea+amt;cout<<"Amount deposit Sucessful,New balance "<<balancea;}
            else{cout<<"Invalid amount";}

            return amt;
            
}

int bank_customer :: debit (){
            int amtb;
            int pin_check;
            cout<<"Enter amount:";

            cin>>amtb;
            cout<<"Enter your pin:";
            cin>>pin_check;
            if (pin_check==pin)
            {
                if(balancea>amtb){balancea=balancea-amtb;cout<<"Amount debited Sucessful,New balance "<<balancea;}
            else{cout<<"Insufficient balance!"; return 0;}
            }
            else{
                cout<<"Invalid pin! Try again.";
            }
            return amtb;
            
            
}

void bank_customer :: credit_to_party(int amt){
    if(amt>0){balancea=balancea+amt;}
            else{cout<<"Invalid amount";}

}

int main(void)
{

    int choice = 1;
    cout << "Welcome to the Bank!" << endl;
    bank_customer arr[2];
    for (int i = 0; i < 2; i++)
    {
        arr[i].create_account();
    }
    while (choice!=0){
        int cd;
        cout<<"Enter your bank account number:";
        cin>>cd;
        cout<<"1.Add credit 2.Debit cash 3.Check balance 4.Pay online 5.Back to menu";
        cin>>choice;
        switch(choice){
            case 1:
            arr[cd].credit();
            break;

            case 2:
            arr[cd].debit();
            break;

            case 3:
            
            cout<<"Current balance:"<<arr[cd].balancea;
            break;

            case 4:
            int payee_acno;
            cout<<"Enter accno of payee:";
            cin>>payee_acno;
            
            arr[payee_acno].credit_to_party(arr[cd].debit());
            break;


            case 5:
                    break;
            default:
                    cout<<"Invalid choice. Please try again."<<endl;

        }
        cout<<"Enter 0 to exit";
        cin>>choice;
    }
        
    
    return 0;
}
