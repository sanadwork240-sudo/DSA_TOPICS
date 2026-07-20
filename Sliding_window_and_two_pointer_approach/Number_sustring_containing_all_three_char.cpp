// eg string='abcba' the subarray with all three char are 5['abc','abcb','abcba','bcba','cba']
//  1) brute force is that i genraste all the substring and if they contain all three char the count ++.
// unoredered_map<char>mpp;
// for(i=0->n-1){
//     mpp.clear();
//     for(j=i->n-1){
//         mpp[a[j]]++;
//         if(mpp.size()=3){
//             count++;
//         }
        
//     }} O(n^2),O(3)

//  using sliding window optimal
l=0;r=0 hash[3]={0};
while(r<n){
    hash[s[r]-'a']++;
    while(hash[0]>0&& hash[1]>0 && hash[2]>0]){
        count+=n-r;
        hash[s[l]]--;
        l++;

    }
    return count;
}
