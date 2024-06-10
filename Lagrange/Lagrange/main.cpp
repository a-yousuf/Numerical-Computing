
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float fx(float x){
    return x*x + x;
}

void OneDegree(){
    float x0,x1,x;
    cout<<"\t Two Points. \n";
    cout<<"Enter x0: "<<endl;
    cin>>x0;
    cout<<"Enter x1: "<<endl;
    cin>>x1;
    cout<<"Enter x: "<<endl;
    cin>>x;
    
    float y0,y1,L0,L1,ans;
    
    y0 = fx(x0);
    y1 = fx(x1);
    
    L0 = (x-x1)/(x0-x1);
    L1 = (x-x0)/(x1-x0);
    
    ans = (L0*y0) + (L1*y1);
    
    cout<<"x0 = "<<x0<<"\t y0 = "<<y0<<endl;
    cout<<"x1 = "<<x1<<"\t y1 = "<<y1<<endl;
    cout<<"Interpolated value at "<<x<<" = "<<ans<<endl;
    cout<<"\n \n";
}

void TwoDegree(){
    float x0,x1,x2,x;
    cout<<"\t Three Points. \n";
    cout<<"Enter x0: "<<endl;
    cin>>x0;
    cout<<"Enter x1: "<<endl;
    cin>>x1;
    cout<<"Enter x2: "<<endl;
    cin>>x2;
    cout<<"Enter x: "<<endl;
    cin>>x;
    
    float y0,y1,y2,L0,L1,L2,ans;
    
    y0 = fx(x0);
    y1 = fx(x1);
    y2 = fx(x2);
    
    L0 = ((x-x1)*(x-x2))/((x0-x1)*(x0-x2));
    L1 = ((x-x0)*(x-x2))/((x1-x0)*(x1-x2));
    L2 = ((x-x0)*(x-x1))/((x2-x0)*(x2-x1));
    
    
    ans = (L0*y0) + (L1*y1) + (L2*y2);
    
    cout<<"x0 = "<<x0<<"\t y0 = "<<y0<<endl;
    cout<<"x1 = "<<x1<<"\t y1 = "<<y1<<endl;
    cout<<"x2 = "<<x2<<"\t y2 = "<<y2<<endl;
    cout<<"Interpolated value at "<<x<<" = "<<ans<<endl;
    cout<<"\n \n";
}

void ThirdDegree(){
    float x0,x1,x2,x3,x;
    cout<<"\t Four Points. \n";
    cout<<"Enter x0: "<<endl;
    cin>>x0;
    cout<<"Enter x1: "<<endl;
    cin>>x1;
    cout<<"Enter x2: "<<endl;
    cin>>x2;
    cout<<"Enter x3: "<<endl;
    cin>>x3;
    cout<<"Enter x: "<<endl;
    cin>>x;
    
    float y0,y1,y2,y3,L0,L1,L2,L3,ans;
    
    y0 = fx(x0);
    y1 = fx(x1);
    y2 = fx(x2);
    y3 = fx(x3);
    
    L0 = ((x-x1)*(x-x2)*(x-x3))/((x0-x1)*(x0-x2)*(x0-x3));
    L1 = ((x-x0)*(x-x2)*(x-x3))/((x1-x0)*(x1-x2)*(x1-x3));
    L2 = ((x-x0)*(x-x1)*(x-x3))/((x2-x0)*(x2-x1)*(x2-x3));
    L3 = ((x-x0)*(x-x1)*(x-x2))/((x3-x0)*(x3-x1)*(x3-x2));
    
    ans = (L0*y0) + (L1*y1) + (L2*y2) + (L3*y3);
    
    cout<<"x0 = "<<x0<<"\t y0 = "<<y0<<endl;
    cout<<"x1 = "<<x1<<"\t y1 = "<<y1<<endl;
    cout<<"x2 = "<<x2<<"\t y2 = "<<y2<<endl;
    cout<<"x3 = "<<x3<<"\t y3 = "<<y3<<endl;
    cout<<"Interpolated value at "<<x<<" = "<<ans<<endl;
    cout<<"\n \n";

    
}
int main(){
    
    OneDegree();
    TwoDegree();
    ThirdDegree();
    
}
