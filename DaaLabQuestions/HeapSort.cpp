#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int lChild=2*i+1;
    int rChild= 2*i+2;
    int max=i;
    if(lChild<n && arr[lChild]>arr[max]){
        max=lChild;
    }
    if(rChild<n && arr[rChild]>arr[max]){
        max=rChild;
    }
    if(max!=i){
        swap(arr[i],arr[max]);
        heapify(arr,n,max);
    }
}
// void heapSort(int arr[], int n)
// {
//     // Build heap (rearrange array)
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);
  
//     // One by one extract an element from heap
//     for (int i = n - 1; i >= 0; i--) {
//         // Move current root to end
//         swap(arr[0], arr[i]);
  
//         // call max heapify on the reduced heap
//         heapify(arr, i, 0);
//     }
// }
void buildHeap(int arr[],int n){
   int start=n/2-1;
    for(int i=start;i>=0;i--){
        heapify(arr,n,i);
    }
}
void extract_max(int arr[],int &n){
    swap(arr[0],arr[n-1]);
    n=n-1;
    heapify(arr,n,0);
}
int main(){
    int n;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //heapSort(arr,n);
    int cap=n;
    buildHeap(arr,n);
    for(int i=0;i<cap;i++){
        extract_max(arr,n);
    }
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<cap;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}