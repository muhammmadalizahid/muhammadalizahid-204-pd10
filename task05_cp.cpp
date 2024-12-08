#include<fstream>
#include<iostream>
using namespace std;
string morsecode(string); 
int main() 
{
    string text;
    cout<<"Enter the text: ";
    getline(cin, text); 
    string result=morsecode(text); 
    cout<<"Morse Code: "<<result<<endl;

}
string morsecode(string text) 
{
    string result="";
    for (int i= 0; text[i]!='\0'; i++) 
    {
        if(text[i]=='A' || text[i]=='a') 
        {
            result=result+".-";
        }
        else if(text[i]=='B' || text[i]=='b') 
        {
            result=result+"-...";
        }
        else if(text[i]=='C' || text[i]=='c') 
        {
            result=result+"-.-.";
        }
        else if(text[i]=='D' || text[i]=='d') 
        {
            result=result+"-..";
        }
        else if(text[i]=='E' || text[i]=='e') 
        {
            result=result+".";
        }
        else if(text[i]=='F' || text[i]=='f') 
        {
            result=result+"..-.";
        }
        else if(text[i]=='G' || text[i]=='g') 
        {
            result=result+"--.";
        }
        else if(text[i]=='H' || text[i]=='h') 
        {
            result=result+"....";
        }
        else if(text[i]=='I' || text[i]=='i') 
        {
            result=result+"..";
        }
        else if(text[i]=='J' || text[i]=='j') 
        {
            result=result+".---";
        }
        else if(text[i]=='K' || text[i]=='k') 
        {
            result=result+"-.-";
        }
        else if(text[i]=='L' || text[i]=='l') 
        {
            result=result+".-..";
        }
        else if(text[i]=='M' || text[i]=='m') 
        {
            result=result+"--";
        }
        else if(text[i]=='N' || text[i]=='n') 
        {
            result=result+"-.";
        }
        else if(text[i]=='O' || text[i]=='o') 
        {
            result=result+"---";
        }
        else if(text[i]=='P' || text[i]=='p') 
        {
            result=result+".--.";
        }
        else if(text[i]=='Q' || text[i]=='q') 
        {
            result=result+"--.-";
        }
        else if(text[i]=='R' || text[i]=='r') 
        {
            result=result+".-.";
        }
        else if(text[i]=='S' || text[i]=='s') 
        {
            result=result+"...";
        }
        else if(text[i]=='T' || text[i]=='t') 
        {
            result=result+"-";
        }
        else if(text[i]=='U' || text[i]=='u') 
        {
            result=result+"..-";
        }
        
        else if(text[i]=='V' || text[i]=='v') {
            result=result+"...-";
        }
        else if(text[i]=='W' || text[i]=='w') 
        {
            result=result+".--";
        }
        else if(text[i]=='X' || text[i]=='x') 
        {
            result=result+"-..-";
        }
        else if(text[i]=='Y' || text[i]=='y') 
        {
            result=result+"-.--";
        }
        else if(text[i]=='Z' || text[i]=='z') 
        {
            result=result+"--..";
        }
        else if(text[i]==' ') 
        {
            result=result+"-.-.-.-";
        }
    }
    return result;
}
