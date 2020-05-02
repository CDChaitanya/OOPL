#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void showstack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}
void showqueue(queue<int>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int>s;
    queue<int>q;
    int choice,iteam;
    cout<<"1.STACK"<<endl;
    cout<<"2.QUEUE"<<endl;
    cout<<"ENTER YOUR CHOICE"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
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
                cin>>iteam;
                s.push(iteam);
                break;
            }
            case 2:
            {
                iteam=s.top();
                cout<<iteam<<" THIS ELEMENT IS BEING  DELETED"<<endl;
                s.pop();
                break;
            }
            case 3:
            {
                cout<<"THE SIZE OF STACK IS "<<s.size()<<endl;
                break;
            }
            case 4:
            {
                cout<<"THE TOP ELEMENT OF STACK IS "<<s.top()<<endl;
                break;
            }
            case 5:
            {
                cout<<"THE ELEMENTS IN STACK ARE"<<endl;
                showstack(s);
                break;
            }
            case 6:
            {
                exit(1);
                break;
            }
            default:
            {
                cout<<"INVALID INPUT"<<endl;
            }
        }
    } while (1);
        }
        case 2:
        {
                do
    {
         cout<<"1.Insert Element into the Queue"<<endl;
         cout<<"2.Delete Element from the Queue"<<endl;
         cout<<"3.Size of the Queue"<<endl;
         cout<<"4.Front Element of the Queue"<<endl;
         cout<<"5.Last Element of the Queue"<<endl;
         cout<<"6.SHOW COMPLETE QUEUE"<<endl;
         cout<<"7.Exit"<<endl;
         cout<<"Enter your Choice: ";  
         cin>>choice;
         switch(choice)
         {
             case 1:
             {
                 cout<<"ENTER THE ELEMENT TO BE QUEUED"<<endl;
                 cin>>iteam;
                 q.push(iteam);
                 break;
             }
             case 2:
             {
                 cout<<q.front()<<" IS BEING DELETED"<<endl;
                 q.pop();
                 break;
             }
             case 3:
             {
                 cout<<"THE SIZE OF QUEUE IS "<<q.size()<<endl;
                 break;
             }
             case 4:
             {
                 cout<<"THE FRONT ELEMENT IS "<<q.front()<<endl;
                 break;
             }
             case 5:
             {
                 cout<<"THE LAST ELEMENT IS "<<q.back()<<endl;
                 break;
             }
             case 6:
             {
                 cout<<"THE QUEUE IS AS FOLLOWS "<<endl;
                 showqueue(q);
                 break;
             }
             case 7:
             {
                 exit(1);
                 break;
             }
             default:
             cout<<"INVALID INPUT "<<endl;
         }      
    } while (1);
        }
        default:
        cout<<"INVAILD INPUT"<<endl;
    }

    return 0;   
}
