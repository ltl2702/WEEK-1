//Viết chương trình LeapYear kiểm tra năm nhuận. Chương trình đọc vào một số nguyên từ bàn phím và in ra "true" nếu đó là một năm nhuận, nếu không thì in ra "false"


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (n%4==0 && n%100!=0 || n%400==0)  cout << "true";
    else cout << "false";
    return 0;
}

