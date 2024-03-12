#include<iostream>

using namespace std;
void evenodd(int no)
{
    if(no%2 == 0)
        cout<<"No is even"<<endl;
    else
        cout<<"No is odd"<<endl;
}
void posneg(int no)
{
    if(no== 0)
    {
        cout<<"no is equal to zero"<<endl;
    }
    else if(no >0)
    {
        cout<<"no is postive"<<endl;
    }
    else
    {
        cout<<"no is negetive"<<endl;
    }
}
void prime(int no)
{
    int pr=0;
    for(int i =2;i<no;i++)
    {
        if(no%i==0)
            pr = pr+1;
    }
    if(pr!=0)
        cout<<"It is not prime"<<endl;
    else
        cout<<"It is prime"<<endl;
}
void palindrome(int no)
{
    int temp,rev=0;
    temp = no;
    while(temp !=0)
    {
        rev = (rev*10) +temp%10;
        temp/=10;
    }
    if(rev == no)
        cout<<"palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;
}
void armstrong(int no)
{
    int temp = no;
    int sum=0,d;
    while(temp != 0 )
    {
        d = temp%10;
        sum = sum + (d*d*d);
        temp/=10;
    }
    if(sum == no)
        cout<<"armstrong"<<endl;
    else
        cout<<"not armstrong"<<endl;
}
int main()
{
    int ch,no;
    do{
        cout<<"1.If no is even or odd"<<endl;
        cout<<"2.If no is positive,negative or zero"<<endl;
        cout<<"3.If no is prime or not"<<endl;
        cout<<"4.If no is palindrome or not"<<endl;
        cout<<"5.If no is armstrong or not"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter no : ";
            cin>>no;
            evenodd(no);
            break;
        case 2:
            cout<<"enter no : ";
            cin>>no;
            posneg(no);
            break;
        case 3:
            cout<<"enter no : ";
            cin>>no;
            prime(no);
            break;
        case 4:
            cout<<"enter no : ";
            cin>>no;
            palindrome(no);
            break;
        case 5:
            cout<<"enter no : ";
            cin>>no;
            armstrong(no);
            break;

        }
    }while(ch!=0);
}
