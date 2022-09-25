int Solution::solve(vector<int> &A, int k) {
     vector<int> c;
    for(int i=k-1; i>=0; i-- )
        c.push_back(A[i] );
    for(int i=A.size()-1; i>=0 && i>A.size()-k-1; i-- )
        c.push_back(A[i] );
     
    int sum = 0;
    for( int i=0; i<k; i++ )
        sum += c[i];
     int csize = c.size(), newsum = sum;
     int front = 0, back = k;
    
     while( back < csize ) {
         newsum = newsum - c[front] + c[back];
         sum = max( newsum, sum );
         front++;
      back++;
     }
    
    return sum;
}
