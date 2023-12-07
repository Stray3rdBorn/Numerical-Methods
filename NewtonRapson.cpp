#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x0,e=0.01;
    cin >> x0;
    while(1)
    {
        float f1=(x0*x0*x0)+(3*x0)-6;
        float f2=(3*x0*x0)+3;
        float x1= x0-(f1/f2);
        float f3=(x1*x1*x1)+(3*x1)-6;
        if(abs(f3)<e)
        {
            cout << "Root found :" << x1 << endl;
            break;
        }
        else
        {
            x0=x1;
        }
    }

    return 0;
}
