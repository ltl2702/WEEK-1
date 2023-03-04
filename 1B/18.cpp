/*Viết chương trình EuclidDistance lần lượt đọc 4 số thực từ bàn phím x1, y1, x2, và y2 in ra khoảng cách Euclid giữa hai điểm (x1, y1) và (x2, y2).
Gợi ý: include thư viện cmath để dùng hàm tính căn bậc hai sqrt() trong thư viện đó.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return 0;
}

