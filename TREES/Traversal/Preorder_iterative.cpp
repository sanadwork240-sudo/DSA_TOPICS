//  the intution is to use the stack traversal as we have to do a dfs traversal for the preorder that is root-left-right we can store the answer in the verctor ans and so on 

void iterative_preorder(node*root){
    if(root==null)return preorder;
    stack<node*> st;
    st.push(root);
    
    while(!st.empty()){
        root=st.top();
        st.pop();
        ans.push_back(root->val);
        if(root->right!=null)st.push(root->right);
        if(root->left!=null)st.push(root->right);
    }
    return ans;
}
// tc O(n)
// sc O(n)