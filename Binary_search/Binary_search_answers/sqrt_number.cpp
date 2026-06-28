class Solution {
public:
    int floorSqrt(int n)  {


        //  brute solution
    // int ans =-1;
    //   for (int i =1;i<=n;i++){
    //     if((i*i)<=n){
    //         ans =i;
    //     }
    //     else{
    //         break;
    //     }
    //   }
    // //   o(n) 
    //   return ans;

// optimal solution binary search 
int low=1;
 int high =n;
 while(low<=high){
    int mid=(low+(high-low)/2);
    long long square =1LL*mid*mid;
    // 1LL forces the expression to be evaluated in long long (64-bit).
// Without it, if both operands are int, multiplication happens in int first,
// so overflow can occur before storing the result in long long.
// Example: 50000 * 50000 overflows int, but 1LL * 50000 * 50000 is safe.
    if(square<=n){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
 }
return high;
    }
};