#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define ll long long

void pushElementAtLast(stack<int> &st, int number){   
    if(st.empty()){
        st.push(number);
        return;
    }
    int prevEle = st.top();
    st.pop();
    pushElementAtLast(st,number);
    st.push(prevEle);
}


int main(){
    fast;
    int number = 9;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    pushElementAtLast(st,number);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}

// OUTPUT:
// 3219