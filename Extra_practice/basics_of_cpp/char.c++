#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	if(s=="Long"){
		cout<<sizeof(long);
	}
	else if(s=="Double"){
		cout<<sizeof(double);
	}
	else if(s=="Integer"){
		cout<<sizeof(int);
	}
	else if(s=="Float"){
		cout<<sizeof(float);
	}
	else if(s=="Character"){
		cout<<sizeof(char);
	}
	else{
		cout<<"Invalid";
	}
	return 0;
}