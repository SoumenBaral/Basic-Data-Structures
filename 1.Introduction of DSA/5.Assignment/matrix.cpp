#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int x=0;
    int y=n-1;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            if(i==(n-1)/2 && j==(n-1)/2)cout<<"X";
            else if(i==j)cout<<"\\";
            else if(i==x && j==y)cout<<"/";
            else cout<<" ";

        }
        x++;
        y--;
        cout<<endl;
        
    }

    
    return 0;
}
// for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j)
//                 cout << "X";
//             else if (i + j == n - 1)
//                 cout << "/";
//             else if (i == mid || j == mid)
//                 cout << " ";
//             else
//                 cout << "\\";
//         }
//         cout << endl;
//     }