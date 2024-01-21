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
    int temp=0;
    for(int i=0;i<=n-1;i++)
    {
    for(int j=i+1;j<=n-1;j++)
    {
       if (a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    }
    }
    cout<<"The smallest element in entered in the array is:"<<a[0];
    return 0;

}