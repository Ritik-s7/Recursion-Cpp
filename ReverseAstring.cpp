#include<iostream>
#include<string>
using namespace std;

string reverseString(string s, int i)
{   
    int n = s.size();
    if(i==(n)/2)
    {
        return s;
    }

    char temp = s[i];
    s[i] = s[n-i-1];
    s[n-i-1]= temp;

    return reverseString(s,i+1);
}

// Method 2

/*

    void reverseString(string s)
    {
        if(s.length()==0)
        {
            return;
        }
        string restOfString = s.substr(1);
        reverseString(restOfString);
        cout<<s[0];
    }


*/

int main()
{
    string s = "Binod";
    cout<<reverseString(s,0);
}