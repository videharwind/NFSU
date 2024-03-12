#include<iostream>
#include<iomanip>
using namespace std;
int i,no,totalrecord=0;
int num,found=0;
long salary;
string name;
class emp{
    public:
        int empno;
        string ename;
        long salary;
}emp[100];
void addrecord()
{
    cout<<"enter no of records to be added :";
    cin>>no;
    for(i=totalrecord;i<no+totalrecord;i++)
    {
        cout<<"Enter Employee No : ";
        cin>>emp[i].empno;
        cout<<"Enter Employee Name : ";
        cin>>emp[i].ename;
        cout<<"Enter Employee Salary : ";
        cin>>emp[i].salary;
    }
    totalrecord+=no;
}
void display()
{
    cout<<left<<setw(12)<<"Employee no"<<setw(16)<<"Employee name"<<right<<setw(9)<<"salary"<<endl;
    for(i=0;i<totalrecord;i++)
    {
        cout<<left<<setw(12)<<emp[i].empno<<setw(16)<<emp[i].ename<<right<<setw(9)<<emp[i].salary<<endl;
    }
}
void srch(int num)
{

    cout<<left<<setw(12)<<"Employee no"<<setw(16)<<"Employee name"<<right<<setw(9)<<"salary"<<endl;
    for(i=0;i<totalrecord;i++)
    {
        if(emp[i].empno == num)
        {
            cout<<left<<setw(12)<<emp[i].empno<<setw(16)<<emp[i].ename<<right<<setw(9)<<emp[i].salary<<endl;
        }
    }
}

void srch(string name)
{

    cout<<left<<setw(12)<<"Employee no"<<setw(16)<<"Employee name"<<right<<setw(9)<<"salary"<<endl;
    for(i=0;i<totalrecord;i++)
    {
        if(emp[i].ename == name)
        {
            cout<<left<<setw(12)<<emp[i].empno<<setw(16)<<emp[i].ename<<right<<setw(9)<<emp[i].salary<<endl;
        }
    }
}

void srch(long salary)
{

    cout<<left<<setw(12)<<"Employee no"<<setw(16)<<"Employee name"<<right<<setw(9)<<"salary"<<endl;
    for(i=0;i<totalrecord;i++)
    {
        if(emp[i].salary == salary)
        {
            cout<<left<<setw(12)<<emp[i].empno<<setw(16)<<emp[i].ename<<right<<setw(9)<<emp[i].salary<<endl;
        }
    }
}
void update(int num)
{
    for(i=0;i<no+totalrecord;i++)
    {
        if(emp[i].empno == num)
        {
            cout<<"Enter Employee Name : ";
            cin>>emp[i].ename;
            cout<<"Enter Employee Salary : ";
            cin>>emp[i].salary;
        }
    }
}
void del(int num)
{
    int temp = 0;
    for(i=0;i<totalrecord;i++)
    {
        if(emp[i].empno == num)
        {
            temp = 1;
            found = 1;
        }
        emp[i] = emp [i+temp];
    }
    if(found)
        totalrecord = totalrecord -1;
}
void del(string name)
{
    int temp = 0;
    for(i=0;i<totalrecord;i++)
    {
        if(emp[i].ename == name)
        {
            temp = 1;
            found = 1;
        }
        emp[i] = emp [i+temp];
    }
    if(found)
        totalrecord = totalrecord -1;
}
int main()
{
    int ch;
    do{
        cout<<"1.Add record"<<endl;
        cout<<"2.Display record"<<endl;
        cout<<"3.Search by Emp no"<<endl;
        cout<<"4.Search by Emp name"<<endl;
        cout<<"5.Search by Emp salary"<<endl;
        cout<<"6.Update by Emp no"<<endl;
        cout<<"7.Delete by Emp no"<<endl;
        cout<<"8.Delete by Emp name"<<endl;
        cout<<"0. Exit "<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                addrecord();
                break;
            }
        case 2:
            {
                display();
                break;

            }
        case 3:
            {
                cout<<"Enter Emp no : "<<endl;
                cin>>num;
                srch(num);
                break;

            }
        case 4:
            {
                cout<<"Enter Emp name : "<<endl;
                cin>>name;
                srch(name);
                break;

            }
        case 5:
            {
                cout<<"Enter Emp salary : "<<endl;
                cin>>salary;
                srch(salary);
                break;
            }
        case 6:
            {
                cout<<"Enter Emp No : "<<endl;
                cin>>num;
                update(num);
                break;
            }
        case 7:
            {
                cout<<"Enter Emp No : "<<endl;
                cin>>num;
                del(num);
                break;
            }
        case 8:
            {
                cout<<"Enter Emp name :"<<endl;
                cin>>name;
                del(name);
            }
        }
    }while(ch!=0);
}
