#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;
    list<int>::iterator it;
    int choice,item;
    do
    {
        cout<<"1.Insert Element into the Stack"<<endl;
	    cout<<"2.Delete Element from the Stack"<<endl;
	    cout<<"3.Size of the Stack"<<endl;
	    cout<<"4.Top Element of the Stack"<<endl;
	    cout<<"5.To Show Every Element of the Stack"<<endl;
	    cout<<"6.Exit"<<endl;
	    cout<<"Enter your Choice: "<<endl;
	    cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"ENTER THE ELEMENT TO BE STACKED"<<endl;
                cin>>item;
                l.push_back(item);
                break;
            }
             case 2:
             {
                 cout<<l.back()<<" IS BEING DELETED"<<endl;
                 l.pop_back();
                 break;
             }
             case 3:
             {
                 cout<<"THE SIZE OF STACK IS "<<l.size()<<endl;
                 break;
             }
             case 4:
             {
                 cout<<"THE TOP ELEMENT IS "<<l.back()<<endl;
                 break;
             }
             case 5:
             {
                 cout<<"THE QUEUE IS AS FOLLOWS "<<endl;
                 for(it=l.begin();it!=l.end();it++)
                 {
                     cout<<*it<<endl;
                 }
                 break;
             }
             case 6:
             {
                 exit(1);
                 break;
             }
             default:
             cout<<"INVALID INPUT "<<endl;
         
        }
    } while (1);
    return 0;
}