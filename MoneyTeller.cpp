#include <bits/stdc++.h>
using namespace std;

string created_id,
    created_password,
    login_id,
    login_password;
int user_choice;    
double account_balance,
    money;
void menu_2(double account_balance)
{
    cout<<"what would u like to do with ur account: "<<endl;
    cout<<"1-withdraw money\t\t2-deposit money\n3-rquire balance\t\t4-quit";
    cin>>user_choice;
    switch (user_choice)
    {
    case 1:
        cout<<"how much money will u be withdrawing: ";
        cin>>money;
        if (money > account_balance)
        {
            cout<<"u can't withdraw that much money cause u dont have enough balance.";
            break;
        }
        account_balance -= money;
        cout<<"ur new balance = "<<account_balance<<" $"<<endl;
        break;
    case 2:
        cout<<"how much money will u be deposting: ";
        cin>>money;
        account_balance += money;
        cout<<"ur new balance = "<<account_balance<<" $"<<endl;
        break;
    case 3:
        cout<<"the balance in ur account = "<<account_balance<<" $"<<endl;
        break;
    case 4:
        cout<<"u quitted the program, thanks for using our automatic teller machine program."<<endl;
        break;        
    default:
        cout<<"input out of range."<<endl;
        break;
    }
}
void menu_1 ()
{
    start:
    cout<<"this is an automatic teller machine program.\n";
    cout<<"what would u like to do:\n1-create an account\n2-login\n3-quit "<<endl;
    cin>>user_choice;
    switch (user_choice)
    {
    case 1:
        cout<<"please enter ur national id (must include 14 digits only): ";
        cin>>created_id;
        if (created_id.size()<14 || created_id.size()>14)
        {
            cout<<"input didnt match the requirements."<<endl;
            break;
        }
        cout<<"please enter a password to your account (min 8 digits & 1st char is upper case.): ";
        cin>>created_password;
        created_password.at(0)=char (toupper(created_password.at(0)));
        if (created_password.size()<8)
        {
            cout<<"input didnt match the requirements."<<endl;
            break;
        }
        cout<<"please, enter the money amount in ur account: ";
        cin>>account_balance;
        goto start;
        if (account_balance < 0)
        {
            cout<<"ur balance cant be negative,try again.";
            break;
        }
        break;
    case 2:
        cout<<"enter the national id to ur existing account: ";
        cin>>login_id;
        if (login_id != created_id)
        {
            cout<<"account doesnot exist."<<endl;
            break;
        }
        cout<<"please enter the password for ur account: ";
        cin>>login_password;
        if (login_password != created_password)
        {
            cout<<"wrong password, try again.";
            break;
        }
        menu_2(account_balance);
    case 3:
        cout<<"you quitted the program.";
        break;    
    default:
        cout<<"ur input is out of range.";
        break;
    }    
}    
int main()
{
    menu_1();
}