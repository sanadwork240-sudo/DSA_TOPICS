// the find max area of the retangle formed we need the height*width the height is a[i]itself we need the width and the idea if width is nse-pse-1 maxarea=max(maxarea,a[i]*(nse-pse-1))for that a[i]

// the optimal solution will use the nse and pse but differently instead of getting them seprately the idea is to get them while mnoving only this can be done for previous smaller element index the index can be stored in the stack till the small element comes if it comes then it will be the nse of the elemnt in st.top 

for(int i=0->n-1){
    while(!st.empty()&&st.top>=a[i]){
        ind=st.top()
        st.pop;
        nse=i
        pse=st.empty()?-1:st.top()
        maxarea=max(maxarea,a[ind]*(nse-pse-1));

    }
    st.push(i);
    while(!st.empty()){
        nse=n;
        ind=st.top
        st.pop
        pse=st.empty()?-1:st.top
       maxarea=max(maxarea,a[ind]*(nse-pse-1));
    }
}
return maxarea;