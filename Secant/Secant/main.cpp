
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float fx(float x){
    return x*x - 6;
}

void Secant(float x0,float x1,float e){
    int i=1;
    float x,xm,r;
    if( (fx(x0)*fx(x1)) < 0){
        do{
            x = (x0*fx(x1) - x1*fx(x0))/(fx(x1) - fx(x0));
            r = fx(x0)*fx(x);
            
            x0 = x1;
            x1 = x;
            if(r == 0){
                break;
            }
            xm = (x0*fx(x1) - x1*fx(x0))/(fx(x1) - fx(x0));
            cout<<"i = "<<i<<"\t x = "<<setw(5)<<x<<" f(x) = "<<setw(5)<< fx(x)<<endl;
            x -= r;
            i++;
        }
        while(fabs(xm-x) >= e);
    }
    else{
        cout<<"Invalid range."<<endl;
        return ;
    }
    cout<<"\t Root: "<<x<<endl;

}
int main(){
    float x0,x1,e;
    
    cout<<"Enter intial x0: "<<endl;
    cin>>x0;
    cout<<"Enter intial x1: "<<endl;
    cin>>x1;
    cout<<"Enter acceptable error: "<<endl;
    cin>>e;
    cout<<"\n\n";
    
    Secant(x0, x1, e);
}
