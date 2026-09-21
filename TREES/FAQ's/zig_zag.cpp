// Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).


// intution is that in order to print the zig zag manner the code should be same as that in the bfs manner but to use left_to_right variable in additiomn to know ehteher to print left or ight way for the particluar step 

funt(node*root){
    queue<node*>q;
    vector<vector<int>>result;
    if(root==null) return result;
    bool left_to_right=true;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>row;
        for(int i =0;i<size;i++){
            node=q.front();
            q.pop();
            index=(left_to_right)? i:size-i-1;
            row[index]=root->val;
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
        }
        left_to_right=!left_to_right;
        result.push_back(row);
    }
    return result;
}
tc,sc=o(n)