#include<iostream>
#include<iomanip>

using namespace std;

namespace space{
    gap()
    {
        for(int col=1;col<=5;col++)
        {
            cout<<" ";
        }
    }
}
int main()
{
    int row,col;
    for(row =1; row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            if((col==1 && row >=1 && row <= 3)||(col==5 && row >=1 && row <= 3) || (row==4 && (col ==2 || col ==4)) || (row==5 && col ==3) )
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        space::gap();
        for(col=1;col<=5;col++)
        {
            if(col==3 || row ==1|| row ==5)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        space::gap();
        for(col=1;col<=5;col++)
        {
            if(col==2 || row ==1|| row ==5|| col==5)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        space::gap();
        for(col=1;col<=5;col++)
        {
            if(col==1 || row ==1|| row ==3|| row==5)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        space::gap();
        for(col=1;col<=5;col++)
        {
            if(col==1 || row ==3|| col==5)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }

        cout<<endl;
    }

    return 0;
}

