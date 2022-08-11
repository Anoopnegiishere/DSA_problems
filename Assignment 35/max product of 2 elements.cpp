class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(i!=j)
                {
                int newmax= (nums[i]-1)*(nums[j]-1);
                pro = max(pro, newmax);
            }
            }
        }
        return pro;
        
    }
};
