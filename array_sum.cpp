#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,arr[n];
    cout<<"Enter number of student:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Total mark is:"<<sum<<endl;
    return 0;
}