// // we have to find the days that are the minimum or less tghan that date if no then 1; eg 7 3 4  2
// ans 1 1 2 1

// 1) brute force check for every element
// for(int i=0->n-1){
//     cnt=1;
//     for(j=i->>=0){
//         if(a[j]<=a[i])cnt++
// else{
//     break;
// }    }
// ans[i]=cnt;
// // }return ans;
// 2) optimal solution- so the solution is to find the number smaller or equal to the current number this can be done using the previous grater element intution in which answer can be concluded using the i-pge index and if not find then ans[i]=i+1;   TC=O(2N) ans SC=O(2N)
for(i=0->n-1){
    while(!st.empty && a[st.top]<=a[i])st.pop();
    if(st.empty)ans[i]=i+1;
    else{
        ans[i]=i-st.top;
    }
    return ans;
}