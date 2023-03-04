//4.Viết một chương trình đọc ba số nguyên từ bàn phím và in ra "true" nếu cả ba số bằng nhau, nếu không thì in ra "false".


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a==b && b==c) cout << "yes";
    else cout << "false";
    return 0;
 }


