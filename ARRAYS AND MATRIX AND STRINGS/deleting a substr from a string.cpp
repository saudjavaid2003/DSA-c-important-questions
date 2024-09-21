#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"enter the string"<<endl;
	getline(cin,str);
	string part="abc";
	while(str.length()!=0) && str.find(part)<str.length(){
		str.erase(str.find(part),part.length());
		
	}
	for(int i=0;i<str.length();i++){
		cout<<str[i];
		
	}
	return 0;
	
}