/*
Thống kê đơn giản. Cho N số nguyên, hãy viết một chương trình BasicStatistics tính giá trị trung bình (double), giá trị lớn nhất và giá trị nhỏ nhất. Chương trình cần nhập N là số các số nguyên, sau đó lần lượt nhập từng số nguyên trong N số đó. Ví dụ

Input: đầu tiên là số N (3), tiếp theo là N số (2,1,3):
3
2
1
2
Với input trên, output cần có là:
Mean: 2
Max: 3
Min: 1

*/



#include <iostream>
using namespace std;
int main()
{
    int n, a[1000];
    cin >> n;
    float tong;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int numbermax = a[0], numbermin = a[0];
    for(int i = 0; i < n; i++){
        tong+= a[i];
        if(a[i] > numbermax){
            numbermax = a[i];
        }
        if(a[i] < numbermin){
            numbermin = a[i];
        }
    }
    cout << "Mean: " << tong/n << endl << "Max: " << numbermax << endl << numbermin << endl;
    return 0;
}
