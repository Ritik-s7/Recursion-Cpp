#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevSum = sum(n-1);
    return (n + prevSum);
}

int nPowerp(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    
    int ans = nPowerp(n,p-1);
    return n*ans;

}

int main()
{
    cout << sum(4) << endl;
    cout << nPowerp(4,3) << endl;
} 