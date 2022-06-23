#include<bits/stdc++.h>
using namespace std;

 bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in row r of A then returns true else return false;
     int j=0;
     while(j<c)
     {
      for(int i=0;i<A.size();i++)   
      {
          cout<<A[i][j]<<" ";
         if(A[i][j]==target)
         return true;
     }
         j++;
     }
     return false;
}
int main()
{
    vector<vector<int>>A = { {27,24,92},
                           {67,19,23},
                           {53,15,79}
                         };
 bool a = isTragetPresentInCol(A,85, A[0].size());
    cout<<a;
    return 0;
}
