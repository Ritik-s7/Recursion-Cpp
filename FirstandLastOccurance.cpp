// To find first and last occurence of an element in an Array

#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int curr, int a)
{
    int first;
    if (n==0)
    {
        return -1;
    }
    
    if(arr[0]==a)
    {
        first = curr;
        return first;
    }
    curr++;
    return firstOccurence(arr+1,n-1,curr,a);  
}

// Method 2 
/*

int firstOccurence(int arr[], int n, int i, int a)
{
    if (i==n)
    {
        return -1;
    }
    
    if(arr[i]==a)
    {
        return i;
    }
    return firstOccurence(arr,n,i+1,a);  
}

*/

int lastOccurence(int arr[], int n, int i, int a)
{
    if(i==n)
    {
        return -1;
    }

    int restArray = lastOccurence(arr,n,i+1,a);
    if (restArray!=-1)
    {
        return restArray;
    }
    if (arr[i]==a)
    {
        return i;
    }
    return -1;
}


int main()
{
    int arr [] = {1,4,2,5,7,6,2,8};

    cout << firstOccurence(arr, 8,0,2)<<endl;
    cout << lastOccurence(arr, 8,0,2);
}