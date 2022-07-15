 vector<int> inorderTraversal(TreeNode* root) {
             vector<int> ans;
    if (root == NULL)
    {
		return ans;
    }
             stack<TreeNode *> s;
    TreeNode *curr = root;
 
    while (curr != NULL || s.empty() == false)
    {
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        ans.push_back(curr->val);
        curr = curr->right;
 
    }
        return ans;
}
