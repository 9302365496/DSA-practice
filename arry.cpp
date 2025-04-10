#include<iostream>
using namespace std;

int fun(int n){
	if(n==0){
		return 1;
	}
	else{
		return 7+fun(n-2);
	}
	
}
int main(){
	cout<<fun(4);
	return 0;
//	int arr[]={7,1,30,45,87,32};
//	
//	
//	int n=sizeof(arr)/4;
//	int brr[n];
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	//int brr[n];
//	for(int i=0;i<n;i++){
//		brr[i]=arr[n-1-i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<brr[i]<<" ";
//	}
//int i=0,j=n-1;
//while(i<j){
//	swap(arr[i],arr[j]);
//	i++;
//	j--;
//}
//for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	return 0;
//
//}
	
//	int mx=INT_MIN;
//	int mk=INT_MAX;
//	for(int i=0;i<n;i++){
//		//if(mx<arr[i])
//		mx= max (mx,arr[i]);
//		mk=min(mk,arr[i]);
//	}
//	cout<<mx<<" "<<mk; 

//int mx=INT_M;
//int smx=INT_MAX;
//for(int i=0;i<n;i++){
//	if(mx<arr[i])
//	mx=arr[i];
////	mx=max(mx,arr[i]);
//}
//for(int i=0;i<n;i++){
//	if(smx>arr[i] && arr[i]!=mx)
//		smx=arr[i];
//	//	smx=smx(mx,arr[i]);
//	
//}
//cout<<mx<<" "<<smx;


}

