//  in this intution i have to find the  max depth of the binary tree here the solution i can use are either the iterative or the recursive but the recursive solution is better as tree can be very complex ds 

int maxDepth(TreeNode* root) {
    if (root == nullptr)
        return 0;

    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    return 1 + max(leftDepth, rightDepth);
}
// Time: O(n) — visit every node once
// Space: O(h) — recursion stack, where h is the tree height


