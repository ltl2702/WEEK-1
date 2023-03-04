/*Viết chương trình nhập một số nguyên dương N và in ra một tam giác kích thước N. Chẳng hạn với N bằng 5 thì tam giác có dạng như sau:

*****
****
***
**
*

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
