// inorder ,oreorder and postorder these are all the types of the dfs 


struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=nullptr;
    }
} 

// inorder code left root right
void inorder(node*temp){
    if(temp==null)return;
    inorder(temp->left);
    cout<<temp->data;
    inorder(temp->right);
}

// preorder root left right
void preorder(node*temp){
    if(temp==null)return;
    
    cout<<temp->data;
    preorder(temp->left);
    preorder(temp->right);
}

// postorder
void preorder(node*temp){
    if(temp==null)return;
    
    preorder(temp->left);
    preorder(temp->right);
    cout<<temp->data;

}

