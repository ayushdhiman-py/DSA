#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define ll long long
int main(){
    fast;

    //simple or brute force approach//
    stack<int> st;
    //vector is used to store stack elements//
    vector<int> temp;
    //for even number of elements//
    st.push(1);   
    st.push(2);   
    st.push(3);   
    st.push(4);
    //for odd number of elements//
    // st.push(1);   
    // st.push(2);   
    // st.push(3);   
    // st.push(4);   
    // st.push(5);

    int size = st.size();
    int count = 0;   
    while(count<size){
        if(count!=ceil(size/2)){
            int tempEle = st.top();
            st.pop();
            temp.push_back(tempEle);
        }
        else{
            st.pop();
        }
        count++;
    }
    //removing all the elements from the stack//
    while(!st.empty()){
        st.pop();
    }
    //pushing all the elements into the stack from the temp vector//
    for(int i=temp.size()-1; i>=0; i--){
        st.push(temp[i]);
    }
    //printing elements in the stack//
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}

// OUTPUT:
// 5421
// 431