#include<bits/stdc++.h>
#include<string>
using namespace std;
class PRODUCT
{
private:
    string pid,pname;
    float pcostprice ,psellingprice,margin;
    void Setmarks(void)
    { 
        margin=psellingprice-pcostprice;
        if(margin>0)
        {
            cout<<"Profit"<<endl;
        }
        else
        {
            cout<<"Loss"<<endl;
        }
    }
public:
     void Getdetails(string id,string name,float cp,float sp);
     void Setdetails();
};

void PRODUCT::Getdetails(string id,string name,float cp,float sp)
{
    pid=id;
    pname=name;
    pcostprice=cp;
    psellingprice=sp;
    Setmarks();
}
void PRODUCT::Setdetails()
{
    cout<<"product id is:"<<pid<<endl;
    cout<<"product name is:"<<pname<<endl;
    cout<<"product cost price is:"<<pcostprice<<endl;
    cout<<"product selling price is:"<<psellingprice<<endl;
    cout<<"product margin is:"<<margin<<endl;
}
int main()
{
    PRODUCT data;
    string id,name;
    float cp,sp;
    cout<<"Enter id ,name,cp,sp"<<endl;
    cin>>id>>name;
    cin>>cp>>sp;
    data.Getdetails(id,name,cp,sp);
    data.Setdetails();
    return 0;
}
