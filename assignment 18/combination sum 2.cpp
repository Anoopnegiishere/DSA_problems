class Solution {
public:
    void elementSum(vector<int>&candidates,vector<vector<int>>&res,vector<int>&elements,int target,int start){
            if(!target){                           
            res.push_back(elements);
            return;    
        }
        for(int i=start;i<candidates.size();i++){
            if(i>start && candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]>target)
                break;
            elements.push_back(candidates[i]);
            elementSum(candidates,res,elements,target-candidates[i],i+1);
            elements.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> res;
         vector<int> elements;
         sort(candidates.begin(),candidates.end());
         elementSum(candidates,res,elements,target,0);
         return res;
    }
    

};
