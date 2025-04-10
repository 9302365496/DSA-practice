#include<iostream>
using namespace std;
char toup(char ch){
	if(ch>='A' && ch<='Z'){
		return ch;
	}
	else{
		char k=ch-'a' + 'A';
		return k;
	}
}
char tolower(char ch){
	if(ch>='a' && ch<='z'){
		return ch;
	}
	else{
		char temp=ch-'A' + 'a';
		return temp;
	}
}
bool checkpalin(char name[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		if(name[s]!=name[e]){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1;
}
int getlen(char name[]){
	int cnt=0;
	for(int i=0; name[i]!='\0';i++){
		cnt++;
	}
	return cnt;
}
int reverse(char name[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		swap(name[s++],name[e--]);
	}
}
int main(){
char name[20];
cout<<"enter uour name "<<endl;
cin>>name;
cout<<"your name is "<<name<<endl;
int len=getlen(name);
//cout<<"length of string "<<len<<endl;
//reverse(name,len);
//cout<<"your name is "<<name<<endl;
//checkpalin(name,len);
cout<<"palindrome "<<checkpalin(name,len)<<endl;
cout<<"character is "<<tolower('b')<<endl;
cout<<"character is "<<tolower('B')<<endl;
cout<<"character is "<<toup('a')<<endl;

}
