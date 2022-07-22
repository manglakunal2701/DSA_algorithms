#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;

  string cars[n];
  for(int i=0;i<n;i++)
  {
  	cin>>cars[i];
  }
  for(int i=0;i<n;i++)
  {
  cout << cars[i]<<" ";
  }
  return 0;
}
