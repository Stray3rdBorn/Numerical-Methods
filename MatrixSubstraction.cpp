#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,r,c;
    cin >>r>>c;
    int f[r][c],s[r][c],sum[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> f[i][j];
        }
    }
    cout << "Matrix :\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << f[i][j] <<"\t";
        }
        cout << endl;
    }
    cout << "\nSecond Matrix:\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> s[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << s[i][j] <<"\t";
        }
        cout << endl;
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=f[i][j]-s[i][j];
        }
        cout << endl;
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<< sum[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
