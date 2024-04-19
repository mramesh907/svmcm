#include<iostream>
using namespace std;
class student
{
    private:
        int roll,id,reg;
        char name[20];
    public:
     void readinfo()
     {
        cout<<"\nEnter your name:";
        fgets(name,20,stdin);
        cout<<"\n Enter your roll:";
        cin>>roll;
        cout<<"\n Enter your id:";
        cin>>id;
        cout<<"\n Enter your reg no.:";
        cin>>reg;
     }
     void display()
     {
        cout<<"\nStudent info are:"<<endl;
        cout<<"Name:"<<name<<"\nRoll:"<<roll<<"\nId:"<<id<<"\nReg:"<<reg<<endl;
     }
};
class sem1:public student
{
    protected:
    float sub1,sub2,sub3,total,avg;
    public:
        void marks()
        {
            cout<<"\nInput Marks for 1st sem:"<<endl;
            cin>>sub1>>sub2>>sub3;
        }
        void display1()
        {
            total=sub1+sub2+sub3;
            avg=total/3.0;
            cout<<"\n 1st sem Marks obtained="<<total<<endl;
            cout<<"\n 1st sem Average="<<avg<<endl;
        }
};
class sem2:public sem1
{
    int sub4,sub5,sub6;
    float total2,avg2,totalavg;
    public:
    void marks2()
        {
            cout<<"\nInput Marks for 2nd Sem:"<<endl;
            cin>>sub4>>sub5>>sub6;
        }
        void display2()
        {
            total2=sub4+sub5+sub6;
            avg2=total2/3.0;
            cout<<"\n 2nd sem Marks obtained="<<total2<<endl;
            cout<<"\n 2nd sem Average="<<avg2;
            totalavg=avg+avg2;
            cout<<"\n Total 1st sem and 2nd sem avg="<<totalavg<<endl;
        }
     
};
class scholarship
{
    protected:
        char sc_name[20];
         float sc_amount;
    public:
        void sc_read()
        {
            cout<<"\n Enter scholarship name and amount:"<<endl;
            cin>>sc_name>>sc_amount;
        }
        void sc_show()
        {
            cout<<"\n Scholarship Awarded :"<<sc_name<<endl;
            cout<<"\n Reward Received Amount:"<<sc_amount<<endl;
        }
};
class allinfo:public sem2 ,public scholarship
{
    public:
    void all_input()
    {
        readinfo();
        marks();
        marks2();
        sc_read();
    }
        void all_display()
        {
            display();
            display1();
            display2();
            sc_show();
        }
};
int main()
{
    allinfo obj;
    obj.all_input();
    obj.all_display();
    return 0;
}
