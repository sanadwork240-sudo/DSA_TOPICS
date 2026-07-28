//  brute force solution is to get the min of the stack store the elements in pair with minimum till that eg 10,10 next 12,10 and pop st.top.second to get the minimum 

// better solution to optimize the space of saving the element is to store the minimum in the integer but the problem it has is if we want to get back to the previous min after a pop we cannot backtrack it so we sill store it in such a way that even after a pop of minimum we can get back to previous minimum that will be    in the mini=10 we will store val but in the stack we will store 2*val-prevmini 
stack<int>st;
push(val){
    if(st.empty()){
        mini=val;
        st.push(val);
    }

    else {
        if(val>mini)st.push(val);
        else{
            st.push(2*val-mini);
            mini=val;
        }
    }
}
pop(){
    if(st.empty())return null;
    int x=st.top();
    st.pop();
    if(mini>x)mini=2*mini-x;
}