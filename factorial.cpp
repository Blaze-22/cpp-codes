//WAC++P to find the factorial of a number using a loop.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<f;
}
