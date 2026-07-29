// 1) Brute force is like for i =0->n-1 check its next all elements like j=i+1->n-1 if a[j]>a[i] add it to the ansewr nge[n]  tc =o(n^2) and sc= o(n)of nge
//  the optimal solution can be done using the stack data structure like this from right element lets add it to the stack , we cannot use the solution as used in the leaders question as we dont have to strore the max element einstead we have store the next greater element 

stack<int> st;
nge[n];
for (i=n-1 ->0){
    while(!st.empty()&& st.top()<a[i]){
        st.pop();
    }
    if(st.empty) nge[i]=-1;
    else{
        nge[i]=st.top()
    }
st.push(a[i])
}