#include <iostream>
#include <fstream>
using namespace std;
class student
{
	int age;
	char name[100];
public:
	student()
    {
		age=0;
    }
	void getdata()
	{
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter age:";
		cin>>age;
	}
	void putdata()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
	}
};
int main()
{
    student s;
    int choice;
    cout<<"1.FORMATED I/O"<<endl;
    cout<<"2.BINARY I/O"<<endl;
    cout<<"ENTER YOUR CHOICE"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
         fstream file;
         file.open("example.txt",ios::out | ios::binary);
         cout<<"FILE IS OPENED"<<endl;
         cout<<"ENTER INFORMATION OF STUDENT"<<endl;
         s.getdata();
         file.write((char*)&s,sizeof(s));
         cout<<"WRITING IS DONE"<<endl;
         file.close();
         file.open("example.txt",ios::in);
         cout<<"NOW READING THE FILE"<<endl;
         file.read((char*)&s,sizeof(s));
         s.putdata();
         break;
        }
        case 2:
        {
         
         break;
        }
        default:
        cout<<"INVALID INPUT"<<endl;
    }
    return 0;
}