#include<iostream>
using namespace std;

void mergesort(int *arr,int s,int e){
	if(s>=e){
		return ;
	}
	mergesort(arr,s,mid);
		mergesort(arr,mid+1,e);
			merge(arr,s,e);

}
int main(){
	int arr[6]={5,2,4,6,1,3};
	int n=6;
}
