//  the intution for the inorder is a slight different as compared to the preorder algo as we have to travel for the left element and then come back to the root when the null ids approached and travel back to the risght 



vector<int> inorderTraversal(TreeNode* root) {

    stack<TreeNode*> st;
    TreeNode* node = root;
    vector<int> inorder;

    while (true) {

        if (node != NULL) {

            st.push(node);
            node = node->left;

        }
        else {

            if (st.empty() == true)
                break;

            node = st.top();
            st.pop();

            inorder.push_back(node->val);

            node = node->right;
        }
    }

    return inorder;
}
// tc O(n)
// sc O(n)