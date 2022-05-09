vector<int>getTwoLargestNumbers(vector<int>&A){
    int max1=INT_MIN, max2=INT_MIN;
    //write your code to find max1 and max2
    for(int i =0;i<A.size();i++)
    {
        if(max1<A[i]){
        max2=max1;
        max1=A[i];
}
        else if(max2<A[i]){
        max2=A[i];
}
    }
    
    return {max1,max2};
}
