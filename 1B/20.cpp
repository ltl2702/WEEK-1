//Viết chương trình Divisibility đọc hai số nguyên từ bàn phím và in ra 'true' nếu cả hai đều chia hết cho 7 và false nếu không phải như vậy.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a > b;
    if (a%7==0 && b%7==0) cout << "true";
    else cout << "false";
}

