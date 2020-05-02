#include<iostream>
using namespace std;
class student
{
	string name,bg,teleno,license,dob,section,add;
	int roll;
	char div;
    int static count;
	public:
	student()
	{
		name="XXXX";
		roll=0;
		div='0';
		section="SE";
		add="XXXX__XXXX";
		bg="___";
		teleno="123456789";
		license="MH00AA0000";
		dob="00/00/0000";
		count++;
		cout<<"FIRST OBJECT IS CREATED "<<count<<endl;
	}
	student(string name,int roll,char div,string section,string dob,string bg,string add,string teleno,string license)
	{
		this->name=name;
		this->roll=roll;
		this->div=div;
		this->section=section;
		this->add=add;
		this->bg=bg;
		this->teleno=teleno;
		this->license=license;
		this->dob=dob;
		count++;
		cout<<"SECOND OBJECT IS CREATED "<<count<<endl;
	}	
	student(student &s)
	{
		name=s.name;
		roll=s.roll;
		div=s.div;
		section=s.section;
		add=s.add;
		bg=s.bg;
		teleno=s.teleno;
		license=s.license;
		dob=s.dob;
		count++;
		cout<<"THIRD OBJECT IS CREATED "<<count<<endl;
	}
	~student()
	{
		count--;
		cout<<"DESTRUCTOR IS CREATED "<<count<<endl;
	}
	static int getcount()
	{
		return count;
	}
	friend class getters_setters;
};
int student::count=0;

class getters_setters
{
	int *P;
	public:
	inline void get(student&s)             // INLINE
	{
	cout<<"\nEnter Name ";
	cin>>s.name;
	cout<<"\nEnter Roll_no ";
	cin>>s.roll;
	cout<<"\nEnter Class ";
	cin>>s.section;
	cout<<"\nEnter Division ";
	cin>>s.div;
	cout<<"\nEnter Date of Birth ";
	cin>>s.dob;
	cout<<"\nEnter Blood Group ";
	cin>>s.bg;
	cout<<"\nEnter Address ";
	cin>>s.add;
	cout<<"\nEnter Telephone number ";
	cin>>s.teleno;
	cout<<"\nEnter Driving License number ";
	cin>>s.license;
	}
	getters_setters()
	{
		cout<<"ENTER 3 SUBJECT MARKS"<<endl;
		P=new int[3];
		int sum=0;
		for(int i=0;i<3;i++)
		{
			cin>>P[i];
		}
		for(int i=0;i<3;i++)
		{
			sum=sum+P[i];
		}
		cout<<"THE SUM OF ALL MARKS "<<sum<<endl;
	}
	void display(student&s)
	{
 		cout<<endl<<endl;
		cout<< "NAME             :"<<s.name<<endl;
		cout<< "ROLL NUMBER      :"<<s.roll<<endl;
		cout<< "SECTION          :"<<s.section<<endl;
		cout<< "DIVISION         :"<<s.div<<endl;
		cout<< "DATE OF BIRTH    :"<<s.dob<<endl;
		cout<< "BLOOD GROUP      :"<<s.bg<<endl;
		cout<< "ADDRESS          :"<<s.add<<endl;
		cout<< "TELEPHONE NUMBER :"<<s.teleno<<endl;
		cout<< "DRIVING LICENCE  :"<<s.license<<endl;
	}
	~getters_setters()
	{
		delete []P;
	}
};
int main()
{
	student s;
	student s1("Chaitanya",18,'4',"SE","17/11/2000","A+ve","PICT_Pune","1234567890","MH123ND45");
	student s2(s1);
	cout<<"THE COUNT IS "<<s1.getcount()<<endl;
    getters_setters s3;
    s3.get(s1);
    s3.display(s1);
}