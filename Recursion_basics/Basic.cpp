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