#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float fx(float x){
    return x*x*x + x - 5;
}

int NumOfIterations(float e){
    int N;
    int temp = 0;
    while(e<10){
        e = e*10;
        temp++;
    }
    temp = temp/2;
    N = temp/log10(2);
    return N;
}

void FalsePosition(float a,float b,float e){
    if(fx(a)*fx(b) >= 0 ){
        cout<<"Invalid range."<<endl;
        return;
    }
    int N = NumOfIterations(e);
    float c = a;
    for(int i = 0 ; i <= N ; i++){
        
        c = (( a*fx(b)- b*fx(a) )/( fx(b) - fx(a) ));
        cout<<"i = "<<i<<"\t x = "<<setw(5)<<c<<" f(x) = "<<setw(5)<< fx(c)<<endl;
        if(fx(c) == 0){
            break;
        }
        else if( fx(c)*fx(a) < 0){
            b = c;
        }
        else{
            a = c;
        }
    }
    cout<<"Root = "<<c<<endl;
}

int main(){
    float a,b,e;
    
    cout<<"Enter lower range: "<<endl;
    cin>>a;
    cout<<"Enter upper range: "<<endl;
    cin>>b;
    cout<<"Enter acceptable error: "<<endl;
    cin>>e;
    
    FalsePosition(a, b, e);
}
