#include<iostream>

using namespace std;

void leftall(int N,char c){
    for(int i = 0;i<N;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
void rightall(int N,char c){
   for(int i = 0;i<N;i++)
    {
        for(int j =10;j>=i;j--)
        {
            cout<<" ";
        }
        for(int j = 0;j<=i;j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
void pyramid(int N,char c){
   for(int i = 0;i<N;i++)
    {
        for(int j =10;j>=i;j--)
        {
            cout<<" ";
        }
        for(int j = 0;j<=i;j++)
        {
            cout<<" "<<c;
        }
        cout<<endl;
    }
}
void mirleftall(int N,char c){
    for(int i = 0;i<N;i++)
    {
        for(int j = N;j>i;j--)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
void mirrightall(int N,char c){
   for(int i = N;i>=0;i--)
    {
        for(int j =i;j<i;j++)
        {
            cout<<" ";
        }
        for(int j = 0;j<i;j++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
void mirpyramid(int N,char c){
   for(int i = 0;i<N;i++)
    {
        for(int j =0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j = N;j>i;j--)
        {
            cout<<" "<<c;
        }
        cout<<endl;
    }
}
int main()
{
    int ch,N;
    char c;
    do{
        cout<<"1.Left aligned triangle"<<endl;
        cout<<"2.Right aligned triangle"<<endl;
        cout<<"3.Pyramid"<<endl;
        cout<<"4.Mirrored left aligned triangle"<<endl;
        cout<<"5.Mirrored right aligned triangle"<<endl;
        cout<<"6.mirrored pyramid"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter N : ";
                cin>>N;
                cout<<"Enter the char : ";
                cin>>c;
                leftall(N,c);
                break;
            case 2:
                cout<<"Enter N : ";
                cin>>N;
                cout<<"Enter the char : ";
                cin>>c;
                rightall(N,c);
                break;
            case 3:
                cout<<"Enter N : ";
                cin>>N;
                cout<<"Enter the char : ";
                cin>>c;
                pyramid(N,c);
                break;
            case 4:
                cout<<"Enter N : ";
                cin>>N;
                cout<<"Enter the char : ";
                cin>>c;
                mirleftall(N,c);
                break;
            case 5:
                cout<<"Enter N : ";
                cin>>N;
                cout<<"Enter the char : ";
                cin>>c;
                mirrightall(N,c);
                break;
            case 6:
                cout<<"Enter N : ";
                cin>>N;
                cout<<"Enter the char : ";
                cin>>c;
                mirpyramid(N,c);
                break;

        }

    }while(ch!=0);

}
