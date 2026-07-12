#include<iostream>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    bool done =true;
    for(int i=1;i<=n;i++){
        
            if(i%2!=0){
                cout<<string(m,'#')<<"\n";}
            else{if(i%2==0&&done==true){
                cout<<string(m-1,'.')<<'#'<<"\n";
                done=false;
            }
            
                else if(i%2==0&&done==false){
                    cout<<'#'<<string(m-1,'.')<<"\n";
                    done=true;
                }
            
            
         }
        
    
        }
    return 0;
}