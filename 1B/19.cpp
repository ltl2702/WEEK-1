/*Viết một chương trình Ordered đọc ba số nguyên x, y, z từ bàn phím.
Tạo một biến bool b và gán cho nó giá trị true nếu ba giá trị đã nhập theo thứ tự tăng dần hoặc giảm dần, false nếu không phải vậy.
In ra giá trị của b.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    bool b;
    if((x>=y && y>=z) || (x<=y && y<=z))
    {
        b=true;
    }
    else b=false;
    cout<<b;
    return 0;
}

