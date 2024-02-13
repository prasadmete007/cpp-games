/******************************************************************************
Number palindrome in CPP/C++
*******************************************************************************/

#include <iostream>

using namespace std;

int palindrome(int num)
{
    int n,digit,rev=0;
    n=num;
    do{
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }while(num!=0);
    
    cout << "reverse of string is: "<< rev<<endl;
    if(n==rev)
        cout<<"number is palindrom\n";
    else
        cout<<"number is not palindrome\n";
    return 0;
}

int main()
{
    int num;
    cout <<"enter number :- ";
    cin>>num;
    palindrome(num);
    
    return 0;
}
