#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define ll long long

bool solve(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        char c=s[i];
        if(c=='(' || c=='+' || c=='-' || c=='/' || c=='*'){
            st.push(c);
        }
        else{
            if(c==')'){
                bool red=true;
                while(st.top()!='('){
                    char ch=st.top();
                    if(ch=='+' || ch=='-' || ch=='/' || ch=='*'){
                        red=false;
                    }
                    st.pop();
                }
                if(red==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main(){
    fast;
    string s = "((a)*b+(c-d))";
    cout<<(solve(s)?"true":"false");
    return 0;
}

// OUTPUT:
// true