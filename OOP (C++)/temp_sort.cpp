#include<iostream>
using namespace std;
template<class T>
void min(T A[], int n)
{
   int LOC=0;
   MIN=A[0];   
   T MIN,temp;
   for(int k=0;k<n-1;k++)
   { 
    for(int j=k+1;j<n;j++)
    {
     if(MIN>A[j])
     {
       MIN=A[j];
       LOC=j;
     }
    }
   temp=A[k];
   A[k]=A[LOC];
   A[LOC]=temp;
  }
  cout<<"SORTED ARRAY IS "<<endl;
  for(int k=0;k<n;k++)
  {
   cout<<A[k]<<endl;
  }
}
int main()
{
 int A[100];
 float B[100];
 int k,n,m;
 cout<<"ENTER TOTAL NUMBER OF ELEMENT IN INT ARRAY"<<endl;
 cin>>n;
 cout<<"ENTER THE ELEMENTS"<<endl;
 for(k=0;k<n;k++)
 {
   cin>>A[k];
 }
  min(A,n);
  
 cout<<"ENTER TOTAL NUMBER OF ELEMENT OF FLOAT ARRAY"<<endl;
 cin>>m;
 cout<<"ENTER THE ELEMENTS"<<endl;
 for(k=0;k<m;k++)
 {
   cin>>B[k];
 }
 min(B,m);
  return 0;
}