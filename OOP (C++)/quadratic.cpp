#include<iostream>
#include<math.h>
using namespace std;
class quadratic
{
    float a,b,c;
    public:
    quadratic()
    {
        a=b=c=0;
    }
    quadratic operator+(quadratic q)
    {
        quadratic t;
        t.a=a+q.a;
        t.b=b+q.b;
        t.c=b+q.c;
        return t;
    }
    float for_x()
    {
        float x;
        cout<<"ENTER A VALUE FOR X"<<endl;
        cin>>x;
        float f;
        f=a*x*x+b*x+c;
        return f;
    }
    void evaluation()
    {
        if(b*b>=4*a*c)
        {
            cout<<"THE ROOTS ARE REAL"<<endl;
            float x=(-b+sqrt(b*b-4*a*c))/(2*a);
            float y=(-b-sqrt(b*b-4*a*c))/(2*a);
            cout<<x<<endl<<y<<endl;
        }
        else
        {
            cout<<"THE ROOTS ARE IMAGINARY"<<endl;
        }
    }
    friend istream &operator>>(istream& in , quadratic& q);
    friend ostream &operator<<(ostream& out , quadratic& q);    
};
    istream &operator>>(istream& in , quadratic& q)
    {
        cout<<"ENTER COEFFICIENT OF QUADRATIC EQATION IN DECENDING ORDER"<<endl;
        cin>>q.a>>q.b>>q.c;
        return in;
    }
    ostream &operator<<(ostream& out , quadratic& q)
    {
        cout<<q.a<<"*x^2+"<<q.b<<"*x+"<<q.c<<endl;
        return out;
    }
int main()
{
    quadratic q,p,r;
    cin>>q>>p;
    cout<<q<<endl<<p<<endl;
    r=q+p;
    cout<<r;
    cout<<q.for_x()<<endl;
    q.evaluation();
    return 0;
}