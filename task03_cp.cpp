#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string readline();
string getfield(string, int);
int main()
{
    string record= readline();
    string name=getfield(record, 1);
    string age=getfield(record, 2);
    int age1=stoi(age);
    if(age1%2==0)
    {
        cout<<"###############"<<endl;
        cout<<"#"<<age<<" "<<name<<" !"<<age<<" #"<<endl;
        cout<<"###############"<<endl;
    }
    if(age1%2!=0)
    {
        cout<<"***************"<<endl;
        cout<<"*" <<age<<" "<<name<<" !"<<age<<" *"<<endl;
        cout<<"***************"<<endl;
    }
}
string readline()
{
    string line;
    fstream file;
    file.open("name.txt", ios :: in);
    getline(file, line);
    file.close();
    return line;
}
string getfield(string record, int field)
{
    int comma=1;
    string entitiy;
    for(int i=0; i<record.length(); i++)
    {
        if(record[i]==',')
        {
            comma=comma+1;
        }
        else if(comma==field)
        {
        entitiy=entitiy+record[i];
        }
    }
    return entitiy;
}