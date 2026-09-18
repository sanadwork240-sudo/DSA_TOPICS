//  one of the best soliution of doing is to brutly is to do it likt this ki for every node check the lh , rh if at any pont the difference is >1 return false and if not the call the recursive function for the leff and the right nodes 

//  brute force solution 
// int fh(root){
//    if(root==null)return 0; 
//     lh =fh(root->left);
//     rh=fh(root->right);

//     return 1+max(lh,rh);
// }
//  bool func(root){
//     if (!root) return true;
//     lh =fh(root->left);
//     rh=fh(root->right);
//     if(abs(lh-rh)>1)return false;
    
//     funct(root->left);
//     func(root->right);

//     return true;
// } 
// tc = o(n^2) sc =o(n)

//  optimal solution the uppr brute force solution is taking the n square of the tc because the lh and rh are being calculated again and again for every node 

 func(root){
    if (!root)return 0;
    lh=func(root->left);
    if(lh==-1)return -1;

    rh=func(root->right);
    if(rh==-1)return -1;

    if(abs(lh-rh)>1)return -1;

    return 1+max(lh,rh);

 }

