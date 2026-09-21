vector<vector<int>> verticalTraversal(TreeNode* root) {

    // column -> row -> values
    map<int, map<int, multiset<int>>> nodes;

    // {node, {column, row}}
    queue<pair<TreeNode*, pair<int, int>>> q;

    q.push({root, {0, 0}});

    while (!q.empty()) {

        auto p = q.front();
        q.pop();

        TreeNode* node = p.first;
        int x = p.second.first;   // column
        int y = p.second.second;  // row

        // Store node at its (column, row)
        nodes[x][y].insert(node->val);

        // Left child
        if (node->left) {
            q.push({
                node->left,
                {x - 1, y + 1}
            });
        }

        // Right child
        if (node->right) {
            q.push({
                node->right,
                {x + 1, y + 1}
            });
        }
    }

    vector<vector<int>> ans;

    // Go column by column
    for (auto p : nodes) {

        vector<int> col;

        // Go row by row
        for (auto q : p.second) {

            // Add all values at this row
            col.insert(
                col.end(),
                q.second.begin(),
                q.second.end()
            );
        }

        ans.push_back(col);
    }

    return ans;
}

tc o(n logn)
sc=o(2n)

// Vertical Order Traversal — Intuition
// Use BFS and assign each node a coordinate (column, row).
// Root starts at (0,0); left → column - 1, right → column + 1, and row increases by 1.
// Store nodes using map[column][row], with a multiset for nodes having the same position.
// Since map keeps keys sorted, process columns left to right and rows top to bottom.
// Collect all values column-wise to get the final vertical traversal.