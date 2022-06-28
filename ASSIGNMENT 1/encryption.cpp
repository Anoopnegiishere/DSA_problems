string encryption(string s) {
    int row,col,i,j;
    string ans="";
    int len=s.size();   
    row=sqrt(len);
    if((row*row)==len)
     col=row;
    else  col=row+1;
     for(i=0;i<col;i++)
     {
     for(j=i;j<len;j=j+col)
     {
         ans+=s[j];
     }ans+=" ";
     }
     return ans;
    
}
