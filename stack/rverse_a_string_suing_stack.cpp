#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string str = "saud";
    stack<char> st;
    
    // Push all characters of the string onto the stack
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        st.push(ch);
    }
    
    string ans = "";
    
   
    while(!st.empty()){ 
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    

    cout << ans << endl;

    return 0;
}
