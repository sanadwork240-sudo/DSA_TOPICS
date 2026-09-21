vector<int> topView(TreeNode* root) {

    vector<int> ans;

    if (root == NULL)
        return ans;

    // column -> first node visible
    map<int, int> mpp;

    // {node, column}
    queue<pair<TreeNode*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {

        auto it = q.front();
        q.pop();

        TreeNode* node = it.first;
        int line = it.second;

        // If this column is not visited yet,
        // this is the topmost node for this column.
        if (mpp.find(line) == mpp.end()) {
            mpp[line] = node->val;
        }

        // Left child -> column - 1
        if (node->left) {
            q.push({
                node->left,
                line - 1
            });
        }

        // Right child -> column + 1
        if (node->right) {
            q.push({
                node->right,
                line + 1
            });
        }
    }

    // map is already sorted by column
    for (auto it : mpp) {
        ans.push_back(it.second);
    }

    return ans;
}
tc o(n logn)
sc=o(2n)
// Top View — Intuition
// Use BFS and assign each node a column number; root = 0, left = -1, right = +1.
// For every column, we only need the first node encountered because it is the topmost node.
// Store it in map<column, value> only if that column hasn't been visited before.
// BFS ensures nodes are processed level by level, so the first node stored for a column is the top node.
// Traverse the map from left to right to get the top view.