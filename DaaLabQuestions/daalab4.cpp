#include <iostream>
using namespace std;
int partition(int array[],int start,int end){
      int pivot = array[end];
    int i = start - 1;

    for(int j = start; j <= end - 1; j++){
        if (array[j] <= pivot){
            i = i + 1;
             swap(array[i],array[j]);
        }
    }
    swap(array[i+1] ,array[end]);
    return i + 1;
}
int quickSort(int arr[],int st,int en,int k){
   if(st<=en){
        int mid = partition(arr, st, en);
        if(mid==k-1) return arr[mid];
        if(mid>k-1)
            return quickSort(arr, st, mid-1, k);
        else return quickSort(arr, mid+1, en, k);
    }
    cout << st << " " << en << "\n";
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k"<<endl;
    int k;
    cin>>k;
    int res=quickSort(arr,0,n-1,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"result is "<<res;

}