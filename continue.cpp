#include<iostream>
using namespace std;

int main(){
    int a=1;
    int pocketmoney=3000;
    for (int date = 1; date <= 30; date ++)
    {
        if (date % 2 == 0){
            continue;
        }
        if (pocketmoney==0)
        {
            break;
        }
        
        cout<<"you can go"<<endl;
        

        pocketmoney = pocketmoney - 300;
    }
    
}