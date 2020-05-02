#include<iostream>
using namespace std;
class calculator 
{
    float a,b;
    int c;
    float f;
    public:
    calculator(float a , float b)
    {
        this->a=a;
        this->b=b;
        c=0;
    }
    void add()
    {
        c=a+b;
        cout<<"THE ADDITION IS "<< c<<endl;
    }
    void sub()
    {
        c=a-b;
        cout<<"THE SUBSTRACTION IS "<<c<<endl;
    }
    void mul()
    {
        c=a*b;
        cout<<"THE MULTIPLICATION IS "<<c<<endl;
    }
    void div()
    {
        f=a/b;
        cout<<"THE DIVISION IS "<<f<<endl;
    }
};
int main()
{
    do
    {
    float x,y;
    char ch;
    cout<<"ENTER THE EXPRESSION IN INFIX FORMAT"<<endl;
    cin>>x>>ch>>y;
    calculator c(x,y);
    switch(ch)
    {
        case '+':
        {
            c.add();
            break;
        }
        case '-':
        {
            c.sub();
            break;
        }
        case '*':
        {
            c.mul();
            break;
        }
        case '/':
        {
            c.div();
            break;
        }
        default:
        {
            cout<<"INVALID OPERATOR"<<endl;
        }
    }
    } while (1);     
}