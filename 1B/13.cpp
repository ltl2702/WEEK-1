//1.Viết một chương trình distance.cpp đọc hai số nguyên x và y từ bàn phím và in ra khoảng cách từ điểm (x, y) tới gốc tọa độ (0, 0).


#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin >> x >> y;
	double distance=sqrt(x*x+y*y);
	cout << distance;
}


