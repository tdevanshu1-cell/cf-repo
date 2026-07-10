#include<iostream>
using namespace std;
 
int main()
{
    int n,a=0;
    cin >>n;
    if(n>=100){
        a+=n/100;
        n=n%100;
       
    }
    if(n>=20&&n<100){
        a+=n/20;
        n=n%20;
   
    }
    if(n>=10&&n<20){
        a+=n/10;
        n=n%10;
        
    }
    if(n>=5&&n<10){
        a+=n/5;
        n=n%5;
        
    }
    if(n>=1&&n<5){
        a+=n/1;
        n=n%1;
    }
    cout<<a;
 
    return 0;
}