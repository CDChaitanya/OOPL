#include<iostream>
using namespace std;
class personal
{
    string name;
    int age;
    public:
    personal()
    {
        name="XXXXX";
        age=0;
        cout<<"PERSONAL CONSTRUCTOR"<<endl;
    }
    void getdata()
    {
        cout<<"ENTER THE NAME "<<endl;
        cin>>name;
        cout<<"ENTER THE AGE "<<endl;
        cin>>age;
    }
    void putdata()
    {
        cout<<"NAME IS ====> "<<name<<endl;
        cout<<"AGE IS =====> "<<age<<endl;
    }
    ~personal()
    {
        cout<<"PERSONAL DESTRUCTOR"<<endl;
    }
};
class professional
{
    string pos;
    float salary;
    public:
    professional()
    {
        pos="XXXX";
        salary=0;
        cout<<"PROFESSSIONAL CONSTRUCTOR"<<endl;
    }
    void getdata()
    {
        cout<<"ENTER POSTION "<<endl;
        cin>>pos;
        cout<<"ENTER SALARY "<<endl;
        cin>>salary;
    }
    void putdata()
    {
        cout<<"POSTION IS ===> "<<pos<<endl;
        cout<<"SALARY IS ====> "<<salary<<endl;
    }
    ~professional()
    {
        cout<<"PROFESSIONAL DESTRUCTOR"<<endl;
    }
};
class academic
{
    string sub;
    int marks;
    public:
    academic()
    {
        sub="XXXX";
        marks=0;
        cout<<"ACADEMIC CONSTRUCTOR "<<endl;
    }
    void getdata()
    {
        cout<<"ENTER THE SUBJECT"<<endl;
        cin>>sub;
        cout<<"ENTER THE MARKS"<<endl;
        cin>>marks;
    }
    void putdata()
    {
        cout<<"SUBJECT IS ====>"<<sub<<endl;
        cout<<"MARKS ARE =====>"<<marks<<endl;
    }
    ~academic()
    {
        cout<<"ACADEMIC DESTRUCTOR"<<endl;
    }
};
class emp:public personal, public professional ,public academic
{
    public:
    emp()
    {
        cout<<"EMPLOYEE CONSTRUCTOR IS CREATED "<<endl;
    }
    void getdata()
    {
        personal::getdata();
        professional::getdata();
        academic::getdata();
    }
    void putdata()
    {
        personal::putdata();
        professional::putdata();
        academic::putdata();        
    }
    ~emp()
    {
        cout<<"EMPLOYEE DESTRUCTOR IS CREATED "<<endl;
    }
};
int main()
{
    emp e;
    e.getdata();
    e.putdata();
    return 0;
}