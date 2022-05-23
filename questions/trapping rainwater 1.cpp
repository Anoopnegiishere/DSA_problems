class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> rightmax(height.size()+1);
        for(int i=height.size()-1;i>=0;i--)
        {
//             if(height[i]>max)
//             {
//                 max=height[i];
//                 rightmax[i]=max;
//             }
//             else
//              rightmax[i]=max;
            rightmax[i]=max(rightmax[i+1],height[i]);
            
        }
        for(int i=0;i<rightmax.size();i++)
        {
            cout<<rightmax[i]<<" ";
        }
        int ans= 0;
        int max_height=0;
        for(int i=0;i<height.size();i++)
        {
            ans+=max(min(max_height,rightmax[i+1])-height[i],0);
            max_height= max(height[i],max_height);
        }
        return ans;
    }
};
