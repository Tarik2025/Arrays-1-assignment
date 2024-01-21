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
    //sorting algorithm
    for(int i=0;i<=n-1;i++)
    {

    for(int j=i+1;j<=n-1;j++)
    
    {
        if (a[i]<a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
    }
}
cout<<"the second largest element in the entered array is :"<<a[1]<<endl;
return 0;
}