#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define ll long long

bool validParenthesis(string s){
    stack<char> st;
    unordered_set<char> open = {'{','(','['};
    for(int i=0; i<s.length(); i++){
        if(open.find(s[i])!=open.end()){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                if( (s[i]=='}' && st.top()=='{') ||
                    (s[i]==']' && st.top()=='[') || 
                    (s[i]==')' && st.top()=='(') ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }    
}

int main(){
    fast;
    string s = "[{({[]})}]";
    cout<<(validParenthesis(s)?"True":"False");
    return 0;
}

// OUTPUT:
// string s = "[{({[]})}]";
// True

// string s = "[{({[]})}";
// False