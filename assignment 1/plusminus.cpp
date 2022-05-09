#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, n, total,i;
    float pos = 0., neg = 0., zer = 0.;
    
    cin >> N;
    
    total = N;
    
   
    float a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
for(i=0;i<N;i++){   
if(a[i] > 0)
{
pos++;
}
else if(a[i] < 0)
{
neg++;
}
else
{
zer++;
}}


    
    
    cout << pos / total << endl;
    cout << neg / total << endl;
    cout << zer / total << endl;
    
    return 0;
}
