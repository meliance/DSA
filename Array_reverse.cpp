#include <iostream>
using namespace std;

int main() {
  
int arr[6];//={1,2,3,4,5,6};
cout<<"enter 6 elements of array\n";
for(int i=0;i<6;i++)  {
cin>>arr[i];  
}
  
int size=sizeof(arr)/sizeof(int);
int min=0,max=size;  
cout<<"THE ARRAY BEFORE REVERSED\n";

for(int i=0;i<size;i++)  {
cout<<arr[i]<<" ";  
}
cout<<endl;
  
for(int i=0;i<size/2;i++){
max=max-1;
int t=arr[max];
arr[max]=arr[min];
arr[min]=t;
min++;
  
  
    
}  
cout<< "THE ARRAY AFTER REVERSED\n";
for(int i=0;i<size;i++)  {
cout<<arr[i]<<" ";
  
}  
cout<<endl<<arr[3];  
  
  
  return 0;
}