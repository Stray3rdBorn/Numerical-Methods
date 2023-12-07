#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x1,x2,e=0.01;
    cin >> x1>>x2;
    while(1)
    {
        cout << "x1=" << x1 << "\nx2=" << x2 << endl;
        float f1=(x1*x1*x1)+(3*x1)-6;
        cout <<"f1="<< f1 << endl;
        float f2=(x2*x2*x2)+(3*x2)-6;
        cout <<"f2= " <<f2 << endl;
        float x0=x1-(f1*(x2-x1))/(f2-f1);
         cout <<"x0= " << x0 << endl ;
        float f0=(x0*x0*x0)+(3*x0)-6;
        cout <<"f0= " << f0 << endl ;
        if(abs(f0)<e)
        {
            cout << "\nRoot found :" << x0 << endl;
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


