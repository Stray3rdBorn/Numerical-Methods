#include <bits/stdc++.h>
using namespace std;

int main() {
     float x1=0,y1=0,z1=0,x2,y2,z2,e1,e2,e3 ,e=0.01;
   while(1){


    x2=(12-2*y1-z1)/5;
    y2=(15-x2-2*z1)/4;
    z2=(20-x2-2*y2)/5;

    if(fabs(x1-x2)<e && fabs(y1-y2)<e && fabs(z1-z2)<e){
         cout<<"Solution: x = "<< x2<<", y = "<< y2<<" and z = "<< z2;
         break;

    }
    else{
        x1=x2;
        y1=y2;
        z1=z2;
    }

   }

    return 0;
}
