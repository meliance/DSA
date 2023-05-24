#include<iostream>
using namespace std;

void bubble_Sort(int arr[], int n){
	for(int i=0; i<n; i++){
	
		for(int j=0; j<n-1; j++){
		
			if(arr[j]<arr[j-1]){
				swap(arr[j], arr[j-1]);
			}
		}
	}
}

void selectionSort(int arr[], int n){
	for(int i=0; i<n; i++){
		int min_index= i;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[min_index])
			   min_index= j;
		}
		if(min_index!=i)
		   swap(arr[min_index], arr[i]);
	} 
}
void insertionSort(int arr[], int n){
	for(int i = 1; i <n;i++){
		int temp = arr[i];
	for(int j = i-1; j >= 0 && temp < arr[j]; j--){
		arr[j]=arr[j+1]; 
        arr[j+1]=temp; 
	}
	}
}
int linearSearch(int arr[], int N, int val){
	for(int i=0; i<N; i++){
		if(val==arr[i])
		return i;
	}
	return -1;
}
int binarySearch(int ar[], int size, int searchVal){
	int low = 0;
	int high = size - 1;
	int mid = (low + high) / 2;
	while(low <= high){
		if(searchVal==ar[mid])
		{
			return mid;
		}
		else if (searchVal>ar[mid])
		{
			low = mid + 1 ;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
void display(int arr[], int size){
	for(int i=0; i<size; i++)
	cout<<arr[i]<<" "<<endl;
}
int main(){
	int arr[]= {4, 6, 7, 2, 8};
	int val;

	int N= sizeof(arr)/ sizeof(arr[1]);
	cout<<"Sorted arrays by bubble sort: \n";
	bubble_Sort(arr, N);
	display(arr, N);
	cout<<"values at position 2 is: "<<arr[2]<<endl;;
	selectionSort(arr, N);
	cout<<"\nsorted arrays by selection sort: "<<endl;
	display(arr, N);
	cout<<"\nsorted array by insertion."<<endl;
	insertionSort(arr, N);
	display(arr, N);
	cout<<"enter the number to be searched "<<endl;
	cin>>val;
	int result=linearSearch(arr, N, val);
	if(result>=0){
		cout<<"the number "<<arr[result] <<" is present in the list with index: "<<result<<endl;
	}
	else
	{
		cout<<"Element is not  present in the array "<<endl;
	}
	cout<<"enter the number to search:"<<endl;
	cin>>val;
	result= binarySearch(arr, N, val);
	if(result== -1)
	{	
		cout<<"the number not found in the list ";
	}
	else
	{
	cout<<"the number "<<arr[result]<<"is present in index "<<result<<endl;
	}
	return 0;
}