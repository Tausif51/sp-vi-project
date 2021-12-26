#include<iostream>
using namespace std;

int main()
{
    int a=10;
    float n=10.0;
    double h=10.00;
    cout<<"enter a number"<<endl;
    cin>>a;
    if(a>10 && a<20){
        cout<<"pass\n";
    }
    else if (a<=10 && a>8){
        cout<<"avg\n";
    }
    else{
        cout<<"fail\n";
    }

    string s;
    cin>>s;//scanf
    cout<<s<<endl;//printf

}
