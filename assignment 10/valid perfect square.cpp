class Solution {
public:
    bool isPerfectSquare(int x) {
         long long left = 1 , right = x / 2 , mid , ans;
   long long temp;
        if(x==1)
        {
            return true;
        }
    while(left <= right)
    {
        mid = (left + (right - left) / 2);
        temp = mid * mid;
        if(temp == x)
            return mid;
        if(temp < x)
            ans = mid , left = mid + 1;
        else
            right = mid - 1;
    }
        if(ans*ans==x)
        {
            return true;
        }
            return false;        
    }
};
