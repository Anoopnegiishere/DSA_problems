#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, sum=0;
    cin >> n >> k;
    int a[n];
    for (int i=0;i<n;i++) {
        
        cin >> a[i];
        if (i!=k)
         sum+=a[i];
    }
    int l;
    cin>>l;
    if (sum/2==l)
     cout<<"Bon Appetit"<<endl;
    else
     cout<<l-sum/2<<endl;
    return 0;
}
