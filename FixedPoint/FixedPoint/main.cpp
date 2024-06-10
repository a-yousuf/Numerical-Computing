
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define f(x) (x*x*x*x) - (3*x*x) - 3
#define ff(x) (3*x*x) + 3

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
    float x0,x1,x,y0,y1,e,N;
    int step = 1;
    
    cout<<"Enter lower range: "<<endl;
    cin>>x0;
    cout<<"Enter upper range: "<<endl;
    cin>>x1;
    cout<<"Enter acceptable error: "<<endl;
    cin>>e;
    cout<<"\n\n";
    
    N = NumOfIterations(e);
    y0 = f(x0);
    y1 = f(x1);
    x = x0;
    cout<<"Number of iterations: "<<N<<endl;
    cout<<"\n\n";
    
    if(y0*y1 > 0){
        cout<<"Incorrect range no roots exist."<<endl;
        return 0;
    }
    

    do{
        cout<<"i = "<<step<<"\t x = "<<setw(5)<<x<<" f(x) = "<<setw(5)<< f(x)<<endl;
        x = pow(abs(ff(x)),0.25);
        step++;
    }while(step <= N);
    
    cout<<"\t Root = "<<x<<endl;
}
