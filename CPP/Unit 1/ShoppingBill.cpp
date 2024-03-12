#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float p[4];
    int q[4];
    for(int i=0;i<4;i++)
    {
        printf("enter price of item no %d : ",i+1);
        cin>>p[i];
        printf("enter quantity of item no %d : ",i+1);
        cin>>q[i];
    }
    float sum=0;
    for(int i=0;i<4;i++)
    {
        sum = sum + p[i]*q[i];
    }
    system("cls");
    cout<<fixed<<setprecision(2);
    cout<<setw(35)<<"XYZ Mart Pvt Ltd"<<endl;
    cout<<setw(38)<<"3\\top, PQR Shopping Mall"<<endl;
    cout<<setw(32)<<"GANDHINAGAR"<<endl;
    cout<<"====================================================="<<endl;
    cout<<"BillNo:101"<<setw(43)<<"05-FEB-2024"<<endl;
    cout<<"====================================================="<<endl;
    cout<<left<<setw(6)<<"No"<<setw(20)<<"Item name"<<right<<setw(9)<<"Unit price"<<setw(5)<<"Qty"<<setw(10)<<"Total"<<endl;
    cout<<"====================================================="<<endl;
    cout<<left<<setw(6)<<"1."<<setw(20)<<"Computer"<<right<<setw(9)<<p[0]<<setw(5)<<q[0]<<setw(13)<<p[0]*q[0]<<endl;
    cout<<left<<setw(6)<<"2."<<setw(20)<<"Mobile"<<right<<setw(9)<<p[1]<<setw(5)<<q[1]<<setw(13)<<p[1]*q[1]<<endl;
    cout<<left<<setw(6)<<"3."<<setw(20)<<"Calculator"<<right<<setw(9)<<p[2]<<setw(5)<<q[2]<<setw(13)<<p[2]*q[2]<<endl;
    cout<<left<<setw(6)<<"4."<<setw(20)<<"Pencil"<<right<<setw(9)<<p[3]<<setw(5)<<q[3]<<setw(13)<<p[3]*q[3]<<endl;
    cout<<"====================================================="<<endl;
    cout<<setw(43)<<"Total Amount = "<<right<<setw(10)<<sum<<endl;
    cout<<setw(43)<<"Discount = "<<right<<setw(10)<<sum*0.1<<endl;
    cout<<"====================================================="<<endl;
    cout<<setw(43)<<"Amount to be Paid = "<<right<<setw(10)<<sum*0.9<<endl;
    cout<<"====================================================="<<endl;
    cout<<right<<setw(38)<<"Made by Aryan Sakaria";





}
