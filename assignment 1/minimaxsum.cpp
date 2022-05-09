#include<bits/stdc++.h>
using namespace std;
int main()
{
    long arr[5],maxsum=0,minsum=0,total=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        total+=arr[i];
        
    }
    int min=arr[0],max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    maxsum=total-min;
    minsum=total-max;
    cout<<minsum<<" "<<maxsum;
    return 0;
}
