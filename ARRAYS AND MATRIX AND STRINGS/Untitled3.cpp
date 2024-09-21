#include<iostream>
#include<string>
using namespace std;
char lowercase(char ch){
	if(ch>='a'&&ch<='z')
	return ch;
	else{
		
	int tmp=ch+'A'-'a';
	return tmp;
	}
}
int ifpalidrone(string s){
	int st=0;
	int e=s.length()-1;
	while(st<=e){
		
		if(lowercase(s[st])!=lowercase(s[e]))
		return 0;
		
		else{
			st++;
			e++;
		}
		return 1;
		
	}
	
	
	
}
int main(){
	string str;
	cout<<"enter the string to check if it is palidrone or not"<<endl;
	getline(cin,str);
	string temp="";
	int i=0;
	int end=str.length()-1;
	for(int i=0;i<end;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i])>='A'&&str[i]<='Z'||(str[i])>='0'&&str[i]<='9'){
			temp=temp+str[i];
		}
	}
	str=temp;
	cout<<"output string"<<str<<endl;
//	bool checker;
//	checker=ifpalidrone(str);
//	cout<<"your vlaue is"<<checker<<endl;
int value=ifpalidrone(str);
cout<<"value is"<<value<<endl;
return 0;

}