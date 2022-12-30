#include <bits/stdc++.h>
using namespace std;
//a func to find the specific length of our string using pointers
int firstchoice(string s)
{
    int counter = 0, i = 0;
    string *ptr;
    ptr = &s;
    string ss = *ptr;
    while (ss[i])
    {
        counter++;
        i++;
    }
    return counter;
}
//a func to copy the main string to anothe one using pointers
string secondchoice(string s)
{
    string newstr="", *ptr1 ,*ptr2;
    ptr1 = &s;
    ptr2 = &newstr;
    *ptr2 = *ptr1;
    return newstr;
}
//a func to concatenate two strings using pointers
string thirdchoice(string s, string newrd)
{
    string constr,*ptr1 ,*ptr2;
    ptr1 = &s;
    ptr2 = &newrd;
    constr = *ptr1 + *ptr2;
    return constr;
}
//a func to find the reversed string using pointers referring to array of characters(after copying the main string into the array).
void fourthchoice(string s,int len)
{
    string *ptr;
    char rev[len],*ptr2;
    ptr = &s;
    for (int i = 0,j=len-1; i < len,j >= 0; i++,j--)
    {
        rev[i] = s[j];
    }
    ptr2 = rev;
    for (int i = 0; i < len; i++)
    {
        cout<<*(ptr2+i);
    }
    cout<<endl;
}
//a func to count the vowel and consonant characters in you string using pointers referring to char array(after copying the main string into the array).
void fifthchoice(string s,int len)
{
    int vowcounter=0,conscounter=0;
    char *ptr, ss[len];
    for (int i = 0; i < len; i++)
    {
        ss[i] = s[i];
    }
    ptr = ss;
    for (int i = 0; i < len; i++)
    {
        if ( *(ptr+i) == 'a'|| *(ptr+i) == 'e'|| *(ptr+i) == 'i'|| *(ptr+i) == 'o'|| *(ptr+i) == 'u'|| *(ptr+i) == 'y')
        {
            vowcounter++;
        }
        else
        {
            conscounter++;
        }
    }
    cout<<"the number of vowel characters in your string = "<<vowcounter<<endl;
    cout<<"the number of consonants characters in your string = "<<conscounter<<endl;
}
//a func to sort the characters in our string according to the ASCII table using pointers, char array, and char var as mediator to the sorting Algo.
void sixthchoice(string s, int len)
{
    char mediator,sorted[len];
    char *ptr1;
    for (int i = 0; i < len; i++)
    {
        sorted[i]=s[i];
    }
    ptr1 = sorted;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if (*(ptr1+j) > *(ptr1+(j+1)))
            {
                mediator = *(ptr1+j);
                *(ptr1+j) = *(ptr1+(j+1));
                *(ptr1+(j+1)) = mediator;
            }   
        }   
    }
    cout<<"the sorted string = ";
    for (int i = 0; i < len; i++)
    {
        cout<<*(ptr1+i);
    }
    cout<<endl;
}

int main()
{
    //do while loop to keep the program running (at least runs once)
    int user_choice;
    do
    {
        
        string user_string;
        start:
        cout<<"enter the string,(in lowercase please): ";
        //entering the string
        cin>>user_string;
        keeprunning:
        //showing the user the menu of options
        cout<<"1) Find length of string using pointers.\n2) Copy this string to new string using pointers.\n3) Get another string from user and concatenate two strings using pointers.";
        cout<<"\n4) Find reverse of a string using pointers.\n5) Count the total number of vowels and consonants in a string using pointers.\n6) Sort character of a string in a new string using pointer.";
        cout<<"\n7) Enter a new string.\n8) Exit program."<<endl;
        choose:
        //taking the user choice
        cin>>user_choice;
        int string_length = firstchoice(user_string);
        //a condition to make sure that the user is in range.
        if (user_choice > 8 || user_choice < 1)
        {
            cout<<"your choice is out of range, try again please,"<<endl;
            goto choose;
        }
        //conditions to make sure the execute program option the user entered. 
        else if (user_choice == 1)
        {
            cout<<"the string's length = "<<string_length<<endl;
            goto keeprunning;
        }
        else if (user_choice == 2)
        {
            cout<<"the new copied string using pointers = "<<secondchoice(user_string)<<endl;
            goto keeprunning;
        }
        else if (user_choice == 3)
        {
            string newword;
            cout<<"please enter the second string: ";
            cin>>newword;
            cout<<"the new concatenated string =\""<<thirdchoice(user_string,newword)<<"\""<<endl;
            goto keeprunning;
        }
        else if (user_choice == 4)
        {
            cout<<"the reversed string = ";
            fourthchoice(user_string,string_length);
            goto keeprunning;
        }
        else if (user_choice == 5)
        {
            fifthchoice(user_string,string_length);
            goto keeprunning;
        }
        else if (user_choice == 6)
        {
            sixthchoice(user_string,string_length);
            goto keeprunning;
        }
        else if (user_choice == 7)
        {
            //going back to a return point to enter a new string to work on.
            goto start;
        }
        else
        {
            //shutting the program down.
            cout<<"you exited the program.";
            break;
        }
    } while (user_choice =! 8);
}
