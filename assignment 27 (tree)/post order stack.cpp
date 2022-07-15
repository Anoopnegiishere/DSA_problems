vector<int> ans;
 	vector<int> postorderTraversal(TreeNode* root){
         
vector<int> ans;
    if (root == NULL)
        return ans;
    stack<TreeNode*> S;
    S.push(root);
    TreeNode* prev = NULL;
    while (!S.empty()) {
         TreeNode* current = S.top();
        if (prev == NULL || prev->left == current
            || prev->right == current) {
            if (current->left)
                S.push(current->left);
            else if (current->right)
                S.push(current->right);
            else {
                S.pop();
                ans.push_back(current->val);
            }
        }
 
        else if (current->left == prev) {
            if (current->right)
                S.push(current->right);
            else {
                S.pop();
                ans.push_back(current->val);
            }
        }
        else if (current->right == prev) {
            S.pop();
            ans.push_back(current->val);
        }
        prev = current;
    }
    return ans;
}
    
