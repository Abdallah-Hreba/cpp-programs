// Omar Ayman Saad Ali  20210261
// Abdullah Mahmoud Amin Ahmed  20211062

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //int array to hold the two elements
    int arr1[2],arr2[2];
    //for loop to let the user enter the elements of the 1st array
    for (int i = 0; i < 2; i++)
    {
        cout<<"input the "<<i+1<<" element of the 1st array:";
        cin>>arr1[i];
    }
    //for loop to let the user enter the elements of the 2nd array
    for (int i = 0; i < 2; i++)
    {
        cout<<"input the "<<i+1<<" element of the 2nd array:";
        cin>>arr2[i];
    }
    //int variable to keep the multiplying of the pointers referring to the array numbers.
    int first_multiplied = *(arr1) * *(arr2), second_multiplied = *(arr1 +1) * *(arr2 +1);
    cout<<"the first elements of the arrays multiplied = "<<first_multiplied<<endl;
    cout<<"the second elements of the arrays multiplied = "<<second_multiplied<<endl;
}