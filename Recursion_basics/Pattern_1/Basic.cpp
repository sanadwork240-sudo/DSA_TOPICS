#include <bits/stdc++.h>
using namespace std;
void name(string s){
    int i=0;
    cout<<s<<endl;
    i++;
    if(i<5){
name(s);
    }
}
int main(){
    string s="hello";
    name(s);
    return 0;
}


//  one of the method is using simple single recursive call
#include<bits/stdc++.h>
using namespace std;

void func(n){
    if (n<=1){
        return n;
    }
    return func(n-1)+func(n-2);
}
int main(){
    int n;
    cin>>"enter number:">>n;
    int a =func(n);
    cout<<"result "<<" "<<a;
}
