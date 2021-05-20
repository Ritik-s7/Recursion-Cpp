#include<iostream>
using namespace std;

bool sortedArray(int arr[], int n)
{
    
    if(n==1)
    {
        return true;
    }

    bool restArray = sortedArray(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);


}

int main()
{
    int arr[] = {1,2,3,7,4,5,6};
    cout << sortedArray(arr,6);
}