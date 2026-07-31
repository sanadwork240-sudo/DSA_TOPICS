// we have to view the top whenever the -ve comes and compare it with the st.top also we have one more edge case that if st.top contains the -ve number or st.empty is true then only insert the -ve number 
TC=O(2N) SC=O(n)
stack<int>st;
for(int i=0;i<n;i++){
    if(a[i]>0)st.push(a[i]);
    else{
        while(!st.empty() && st.top()<a[i] && st.top>0)st.pop();
        if(!st.empty() &&st.top()==a[i])st.pop();
        else if( st.empty || st.top<0)st.push(a[i]);
    }
    return st;
}