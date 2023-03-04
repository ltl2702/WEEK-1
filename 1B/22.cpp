//Body mass index - BMI là tỷ lệ giữa cân nặng của một người (tính theo kilogram) với bình phương chiều cao của người đó (tính theo meter). Hãy viết chương trình BMI nhập hai giá trị cân nặng và chiều cao từ bàn phím và in chỉ số BMI ra màn hình.


#include<bits/stdc++.h>
using namespace std;
int main()
{
   double kg,m;
   cin >> kg >> m;
   cout << kg/(m*m);
}

