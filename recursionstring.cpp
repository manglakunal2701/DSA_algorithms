#include<iostream>
using namespace std;
void reversestring(string arr){
    if(arr.length()==0)
        return ;
    reversestring(arr.substr(1));
    cout<<arr[0];
}
void replacePi(string arr){
    if(arr.length()==0)
        return ;
    if(arr[0]=='p' && arr[1]=='i'){
        cout<<"3.14";
        replacePi(arr.substr(2));
    }
    else{
        cout<<arr[0];
        replacePi(arr.substr(1));
    }
    
}
string removeduplicate(string arr){
    if(arr.length()==0)
        return "";
    char ch = arr[0];
    string ans= removeduplicate(arr.substr(1));
    if(ch==ans[0])
        return ans;
    else
        return (ch+ans);
     
}
string moveallx(string arr){
    if(arr.length()==0){
        return "";
    }
    char ch= arr[0];
    string ans = moveallx(arr.substr(1));
    if(ch=='x')
        return (ans+ch);
    return (ch+ans);
    
}
void subseq(string arr , string ans){
     if(arr.length()==0){
         cout<<ans<<endl;
        return ;
    }
    char ch = arr[0];
    string ros = arr.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}
void permutation(string arr,string ans){
      if(arr.length()==0){
         cout<<ans<<endl;
        return ;
    }
    for(int i=0;i<arr.length();i++){
        char ch=arr[i];
        string res = arr.substr(0,i)+arr.substr(i+1);
        permutation(res,ans+ch);
    }
}

int main()
{
    // reversestring("Kunal");
    // replacePi("pppppiiiiipi");
    //cout<<removeduplicate("aaaabbbbbccccc")<<endl;
    // cout<<moveallx("axxbdx")<<endl;
    //  subseq("ABC","");         //empty string is taken because we will add word with empty string;
        permutation("ABC","");

}