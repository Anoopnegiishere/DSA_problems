/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     vector <int> getVector(ListNode* node){
      vector <int> result;
      while(node){
         result.push_back(node->val);
         node = node->next;
      }
      return result;
   }
   int getDecimalValue(ListNode* head) {
      vector <int> x = getVector(head);
      reverse(x.begin(), x.end());
      int ans = 0;
      int temp = 1;
      for(int i = 0; i < x.size(); i++){
         ans += x[i] * temp;
         temp *= 2;
      }
      return ans;
   }
};
