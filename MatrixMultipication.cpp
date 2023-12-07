#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10][10], b[10][10], multi[10][10], r1, c1, r2, c2;

    cout << "Enter row and column for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter row and column for second matrix: ";
    cin >> r2 >> c2;
    cout << endl << "Enter  matrix 1:" << endl;

    int i, j, k;
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }

    cout << endl << "Enter matrix 2:" << endl;
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    for(i = 0; i < r1; i++){
         for(j = 0; j < c2; j++){
            multi[i][j]=0;
            for(k=0; k<c1;k++)
            {
                multi[i][j] =multi[i][j]+(a[i][k]*b[k][j]);
            }
         }
    }



    cout << "\nOutput Matrix: " << endl;
    for(i = 0; i < r1; i++){
      for(j = 0; j < c2; j++)
    {
        cout << " " << multi[i][j];
    }
     cout << endl;
    }

    return 0;
}

