#include<bits/stdc++.h>
using namespace std;

 bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
     int i=r-1;
      for(int j=0;j<A[0].size();j++)   
      {
         if(A[i][j]==target)
         return true;
     }
    
     return false;
}
int main()
{
    vector<vector<int>>A = {
                           {23,44,71},
                           {60,19,24},
                           {51,85,99}
                         };
 bool a = isTragetPresentInRow(A,85, 3);
    cout<<a;
    return 0;
}
