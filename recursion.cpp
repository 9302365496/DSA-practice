//stair case question
#include <iostream>
using namespace std;

int stair(int n){
	if(n==0 || n==2) return n;
	int ways = stair(n-1)+stair(n-2);
	return ways;
	
}
int main(){
	int n;
	cout<<"enter the strares:";
	cin>>n;
	int ans=stair(n);
	cout<<ans<<" ";
	return 0;
}

	

