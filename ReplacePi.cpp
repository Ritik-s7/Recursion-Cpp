#include<iostream>
#include<string>
using namespace std;

void ReplacePi(string s, int i)
{   
    if (i+1==s.size())
    {
        cout<<s<<endl;
        return;
    }
    
    string temp = s.substr(i,2); 
    if(temp == "pi")
    {
        s.replace(i,2,"3.14");
    }

    ReplacePi(s,i+1);
}

// Method 2

void replacePi2(string s)
{
    if (s.size()==0)
    {
        return;
    }


    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi2(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePi2(s.substr(1));
    }
    
}

int main()
{
    string str = "pippxxppiixipi";
    ReplacePi(str,0);
    replacePi2(str);
}