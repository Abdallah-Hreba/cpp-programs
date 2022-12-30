#include <bits\stdc++.h>
using namespace std;
int main()
{
    char PR = 'x';
    do
    {
        int birth_year,
        birth_month,
        birth_day,
        birth_date,
        current_year,
        current_month,
        current_day,
        current_date;
        cout<<"this is an age calculator program\n, please enter your birthdate in that YY MM DD: "<<endl;
        cin>>birth_year>>birth_month>>birth_day;
        if (birth_year < 0 || birth_month < 0 || birth_day < 0)
        {
            cout<<"the input u entered is invalid,try again.";
            break;
        }
        cout<<"please,enter the current day in the same order YY MM DD:"<<endl;
        cin>>current_year>>current_month>>current_day;
        if (current_year < 0 || current_month < 0 || current_day < 0)
        {
            cout<<"the input u entered is invalid,try again.";
            break;
        }
        if (current_year < birth_year)
        {
            cout<<"the entered birth year is greater than current year which is not logical."<<endl;
            break;
        }
        birth_date = birth_day - 32075 + 1461 * (birth_year + 4800 + (birth_month - 14) / 12) / 4 + 367 *
		(birth_month - 2 - (birth_month - 14) / 12 * 12) * 2 / 12 - 3 * ((birth_year + 4900 + (birth_month - 14) / 12) / 100) / 4;

        birth_date = 365*birth_year + (birth_year/4) - (birth_year/100) + (birth_year/400)+ ((153*birth_month+2)/5)+ birth_day;

        current_date = current_day - 32075 + 1461 * (current_year + 4800 + (current_month - 14) / 12) / 4 + 367 *
		(current_month - 2 - (current_month - 14) / 12 * 12) * 2 / 12 - 3 * ((current_year + 4900 + (current_month - 14) / 12) / 100) / 4;

        current_date = 365*current_year + (current_year/4) - (current_year/100) + (current_year/400)+ ((153*current_month+2)/5)+ current_day;

        int age,
        age_years,
        age_months,
        age_days;
        age = current_date - birth_date;
        age_years = age/365.25;
        age_months = (age - age_years*365.25)/30.416;
        age_days = age - age_years *365.25 - 30.416 * age_months;
        cout<<"your age is "<<age_years<<" years, "<<age_months<<" months, "<<age_days<<"days.";
    } while (PR == 'Y');
}