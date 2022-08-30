#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a ;
    for (int a = 2; a < n; a++)
    {
        if (n%a==0)
        {
            cout<<"it is not prime no";
            break;
        }
        else{
            cout<<"it is a prime";
            break;
        }
        
        
        
    }

    

    
    
}