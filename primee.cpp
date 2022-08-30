#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool rat = 0;
    for(int i=2; i<=sqrt(n); i++){
        if (n%i==0)
        {
            cout<<"NON PRIME";
            rat = 1;
            break;

        }
        
        
    }
    if (rat == 0)
    {
        cout<<"PRIME";
    }

    return 0;
    
}