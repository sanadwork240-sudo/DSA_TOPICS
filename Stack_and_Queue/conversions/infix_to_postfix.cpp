// Operands: If you see a number or letter, add it straight to the output.
// Left Parenthesis (: Push it onto the stack.

// Right Parenthesis ): Pop operators from the stack to the output until you find the matching left parenthesis (, then discard both parentheses.

//     *Operators (+, -, , /, ^): Pop operators from the stack to the output while they have greater or equal precedence (or higher precedence for right-associative ^) than the current operator. Then, push the current operator onto the stack.End of Expression: Pop any remaining operators from the stack to the output

int i =0
while(i<n){
if(s[i]>='A'&& s[i]<='Z' || s[i]>='a'&& s[i]<='z' ||s[i]>=0 && s[i]<= 9){
    ans+=s[i];
}
else if(s[i]=='('){
    st.push(s[i]);
}
else if(s[i]==')') {
    while(!st.empty && st.top!='('){
    ans+=st.top ; st.pop();
}
   st.pop();
}
else{
    while(st.empty && priority(s[i])<=priority(st.top)){
        ans+=st.top;
        st.pop();
    }
    st.push(s[i]);
}

i++;
}
while(!st.empty){
    ans+=st.top;
    st.pop();
}
return ans;
// TC=O(2N)
// SC=O(2N)