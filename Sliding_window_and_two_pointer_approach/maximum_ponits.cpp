class Solution{
  public:
    int maxScore(vector<int>& a , int k){
    //    1) brute force that can be done like i=0->k and j=0->k-i  element combination that will give the andwer like  O(k^2) TC
    // 2) OPTIMAL solution is like fiorst add left k elements to the sum and then one ont one decrease them till they are 0 to hget the maxi combination 

int maxi=INT_MIN;
int lsum =0;

    for(int i =0;i<k;i++){
         lsum+=a[i];

    }
    int rsum=0;
    maxi=lsum;
    int r=a.size()-1;
    for(int i=k-1;i>=0;i--){
      lsum-=a[i];
      rsum+=a[r];
      r--;
      maxi = max(maxi, lsum + rsum);
    }
    return maxi;
    }
};