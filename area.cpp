#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int r;
    cin>>r;
    float a=r*r*3.14;
    cout<<fixed<<setprecision(2)<<"Area of circle is "<<a;
    return 0;
}
