//Viết chương trình TriangleArea tính diện tích tam giác. Chương trình nhập độ dài 3 cạnh tam giác a, b, c từ bàn phím và in ra diện tích của tam giác đó.
//Sử dụng công thức diện tích Heron: area = sqrt(s(s-a)(s-b)(s-c)), với s = (a + b + c) / 2.


#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   cin >> a >> b >> c;
   double s=(a+b+c)/2;
   double area=sqrt(s*(s-a)*(s-b)*(s-c));
   cout << area;
}

