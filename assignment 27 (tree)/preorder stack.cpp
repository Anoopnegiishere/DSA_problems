vector<int> preorderTraversal(TreeNode* root) {
             vector<int> ans;
    if (root == NULL)
    {
		return ans;
    }
           

	stack<TreeNode*> nodeStack;
	nodeStack.push(root);
	while (nodeStack.empty() == false) {
		
		struct TreeNode* node = nodeStack.top();
		ans.push_back(node->val);
		nodeStack.pop();

		if (node->right)
			nodeStack.push(node->right);
		if (node->left)
			nodeStack.push(node->left);
	}
            return ans;
}
};
