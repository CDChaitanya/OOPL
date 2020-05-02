#include<iostream>
using namespace std;
class exc
{
    int age;
    double income;
    string place , vehicle;
    public:
    exc()
    {
        age=0;
        income=0;
        place="XXXX";
        vehicle="XXXX";
    }
    class error
    {
        public:
        error(int a)
        {
            cout<<"INVALID AGE"<<endl;
        }
        error(double d)
        {
            cout<<"INVALID INCOME "<<endl;
        }
        error(string s)
        {
            cout<<"INVALID PLACE"<<endl;
        }
    };
    void getdata()
    {
        cout<<"ENTER THE AGE "<<endl;
        cin>>age;
        if(age<18||age>55)
        {
            throw error(age);
        }
        cout<<"ENTER THE INCOME "<<endl;
        cin>>income;
        if(income<50000||income>100000)
        {
            throw error (income);
        }
        cout<<"ENTER THE PLACE OF RESIDENT"<<endl;
        cout<<"pune / mumbai / banglore / chennai"<<endl;
        cin>>place;
        if(place!="pune"&& place!="mumbai"&& place!="banglore"&&place!="chennai")
        {
            throw error(place);
        }
        cout<<"DO YOU HAVE 4 WHEELER"<<endl;
        cin>>vehicle;
    }
	void putdata()
	{
		cout<<"Age=========> "<<age<<endl;
		cout<<"Income======> "<<income<<endl;
		cout<<"Resident====> "<<place<<endl;
		cout<<"4-Wheeler===> "<<vehicle<<endl;
	}
};

int main()
{
    exc e;
    try{ e.getdata();}
    catch(exc::error)
    {
        cout<<"INVALID DATA"<<endl;
    }
    e.putdata();
}
/*#include<iostream>
using namespace std;
class exc
{
    int age;
    double income;
    string place , vehicle;
    public:
    exc()
    {
        age=0;
        income=0;
        place="XXXX";
        vehicle="XXXX";
    }
    class error
    {
        public:
        error(int a)
        {
            cout<<"INVALID AGE"<<endl;
        }
        error(double d)
        {
            cout<<"INVALID INCOME "<<endl;
        }
        error(string s)
        {
            cout<<"INVALID PLACE"<<endl;
        }
    };
    void getdata()
    {
        cout<<"ENTER THE AGE "<<endl;
        cin>>age;
        cout<<"ENTER THE INCOME "<<endl;
        cin>>income;
        cout<<"ENTER THE PLACE OF RESIDENT"<<endl;
        cout<<"pune / mumbai / banglore / chennai"<<endl;
        cin>>place;
        cout<<"DO YOU HAVE 4 WHEELER"<<endl;
        cin>>vehicle;
        if(age<18||age>55)
        {
            throw error(age);
        }
        if(income<50000||income>100000)
        {
            throw error (income);
        }
        if(place!="pune"&& place!="mumbai"&& place!="banglore"&&place!="chennai")
        {
            throw error(place);
        }
    }
	void putdata()
	{
		cout<<"Age=========> "<<age<<endl;
		cout<<"Income======> "<<income<<endl;
		cout<<"Resident====> "<<place<<endl;
		cout<<"4-Wheeler===> "<<vehicle<<endl;
	}
};

int main()
{
    exc e;
    try{ e.getdata();}
    catch(exc::error)
    {
        cout<<"INVALID DATA"<<endl;
    }
    e.putdata();
}*/