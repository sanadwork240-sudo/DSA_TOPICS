//  in order to find the boundary traversal for the we are using the simplest concept in which we are adding the left boundary , then lleaf nodes and the the right boundary  by writing the 3 differenet function 

vector<int> printboundary(node*root){
    vector<int>res;
    add_left_boundary(root,res);
    add_leaves(root,res);
    add_right_boundary(root,res);
    return res;
}
bool isLeaf(TreeNode* node) {
    return node->left == NULL && node->right == NULL;
}
void addLeftBoundary(TreeNode* root, vector<int>& ans) {

    TreeNode* cur = root->left;

    while (cur) {

        if (!isLeaf(cur))
            ans.push_back(cur->val);

        if (cur->left)
            cur = cur->left;
        else
            cur = cur->right;
    }
}
void addLeaves(TreeNode* root, vector<int>& ans) {

    if (isLeaf(root)) {
        ans.push_back(root->val);
        return;
    }

    if (root->left)
        addLeaves(root->left, ans);

    if (root->right)
        addLeaves(root->right, ans);
}
void addRightBoundary(TreeNode* root, vector<int>& ans) {

    vector<int> temp;

    TreeNode* cur = root->right;

    while (cur) {

        if (!isLeaf(cur))
            temp.push_back(cur->val);

        if (cur->right)
            cur = cur->right;
        else
            cur = cur->left;
    }

    // Reverse because right boundary is required bottom → top
    reverse(temp.begin(), temp.end());

    for (int x : temp)
        ans.push_back(x);
}

 tc =O(h+n+h)
 sc=o(n)