// 1) BRUTRE FORCE in whuch i will find every subarray and calculate maxlength if no of zeros is less than k if greater than break

// the optimal solution involve the sliding window using the two pointers 

l=0;r=0;maxlen=0;zeros=0;
while(r<n){
    if(a[r]==0)zeros++;
    if(zeros>k){
        if(a[l]==0)zeros--;
    l++;
    }
    if(zeros<=k){
        maxlen=max(maxlen,r-l+1);
    }
    r++;
}
//  TC =O(N)
// SC=O(1)