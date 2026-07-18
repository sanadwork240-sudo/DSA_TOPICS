// BRUTE SOLUTION EVERY COMBINATION CHECK 
// vector<pair<int,int>> findPairs(Node* head, int target){

//     vector<pair<int,int>> ans;

//     for(Node* i=head;i;i=i->next){

//         for(Node* j=i->next;j;j=j->next){

//             if(i->data + j->data == target)
//                 ans.push_back({i->data,j->data});
//         }
//     }

//     return ans;
// }
  


left=head
right=tail

while(left!=right && right->next!=left)

    sum=left+right

    if(sum==target)
        store
        left++
        right--

    else if(sum<target)
        left++

    else
        right--

