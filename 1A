1.Lệnh sau đây làm gì khi grade là một biến kiểu int? Nếu có lỗi cú pháp, hãy sửa lỗi.
   bool isA = (90 <= lớp <= 100);

// gán đúng hoặc sai cho biến isA
sửa: bool isA = (90 <= lớp && lớp <= 100)


2.Đoạn chương trình sau đây ra kết quả gì?
nhân đôi x = (nhân đôi) (3/5);
	cout<<x;

// vào 0


3. Tại sao đoạn mã dưới đây không ra 4294967296 = 2^32?
int x = 65536;
	dài y = x * x;
	cout<<y;

// Phép x * x được thực hiện trước, kết quả phép tính là 2^32 đã vượt quá giá trị miền của int
Gợi ý (bôi đen để nhìn): Tích hợp của hai giá trị int được tính là một giá trị int, sau đó mới được đổi thành một giá trị dài. Tuy nhiên, 65536 * 65536 = 2^32 là giá trị vượt trội ngoài khả năng lưu trữ của số int 32 bit trước khi nó được đổi ra lâu.


4.Biểu thức sau có giá trị gì?
(sqrt(2) * sqrt(2) == 2)

// value false(0)


5.Viết một chương trình splitByZero để xem chuyện gì xảy ra khi bạn chia một kiểu int hoặc double value cho 0 hoặc lấy đồng dư cho 0.

// trình biên dịch báo lỗi,không thực hiện được
cảnh báo: chia cho 0 [-Wdiv-by-zero]


6.Thử xem trình biên dịch nói gì với một chương trình có hàm main chứa đoạn mã sau
int a = 27 * "ba";
//báo lỗi do không cùng kiểu dữ liệu, không thể thực hiện 1 integer integer với value string

hoặc
gấp đôi x;
	cout<<x;
Nếu chuyển dòng báo cáo x ra ngoài hàm main thì chuyện gì xảy ra?

// if khai báo double x in main(), value in ra is a any value
   còn khai báo ngoài main thì in ra 0


7.Đoạn mã sau cho ra cái gì?
int baInt = 3;
	int 4Int = 4;
	nhân đôi baDouble = 3,0;
	gấp đôi bốnDouble = 4,0;
	cout << threeInt / fourInt << endl;
	cout<<baInt/fourDouble<<endl;
	cout << threeDouble / fourInt << endl;
	cout << threeDouble / fourDouble << endl;

// trong ra
0
0,75
0,75
0,75


8. Chuyện gì sẽ xảy ra nếu ta khai báo hai biến trùng tên trong cùng một khối lệnh? Lấy ví dụ là chương trình có hàm main() với nội dung sau:
int arg1;
	arg1 = -1;
	int x, y, z;
	char myDouble = '5';
	char arg1 = 'A';
	cout << arg1 << "\n";
	trả về 0;
Gợi ý: Hãy thử dịch xem biên dịch báo lỗi gì.

// lỗi: khai báo mâu thuẫn 'char arg1'
báo lỗi trùng lặp biến


9.Cung câu hỏi trên đoạn mã sau:
int arg1;
	arg1 = -1;
	{
	  char arg1 = 'A';
	  cout << arg1 << "\n";
	}
	trả về 0;
Khi ở bên trong con command block, arg1 arg1 arg1 arg1 only to the arg1 variable?

// only to the char arg1


10.Cung câu hỏi trên đoạn mã sau:
int arg1;
	arg1 = -1;
	{
	  char arg1 = 'A';
	}
	cout << arg1 << "\n";
	trả về 0;
Khi ra lệnh con command block, arg1 arg1 arg1 only to the arg1 variable?

// only to the variable int arg1


11.Chuyển đổi nhiệt độ. Dòng lệnh sau có nhiệm vụ thay đổi từ độ F (F) sang độ C (Celsius). Lệnh đó có gì sai?
gấp đôi C = (F - 32) * (5/9);

//vì 5/9=0 nên C=0
Chỉnh sửa: double C = (F-32)*5/9;


12.Đoạn mã sau vào ra kết quả gì?
nếu (10 > 5);
	 khác; {
	    cout<<"Đây";
	 };

// in ra "Here"
