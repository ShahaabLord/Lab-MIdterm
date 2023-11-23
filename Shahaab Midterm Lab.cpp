#include<iostream>
using namespace std;
int main(){
int a,i,b,e,c,d,TC;
cout<<"Enter the number of Products";
cin>>a;

 for (i=1;i<=a;i++)
 {
    cout<<"Enter Price of Product"<<i<<":";
    cin>>b;
    cout<<"Enter Quantity of Product"<<i<<":";
    cout<<"Enter Applicable Sales Tax Rate of Product"<<i<<":";
    cin>>d;
    if(c>=10)
    { 
        TC=b*c+d;
        e=TC*10/100;
        cout<<"Total Cost of Product"<<i<<" is "<<TC-e<<endl;

    }
    else 
    {
        TC=b*c+d;
        cout<<"Total Cost of Product"<<i<<" is "<<TC<<endl;
    }
 }