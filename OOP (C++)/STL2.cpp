#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    deque<int>::iterator it;
    int choice,item;
    do
    {
        cout<<"1.Insert Element at the End"<<endl;
        cout<<"2.Insert Element at the Front"<<endl;
	    cout<<"3.Delete Element at the End"<<endl;
        cout<<"4.Delete Element at the Front"<<endl;
        cout<<"5.Front Element at Deque"<<endl;
        cout<<"6.Last Element at Deque"<<endl;
        cout<<"7.Size of the Deque"<<endl;
        cout<<"8.Display Deque"<<endl;
        cout<<"9.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                 cout<<"ENTER THE ELEMENT TO BE QUEUED"<<endl;
                 cin>>item;
                 d.push_back(item);
                 break;               
            }
            case 2:
            {
                 cout<<"ENTER THE ELEMENT TO BE QUEUED"<<endl;
                 cin>>item;
                 d.push_front(item);
                 break ;               
            }
            case 3:
            {
                cout<<d.back()<<" IS BEING DELETED"<<endl;
                d.pop_back();
                break;
            } 
            case 4:
            {
                cout<<d.front()<<" IS BEING DELETED"<<endl;
                d.pop_front();
                break;
            }     
            case 5:
            {
                cout<<"THE FRONT ELEMENT IS "<<d.front()<<endl;
                break;
            }    
            case 6:
            {
                cout<<"THE LAST ELEMENT IS "<<d.back()<<endl;
                break;
            }  
            case 7:
            {
                cout<<"THE SIZE OF QUEUE IS"<<d.size()<<endl;
                break;
            }
            case 8:
            {
                cout<<"THE QUEUE IS AS FOLLOWS"<<endl;
                for(it=d.begin();it!=d.end();it++)
                {
                    cout<<*it<<endl;
                }
                break;
            }
            case 9:
            {
                exit(1);
                break;
            }
            default:
            cout<<"INVALID INPUT"<<endl;
        }
    } while (1);
    
}