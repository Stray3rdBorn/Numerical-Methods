#include<bits/stdc++.h>
using namespace std;
int main()
{
  float x1=-4,x2=3,f1,f2,f0,x0,e=0.05;
   while(1){

        f1=(x1*x1)+3*x1-5;
    f2=(x2*x2)+3*x2-5;
    if(f1*f2>0){
        cout << "x1 and x2 do not braket.";
        break;
    }
    x0=(x1+x2)/2;
    f0=(x0*x0)+3*x0-5;
    if(abs(f0)<e)
        {
            cout << "Root found :" << x0 << endl;
            break;
        }
        else
        {
            if(f1*f0<0){
                x2=x0;
            }
            else{
                x1=x0;
            }
        }

   }
    return 0;
}
