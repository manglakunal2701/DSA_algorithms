#include<iostream>
#include<stack>
using namespace std;
int prec(char a){
    if(a=='^')
        return 3;
    else if(a=='*' || a=='/')
        return 2;
    else if(a=='+' || a=='-')
        return 1;
    else
    return -1;

}
string infixtopostfix(string inf){
    stack<char> st;
      string res;
    for(int i=0;i<inf.length();i++)
    {


         if((inf[i]>='a' && inf[i]<='z') || (inf[i]>='A' && inf[i]<='Z') ){
            res=res+inf[i];
        }
        else if(inf[i]=='('){
            st.push(inf[i]);
        }
        else if(inf[i]==')'){
            while(!st.empty() && st.top()!='('){
                    res+=st.top();
                    st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
                while(!st.empty() && prec(st.top())>prec(inf[i])){
                    res+=st.top();
                    st.pop();
                }
                st.push(inf[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
int main(){
    // string inf;
    // cout<<"Enter the string"<<endl;
    // cin>>inf;
    cout<<infixtopostfix("(a+b/c)*(a/k-l)");
    return 0;
}
