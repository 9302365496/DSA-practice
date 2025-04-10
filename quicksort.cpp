#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
	
	int pivot = arr[s]; //pivot nikala
	int cnt=0;	//cont kitne chote he pivot se loop chalete he
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pivot){
			cnt++;//right place pivot ki
		}
	}
	//place pivot right position
	int pivotindex = s+cnt;
	swap(arr[pivotindex],arr[s]);
	
	// left and right wala part sidha lete he
	int i=s,j=e;
	
	while(i<pivotindex && j>pivotindex){
		while(arr[i]<=pivot){
			i++;
		}
			while(arr[j]>pivot){
			j--;
		}//yadi false ho jaye
		if(i<pivotindex && j>pivotindex){
			swap(arr[i++],arr[j--]);
		}
	}
	return pivotindex;
}

void quicksort(int arr[],int s,int e){
	//base case
	if(s>=e)
	return ;
	
	//partion karenge
	int p = partition(arr,s,e);
	
	//left wala sort karenge
	quicksort(arr,s,p-1);
	
	//right wala sort karenge
	quicksort(arr,p+1,e);
	
}
int main(){
	int arr[]={9,3,5,1,7,10,2};
	int n = sizeof(arr)/4;
	quicksort(arr,0,n-1);//call
	cout<<"sorted array are:"<<endl;
	for(int i=0;i<n;i++){//sorted arr ko print
	
		cout<<arr[i]<<" ";
	}cout<<endl;
}
