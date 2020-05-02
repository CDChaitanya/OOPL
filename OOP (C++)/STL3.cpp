#include<iostream>
#include<algorithm>                        // including algorithm
using namespace std;
class Person
{
	string name;
	string dob;
	long int num;
public:
	void getdata()
	{
		cout<<"Enter Name:"<<endl;
		cin>>name;
		cout<<"Enter date of birth"<<endl;
		cin>>dob;
		cout<<"Enter telephone number"<<endl;
		cin>>num;
	}
	void display()
	{
		cout<<"Name is:            "<<name<<endl;
		cout<<"Date of Birth is:   "<<dob<<endl;
		cout<<"Telephone number is:"<<num<<endl;
	}
	string getname()
	{
		return name;
	}
};
 bool compare_name(Person p, Person q)
 {
     return(p.getname()<q.getname());
 }
 int main()
 {
     Person p[3];
     string s[3];
     string key;
     for(int i=0;i<3;i++)
     {
         p[i].getdata();
     }
     sort(p,p+3,compare_name);
     for(int i=0;i<3;i++)
     {
         p[i].display();
     }
     for(int i=0;i<3;i++)
     {
       s[i]=p[i].getname();
     }
     cout<<"ENTER THE PERSON TO BE SEARCHED"<<endl;
     cin>>key;
     if(binary_search(s,s+3,key))
     {
         cout<<"PERSON FOUND"<<endl;
     }
     else
     {
        cout<<"PERSON NOT FOUND"<<endl;
     }
 }