#include<iostream>
using namespace std;

// function to print 
void printArr(int arr[],int n,int i){
    if(i==n) {
        return;
    }
   cout<<arr[i]<<" ";

    printArr(arr,n,++i);
 
}

//function to reverse print
void printArrReverse(int arr[],int n){
    if(n<0) {
        return;
    }
   cout<<arr[n]<<" ";
   
    printArrReverse(arr,n-1);
 }

int main(){
int arr[]={22,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
 printArr(arr,n,0);
printArrReverse(arr,n-1);
cout<<"printed";
return 0;
}