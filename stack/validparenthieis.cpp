#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str="()[]{}";
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='()'||ch=='['||ch=='{')
        s.push(ch);
        else{
            if(!s.empty()){
            char top=s.top();
            if(ch==')'&& top=='('||ch=='}'&&top=='{'||ch==']'&&top=='[')
            s.pop();
            else
            return false;
            }
            else
            return false;
            
            
        }
    }




}

