#include<iostream >
using namespace std;

class counter{

    int n;
    static int count;
    public:
    void getdata(int num){
        //int a;
        //n = num;
        count++;

    }
    void show(){
        cout<<"\n the value is ="<<count<<endl;
    }
};
int counter::count;
int main(){
    counter s1 , s2 , s3;
    s1.show();
    s2.show();
    s3.show();
    counter s4;
    s4.show();
    s1.getdata(100);
    s2.getdata(200);
    s3.getdata(300);
    s4.getdata(400);
    cout<<"\n after calling the get data function"<<endl;
    s1.show();
    s2.show();
    s3.show();
    s4.show();

    return 0;

}