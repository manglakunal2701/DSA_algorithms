#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    int comp=0,f=0;
    for(int i=0;i<n;i++){
        f=0;
        for(int j=0;j<n-1-i;j++){
              comp++;
            if(arr[j]>arr[j+1]){
                f=-1;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(f==0){
            break;
        }
    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Total Number of comparisons are: "<<comp<<endl;
}
void insertionSort(int arr[],int n){
    int j=0;
    int comp=0;
    for(int i=0;i<n;i++){
        int c=arr[i];
        j=i-1;
        while(c<arr[j] && j>=0){
                arr[j+1]=arr[j];
                comp++;
                j--;
        }
        arr[j+1]=c;
    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Total Number of comparisons are: "<<comp<<endl;
}
void selectionSort(int a[],int n){
     int pos,min=0,comp=0;
    for(int i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            comp++;
          if(min>a[j])
          {
              min=a[j];
              pos=j;
          }
        }
        if(pos!=i)
        {
            a[pos]=a[i];
            a[i]=min;
        }
    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"Total Number of comparisons are: "<<comp<<endl;
}
int main(){
    int n;
    cout<<"Enter the number pf elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   // bubbleSort(arr,n);
   // insertionSort(arr,n);
   selectionSort(arr,n);
}

