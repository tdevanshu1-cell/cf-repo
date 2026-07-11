#include<iostream>
using namespace std;
 
int main()
{
    int n,a=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){a+=4;}
        if(s=="Cube"){a+=6;}
        if(s=="Octahedron"){a+=8;}
        if(s=="Dodecahedron"){a+=12;}
        if(s=="Icosahedron"){a+=20;}
    }
    cout<<a;
    return 0;
}