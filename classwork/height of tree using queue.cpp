 int height(Node* root) {
         queue<Node*> q;
        q.push(root);
      int  l =0;
        while (!q.empty())
        {
            int size= q.size();
            l++;
            while(size--)
            {
            Node* root = q.front();
            q.pop();
          //  cout << root->data << ' ';
            if (root->left) 
            {
                q.push(root->left);
                
            }
            if (root->right)
            {
                 q.push(root->right);
                 
            }
            
        }
        }
        
        return l-1;
    }
