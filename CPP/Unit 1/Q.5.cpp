#include<iomanip>
#include<iostream>
using namespace std;
int x = 20;
int main()
{
    int x,y,choice;
    do{
        cout<<"1.Arithmetic operator \n2.Relational operator \n3.Logical operator \n4.Assignment operator\n5.Increment and Decrement operator\n6.Bitwise Operator \n7.Ternary operator\n8.Scope resolution operator \n9.Insertion and Extraction operator\n0.Exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                system("cls");
                cout<<"Arithmetic Operators"<<endl;
                cout<<"Enter the value of x and y"<<endl;
                cin>>x;
                cin>>y;
                cout<<"x * y ="<<right<<setw(4)<<(x*y)<<endl;
                cout<<"x / y ="<<right<<setw(4)<<(x/y)<<endl;
                cout<<"x + y ="<<right<<setw(4)<<(x+y)<<endl;
                cout<<"x - y ="<<right<<setw(4)<<(x-y)<<endl;
                cout<<"x % y ="<<right<<setw(4)<<(x%y)<<endl;
                break;
            }
        case 2:
            {
                cout<<"Relational Operators"<<endl;
                cout<<"Enter the value of x and y"<<endl;
                cin>>x;
                cin>>y;
                cout<<"x>y ="<<boolalpha<<(x>y)<<endl;
                cout<<"x<y ="<<boolalpha<<(x<y)<<endl;
                cout<<"x>=y ="<<boolalpha<<(x>=y)<<endl;
                cout<<"x<=y ="<<boolalpha<<(x<=y)<<endl;
                cout<<"x==y ="<<boolalpha<<(x==y)<<endl;
                cout<<"x!=y ="<<boolalpha<<(x!=y)<<endl;
                break;
            }
        case 3:
            {
                bool a{},b{};
                cout<<"Logical Operators"<<endl;
                cout<<"Enter the value of x \n0.False \n1.True"<<endl;
                cin>>a;
                cout<<"Enter the value of y \n0.False \n1.True"<<endl;
                cin>>b;
                cout<<"x&&y ="<<(a&&b)<<endl;
                cout<<"x||y ="<<(a||b)<<endl;
                cout<<"!x ="<<(!a)<<endl;
                cout<<"!y ="<<(!b)<<endl;
                break;
            }
        case 4:
            {
                cout<<"Assignment Operator"<<endl;
                cout<<"Enter the value of expression"<<endl;
                cin>>y;

                cout<<"x = y result in x = "<<(x=y)<<endl;
                cout<<"x += y when x is already = "<<x<<" result in x = "<<(x+=y)<<endl;
                cout<<"x -= y when x is already = "<<x<<" result in x = "<<(x-=y)<<endl;
                cout<<"x *= y when x is already = "<<x<<" result in x = "<<(x*=y)<<endl;
                cout<<"x /= y when x is already = "<<x<<" result in x = "<<(x/=y)<<endl;
                cout<<"x %= y when x is already = "<<x<<" result in x = "<<(x%=y)<<endl;
                break;

            }
        case 5:
            {
                cout<<"enter the value of y"<<endl;
                cin>>y;
                #define con y
                cout<<" when x = y++ then x =  "<<(x = con++)<<endl;
                con--;
                cout<<" when x = ++y then x =  "<<(x = ++con)<<endl;
                con--;
                cout<<" when x = y-- then x =  "<<(x = con--)<<endl;
                con++;
                cout<<" when x = --y then x =  "<<(x = --con)<<endl;

            }
        case 6:
            {
                cout<<"Bitwise Operator"<<endl;
                cout<<"Enter the value of x and y"<<endl;
                cin>>x;
                cin>>y;
                cout<<"x & y = "<<(x&y)<<endl;
                cout<<"x | y = "<<(x|y)<<endl;
                cout<<"x ^ y = "<<(x^y)<<endl;
                cout<<"x <<2 = "<<(x<<2)<<endl;
                cout<<"x >>2 = "<<(x>>2)<<endl;
                cout<<"~x    = "<<(~x)<<endl;
            }
            break;
        case 7 :
            {
                cout<<"Ternary Operator"<<endl;
                cout<<"Enter the value of x and y"<<endl;
                cin>>x;
                cin>>y;
                cout<<"(x>y)? 'x is greater':'y is greater' = "<<((x>y)? "x is greater":"y is greater")<<endl;
            }
            break;
        case 8 :
            {
                int x = 10;
                cout<<"Scope Resolution Operator"<<endl;
                cout<<"In this program there are two x, global variable x with value 20 and local variable x with value 10"<<endl;
                cout<<"Using :: result in global variable being displayed or else the local value will be displayed"<<endl;
                cout<<"::x = "<<(::x)<<endl;
                cout<<"x = "<<x<<endl;
            }
            break;
        case 9 :
            {
                cout<<"cout<<\"message to print\" = " <<"message to print"<<endl;
                cout<<"cin>>x; takes the value of x from the user"<<endl;
            }
        }

    }while(choice != 0);
}

