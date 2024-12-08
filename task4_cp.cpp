#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string readfile();
void append(string missing);
int main() 
{
    string record=readfile();
    string letters="abcdefghijklmnopqrstuvwxyz";
    string missing="";
    for (int i=0; i<letters.length(); i++) 
    {
        bool found=false;
        for (int j=0; j<record.length(); j++) 
        {
            if(letters[i]==record[j]) 
            {
                found = true;
                break;
            }
        }
        if(found==false) 
        {
            missing=missing+letters[i];
        }
    }
    append(missing);
}
string readfile() 
{
    string line;
    fstream file;
    file.open("alphabets.txt", ios::in);
    getline(file, line);
    file.close();
    return line;
}
void append(string missing) 
{
    fstream file;
    file.open("alphabets.txt", ios::app);
    file << endl << missing;
    file.close();
}
