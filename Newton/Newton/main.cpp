
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

// f(x) = x^2 - 6

float fx(float x){
    return x*x - 6;
}

float ffx(float x){
    return 2*x;
}

void Newton(float x,float e){
    int i = 1;
    float r = fx(x)/ffx(x);
    while( abs(r) >= e ){
        r = fx(x)/ffx(x);
        cout<<"i = "<<i<<"\t x = "<<setw(5)<<x<<" f(x) = "<<setw(5)<< fx(x)<<endl;
        x -= r;
        i++;
    }
    cout<<"\t Root: "<<x<<endl;
}
int main() {
    float x0,e;
    
    cout<<"Enter intial x: "<<endl;
    cin>>x0;
    cout<<"Enter acceptable error: "<<endl;
    cin>>e;
    cout<<"\n\n";
    
    Newton(x0, e);
}
