#include<iostream>
using namespace std;



int sum(int n,int ans){
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
         ans = ans + i;
    }
    cout<<ans<<endl;
    

}
int main(){
    int n;
    cin>>n;
    
    cout<<sum(n);


}