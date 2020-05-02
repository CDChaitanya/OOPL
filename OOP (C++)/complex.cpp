#include<iostream>
using namespace std;
class complex
{
    float real,img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    friend ostream &operator<<(ostream& out , complex& c);
    friend istream &operator>>(istream& in , complex& c);
    complex operator+ (complex c)
    {
        complex t;
        t.real=real+c.real;
        t.img=img+c.img;
        return t;
    }
    complex operator-(complex c)
    {
        complex t;
        t.real=real-c.real;
        t.img=img-c.img;
        return t;
    }
    complex operator*(complex c)
    {
        complex t;
        t.real=((real * c.real) - (img * c.img));
        t.img=((real * c.img) + (img * c.real));
        return t;
    }
};
     ostream &operator<<(ostream& out , complex& c)
    {
        cout<<c.real<<"+"<<c.img<<"i"<<endl;
        return out;
    }
     istream &operator>>(istream& in , complex& c)
    {
        cout<<"ENTER REAL AND IMAGINARY PART OF COMPLEX NUMBER"<<endl;
        cin>>c.real>>c.img;
        return in;
    }
int main()
{
    int ch;
    complex a,b,d;
    cin>>a;
    cin>>b;
    do
    {
     cout<<"1.ADDITION "<<endl;
     cout<<"2.SUBSTRACTION "<<endl;
     cout<<"3.MULTIPLICATION "<<endl;
     cout<<"ENTER YOUR CHOICE "<<endl;  
     cin>>ch;
     switch(ch)
     {
        case 1:
        {
            d=a+b;
            cout<<"THE ADDITION OF COMPLEX NUMBER IS "<<endl;
            cout<<d<<endl;
            break;
        }
        case 2:
        {
            d=a-b;
            cout<<"THE SUBSTRACTION OF COMPLEX NUMBER IS "<<endl;
            cout<<d<<endl;
            break;
        }
        case 3:
        {
            d=a*b;
            cout<<"THE MULTIPLICATION OF COMPLEX NUMBER IS "<<endl;
            cout<<d<<endl;
            break;
        }
        default:
        {
            cout<<"INVALID OPERATION "<<endl;
        }
     } 
    }while(1);
    return 0;   
}