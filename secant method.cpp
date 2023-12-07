#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x1,x2,e=0.01;
    cin >> x1>>x2;
    while(1)
    {
        float f1=(x1*x1*x1)+(3*x1)-6;
        cout <<"f1="<< f1 << endl;
        float f2=(x2*x2*x2)+(3*x2)-6;
        cout <<"f2= " <<f2 << endl;
        float x3=x2-(f2*(x2-x1))/(f2-f1);
         cout <<"x3= " << x3 << endl ;
        float f3=(x3*x3*x3)+(3*x3)-6;
        if(abs(f3)<e)
        {
            cout << "\nRoot found :" << x3 << endl;
            break;
        }
        else
        {
            x1=x2;
            x2=x3;
        }
    }

    return 0;
}

