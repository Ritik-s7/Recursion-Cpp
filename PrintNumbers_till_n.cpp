#include<iostream>
using namespace std;

void increasingNums(int n)
{   
    if(n==0)
    {
        return;
    }
    increasingNums(n-1);
    cout << n << endl;
    
}

void DecNums(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    DecNums(n-1);
}


int main()
{
    increasingNums(20);
    DecNums(20);
}