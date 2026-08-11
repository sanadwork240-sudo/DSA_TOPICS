// Step 1: Reverse and Swap ParenthesesReverse the entire infix expression string.Swap every opening parenthesis ( with a closing parenthesis ), and every ) with (.
// Step 2: Scan and Convert to PostfixScan the modified expression from left to right and use a stack for operators:Operands (letters or numbers): Add them directly to your output string.Right Parenthesis ): Push it onto the stack.Left Parenthesis (: Pop from the stack and add to the output until you find a right parenthesis ). Discard both parentheses.Operators (+, -, *, /, ^):Pop operators from the stack and add them to the output as long as they have strictly higher precedence than the current operator.(Note: For right-associative operators like ^, pop only if strictly higher; for left-associative operators like +, -, *, /, pop if higher or equal precedence).Push the current operator onto the stack.At the end of the scan, pop any remaining operators from the stack to the output
// step 3 reverse the ans;

int i =0
reverse (s);
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