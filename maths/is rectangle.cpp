int Solution::solve(int A, int B, int C, int D) {
    vector<int > arr;
   
    arr.push_back(A);
     arr.push_back(B);
      arr.push_back(C);
       arr.push_back(D);
       sort(arr.begin(),arr.end());
       if(arr[0]==arr[1] && arr[2]==arr[3])
       {
           return 1;
       }
       return 0;
}
