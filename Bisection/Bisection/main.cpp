
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float fx(float x){
    return (x*x*x) + (4*x*x) - 10;
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

int main(){
    float x0,x1,x,y0,y1,y,e,N;
    int step = 1;
    
    cout<<"Enter lower range: "<<endl;
    cin>>x0;
    cout<<"Enter upper range: "<<endl;
    cin>>x1;
    cout<<"Enter acceptable error: "<<endl;
    cin>>e;
    cout<<"\n\n";
    N = NumOfIterations(e);
    cout<<"Number of iterations: "<<N<<endl;
    cout<<"\n\n";
    
    if(y0*y1 > 0){
        cout<<"Incorrect range no roots exist."<<endl;
        return 0;
    }

    do{
        x = (x0+x1)/2;
        y = fx(x);
        cout<<"i = "<<step<<"\t x = "<<setw(5)<<x<<" f(x) = "<<setw(5)<< fx(x)<<endl;
        if( (y0*y1) < 0 ){
            x1 = x;
        }
        else{
            x0 = x;
        }
        step++;
    }while(step <= N);

    cout<<"\t Root: "<<x<<endl;
}
