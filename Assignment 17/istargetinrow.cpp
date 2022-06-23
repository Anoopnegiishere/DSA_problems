#include<bits/stdc++.h>
using namespace std;

 bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
     int i=0;
     while(i<r)
     {
      for(int j=0;j<A[0].size();j++)   
      {
          cout<<A[i][j]<<" ";
         if(A[i][j]==target)
         return true;
     }
         i++;
     }
     return false;
}
int main()
{
    vector<vector<int>>A = { {23,44,71},
                           {60,19,24},
                           {51,85,99}
                         };
 bool a = isTragetPresentInRow(A,85, A.size());
    cout<<a;
    return 0;
}
