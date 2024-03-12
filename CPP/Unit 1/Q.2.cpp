#include<iostream>
#include<iomanip>
using namespace std;
string grade(int total);
class marks
{
    public:
        string sub;
        int theory,internal;
        int total;
        string grd;
}s[6];
void print()
{
    cout<<"________________________________________________"<<endl;
}
int main()
{
    string name,mother,father,dob,school;
    int roll;
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter Roll No.: ";
    cin >> roll;
    cout << "Enter Mother's name: ";
    cin >> mother;
    cout << "Enter Father's name: ";
    cin >> father;
    cout << "Enter Date of Birth (DD/MM/YYYY): ";
    cin >> dob;
    cout << "Enter name of School: ";
    cin >> school;
    for(int i =0;i<6;i++)
    {
        cout<<"Enter subject "<<i+1<<" : ";
        cin>>s[i].sub;
        cout<<"Enter theory marks : ";
        cin>>s[i].theory;
        cout<<"Enter internal marks : ";
        cin>>s[i].internal;
        s[i].total = s[i].theory + s[i].internal;
        s[i].grd = grade(s[i].total);
    }
    system("cls");
    cout<<right<<setw(60)<< "CENTRAL BOARD OF SECONDARY EDUCATION" << endl;
    cout<<right<<setw(50)<< "MARKS STATEMENT" << endl;
    cout<<right<<setw(64)<< "SENIOR SCHOOL CERTIFICATE EXAMINATION ,2022" << endl;
    cout <<setw(20)<< "Name of Student : "<<right<<setw(12) << name << endl;
    cout <<setw(20)<< "Roll No : " <<right<<setw(12)<< roll << endl;
    cout <<setw(20)<< "Mother's Name : " <<right<<setw(12)<< mother << endl;
    cout <<setw(20)<< "Father's Name : "<<right<<setw(12) << father << endl;
    cout <<setw(20)<< "Date of Birth : "<<right<<setw(12) << dob << endl;
    cout <<setw(20)<< "School : "<<right<<setw(12) << school << endl;
    print();
    cout <<left << setw(12) << "SUBJECT" <<right << setw(9) << "THEORY"<< setw(9) << "INTERNAL"<< setw(9) <<" TOTAL"<< setw(9)<<"GRADE"<<endl;
    print();
    for(int i =0 ;i<6;i++)
    {
        cout <<left << setw(12) << s[i].sub <<right << setw(9) << s[i].theory<< setw(9) << s[i].internal<< setw(9) << s[i].total<< setw(9)<<s[i].grd<<endl; //<< Grade(m1 + n1) << endl;
    }
    print();
    cout<<right<<setw(30)<<"made by videh arwind"<<endl;






}
string grade(int total) {
    if(total >= 91){
        return "A1";
    }
    else if(total >= 81){
        return "A2";
    }
    else if(total >= 71){
        return "B1";
    }
    else if(total >= 61){
        return "B2";
    }
    else if(total >= 51){
        return "C1";
    }
    else if(total >= 41){
        return "C2";
    }
    else if(total >= 33){
        return "D";
    }
    else if(total >= 21){
        return "E1";
    }
    else {
        return "E2";
    }
}
