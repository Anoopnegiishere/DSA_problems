#include<bits/stdc++.h>
using namespace std;

 bool isTargetPresentin2d(vector<vector<int> >A, int target){
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]==target)
                return true;
        }
    }
     return false;
 }
            
            
int main()
{
    
  vector<vector<int>>A = { {3,4,7},
                           {6,1,2},
                           {5,8,9}
                         };
    bool a = isTargetPresentin2d(A,8);
    cout<<a;
    return 0;
}
