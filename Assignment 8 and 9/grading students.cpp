#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>= 38) {
        int rem = a[i] % 5;
        if(rem >= 3)a[i]+=5-rem;
        }
        cout << a[i] << endl;
     }
        
    
    return 0;
    
}
