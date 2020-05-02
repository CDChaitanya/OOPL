#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char* argv[])
{
    if(argc<4)
    {
        cout<<"INVALID INPUT"<<endl;
        exit(1);
    }
    ifstream infile;
    infile.open(argv[3]);
    if(!infile)
    {
        cout<<"CAN'T OPEN FILE"<<endl;
        exit(1);
    }
    string line;
    string replace="";
    string old=argv[1];
    string New=argv[2];
    int found;
    while(infile)
    {
        getline(infile,line);
        found=line.find(old);
        while(line.find(old)<500)
        {
            line.replace(found,old.size(),New);
            found=line.find(old);
        }
        if(infile.eof())
        {
            break;
        }
        replace=replace+line;
    }
    infile.close();
    ofstream os;
    os.open(argv[3]);
    os<<replace;
    cout<<"REPLACEMENT IS DONE"<<endl;
    os.close();
    string s;
    infile.open(argv[3]);
    while(infile)
    {
        getline(infile,s);
        cout<<s<<endl;
    	if(infile.eof())
		break;
    }
    infile.close();
return 0;
}