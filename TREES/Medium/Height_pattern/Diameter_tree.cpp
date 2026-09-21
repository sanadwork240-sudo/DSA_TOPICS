//  what dooes diamter of the tree means

// The main difference between the two approaches is that in the first approach, we separately calculate the height of the left and right subtree for every node and then calculate the diameter. This causes the same nodes to be visited many times because height() is called again and again for overlapping subtrees. In the second (optimized) approach, while calculating the height of a node, we simultaneously calculate the diameter using lh + rh. The height is returned to the parent, while the diameter is updated in maxi. Thus, each node is processed only once. Therefore, the first approach can take O(n²) time in the worst case, whereas the optimized approach takes O(n) time.

int maxi = 0;

int height(Node* root)
{
    if (root == NULL)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    return 1 + max(lh, rh);
}

void findMax(Node* root)
{
    if (root == NULL)
        return;

    int lh = height(root->left);
    int rh = height(root->right);

    // Diameter passing through current node
    maxi = max(maxi, lh + rh);

    findMax(root->left);
    findMax(root->right);
}

int diameter(Node* root)
{
    maxi = 0;
    findMax(root);
    return maxi;
}


// approach 2

int maxi = 0;

int height(Node* root)
{
    if (root == NULL)
        return 0;

    // Get heights of left and right subtrees
    int lh = height(root->left);
    int rh = height(root->right);

    // Diameter passing through current node
    maxi = max(maxi, lh + rh);

    // Return height to parent
    return 1 + max(lh, rh);
}

int diameter(Node* root)
{
    maxi = 0;
    height(root);
    return maxi;
}