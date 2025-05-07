#include<iostream>
#include<string>
using namespace std;

string toLower(string str){
	for(int i=0;i<str.length();i++)
	{
		str[i]=tolower(str[i]);
	}
	return str;
}

int main(){
	cout<<"Hello Jay"<<endl;
	cout<<"*********************Let's Start The ChatBot***************"<<endl;
	
	string userinput;
	getline(cin,userinput);
	cout<<"Okayy!!! So You Are Asking for" << userinput;
	
	string imp=toLower(userinput);
	
	if(imp=="daytoday"|| imp=="hii"){
		cout<<"  Today is Wednesday";
	}
	
	return 0;
}
