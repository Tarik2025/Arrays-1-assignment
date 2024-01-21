#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     cout<<" The elements entered in the array are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        cout<<"The smallest element in entered in the array is:"<<i+1;
        flag=true;
    }
    if(flag==false)
    {
        cout<<"There is no smallest missing element in sorted array";
    }
    return 0;

}