#include <iostream>
#include <string>
using namespace std;

int main()
{
	string username, password;

	while (true) {
		cout << "Enter your username: "; cin >> username;
		cout << "Enter your password: "; cin >> password;
		if (username == "ducmaster" && password == "123456") {
			cout << "Duc Master, Login successful!! \n";
			break;
		}
		else {
			cout << "Username or password is invalid :(\n";
		}
	}

	system("pause");
	return 0;
}
Master
#include <iostream>
#include <string>
using namespace std;

int main()
{
//-----Kiểu dữ liệu, biến, hằng-------------
	//số nguyên
	char a{ 3 };
	int b;
	//số thực
	float c;
	double d;
	//kí tự
	char e;
	//xâu kí tự
	string f;
	//luận lí
	bool g;
	//Hằng
	const string name = "Duc Master";
//-----Lệnh gán, Nhập-xuất--------------------
	a = 4; //gán 
	cout << "Hello world ^^";
	cin >> bienso;
//-----Toán tử, ưu tiên toán tử
	//toán tử 2 ngôi
	+-*/ %
	//toán tử 1 ngôi
	a++
	a-- 
	++a 
	--a
	*= /= += -=
	//logic
	&& || !
	//Ưu tiên toán tử
	+-*/ như toán, ! => logic 
	sử dụng () để ưu tiên toán tử
//-----Ép kiểu-------------------------------
	//tường minh
	//ko tường minh
	a = float(b)/c 
//-----Lệnh ghép
	{
		//here is scope
	}
//------Rẽ nhánh 
	if () {

		}
	//
	if () {

	}
	else {

	}
	//
	if () {

	}
	else if () {

	}
	else {

	}
	//--------
	case () 

//------Lặp-------------------------------------
	while () {

		}

	do {

	} while ();

	for (size_t i = 0; i < length; i++)
	{

	}
//--------Kiểu mảng-----------------------------
	int a[100];
	a[1] = 100;
	int b[100][100];
//---------Kiểu string--------------------------
//---------Hàm----------------------------------
	Kieu_tra_ve Ten_ham(Danh sach tham so)
	{
		Than ham
	}
	
//---------Biến toàn cục, cục bộ và truyển dữ liệu
	&thamso //
//---------Bản ghi--------------------------------
struct Books
	{
		char  tieude[50];
		char  tacgia[50];
		char  chude[100];
		int   book_id;
	};
	struct Books QuyenSach1;
	QuyenSach1.tieude
//--------Tệp--------------------------------------
https ://daynhauhoc.com/t/mot-so-thao-tac-doc-du-lieu-tu-file-trong-c/35567

}
Master
#include <iostream>
#include <string>
using namespace std;
void dq(string res, int i);
int n;
int main()
{
	cout << "Nhap n: "; cin >> n;
	dq("", 0);
	system("pause");
	return 0;
}


void dq(string res, int i) {
	if (i == n) {
		cout << res << endl;
		return;
	}
	dq(res.append("0"),i+1);
	res.pop_back();
	dq(res.append("1"),i+1);
	res.pop_back();
}
Master
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
const int MAXN = 20000;

using namespace std;
int find(int k, int l, int r);
void randomarr();
void Qsort(int l,int r);
void printArr();
void Swap(int &x, int &y);

int arr[MAXN+1];

int main()
{

	int k;
	randomarr();
	printArr();
	Qsort(0, MAXN);
	printArr();
	cout << "Nhap k: "; cin >> k;
	cout << "K nam o vi tri " << find(k,0, MAXN) << endl;
	system("pause");
	return 0;
}
void printArr() {
	for (int i = 0; i < MAXN; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl << endl;
}
void randomarr() {
	srand((unsigned)time(0));
	for (int i = 0; i < MAXN; i++)
	{
		
		arr[i] = rand()%100;
	}
}
int find(int k,int l,int r) {
	if (l > r) 
		return -1;

	int mid = (l + r) / 2;
	cout << mid << endl;
	if (arr[mid] == k)
		return mid;
	if (arr[mid] < k)
		return find(k, mid+1, r);
	else
		return find(k, l, mid-1);
}
void Qsort(int l, int r) {
	int i, j, k;

	k = (l + r) / 2;
	i = l; j = r;
	
	while (i<=j) {
		while (arr[i] < arr[k]) i++;
		while (arr[j] > arr[k]) j--;
		//cout << "i=" << i << ", j=" << j << ", k=" << k << endl;
		if (i <= j) {
			swap(arr[i], arr[j]);
			
			i++; j--;
			//getchar();
		}
		//printArr();
		
	} 
	if (l<j) Qsort(l, k);
	if (i<r) Qsort(k, r);
	

}
void Swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
``
Master
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
const int MAXN = 1000;

using namespace std;
int find(int k, int l, int r);
void randomarr();
void Qsort(int l,int r);
void printArr();
//void Swap(int &x, int &y);

int arr[MAXN]{ 9,0,  0, 1,  3, 1,0, 7,  9,2 };

int main()
{

	int k;
	randomarr();
	//printArr();
	Qsort(0, MAXN - 1);
	//printArr();
	cout << arr[89]<<"Nhap k: "; cin >> k;
	cout << "K nam o vi tri " << find(k,0, MAXN-1) << endl;
	system("pause");
	return 0;
}
void printArr() {
	for (int i = 0; i < MAXN; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl << endl;
}
void randomarr() {
	srand((unsigned)time(0));
	for (int i = 0; i < MAXN; i++)
	{
		
		arr[i] = rand();
	}
}
int find(int k,int l,int r) {
	if (l > r) return -1;

	int mid = (l + r) / 2;
	cout << "l = " << l << ", r=" << r << ", mid = " << mid << "        ";
	cout << "a[" << mid << "]=" << arr[mid] << endl;
	if (arr[mid] == k) return mid;

	if (arr[mid] < k)
		return find(k, mid + 1, r);
	else
		return find(k, l, mid-1);
}
void Qsort(int l, int r) {
	int k, i, j;
	if (l > r) return;
	k = arr[(l + r) / 2];
	i = l; j = r;
	while (i <= j) {
		while (arr[i] < k) 
			i++;
		while (arr[j] > k) 
			j--;
		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	if (l<j) 
		Qsort(l, j);
	if (i < r) 
		Qsort(i, r);
}
//void Swap(int &x, int &y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}
25/11/2017 22:38
Thuan Pham



26/11/2017 14:19
Master
#include <iostream>
#include <fstream> 
#include <memory.h>
#include <array>

using namespace std;
struct Vung
{
	int hd, hc, cd, cc;
};
struct Toado
{
	int x, y;
};
Vung vung[9]{
	{1,3,1,3},
	{1,3,4,6},
	{1,3,7,9},
	{4,6,1,3},
	{4,6,4,6},
	{4,6,7,9},
	{7,9,1,3},
	{7,9,4,6},
	{7,9,7,9}
};
Toado toado[100];
int a[10][10];
int n = 0;
std::array<bool, 10> checkNum;
void Enter();
void PrintArr();
bool IsOk();
void GetVung(int x, int y, int &hd, int &hc, int &cd, int &cc);
void GetInvail(int x, int y);
void Solve(int i);
int main()
{
	Enter();
	PrintArr();
	cout << "I'm solving................................" << endl;
	Solve(1);
	//system("pause");
	cin.get();
	return 0;
}
void Solve(int i) {
	if (i > n) {
		PrintArr();
		return;
	}
	int x = toado[i].x;
	int y = toado[i].y;
	GetInvail(x,y);
	std::array<bool, 10> thischeckNum;
	thischeckNum = checkNum;
	for (int j = 1; j < 10; j++)
	{
		if (thischeckNum[j]) {
			a[x][y] = j;
			
			Solve(i + 1);
			a[x][y] = 0;
		}
	}
}
void Enter() {
	ifstream file("inp.txt");
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			file >> a[i][j];
			if (a[i][j] == 0) {
				n++;
				toado[n].x = i;
				toado[n].y = j;
			}
		}
	}
	file.close();
}
void PrintArr() {
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << a[i][j] << " ";
			if (j % 3 == 0) cout << "|";
		}
		cout << "\n";
		if (i % 3 == 0) cout << "---------------------" << endl;
	}
}
bool IsOk() {
	std::array<int, 10> countNum;

	//Kiem tra tung hang	
	for (int i = 1; i < 10; i++)
	{
		countNum.fill(0);
		for (int j = 1; j < 10; j++)
		{
			countNum[a[i][j]]++;
		}
		for (int j = 1; j < 10; j++)
		{
			if (countNum[j] != 1) return false;
		}
	}

	//Kiem tra cot
	for (int i = 1; i < 10; i++)
	{
		countNum.fill(0);
		for (int j = 1; j < 10; j++)
		{
			countNum[a[j][i]]++;
		}
		for (int j = 1; j < 10; j++)
		{
			if (countNum[j] != 1) return false;
		}
	}
	//Kiem tra vung
	for (int k = 0; k < 9; k++)
	{
		countNum.fill(0);
		for (int i = vung[k].hd; i <= vung[k].hc; i++)
		{
			for (int j = vung[k].cd; j <= vung[k].cc; j++)
			{
				countNum[a[i][j]]++;
			}
		}
		for (int j = 1; j < 10; j++)
		{
			if (countNum[j] != 1) return false;
		}
	}
	
	return true;
}
void GetVung(int x,int y, int &hd, int &hc, int &cd, int &cc) {
	//Tra ve hd,hc,cd,cc
	if(x<=3){
		hd = 1; hc = 3;
	}
	else if (x >= 7) {
		hd = 7; hc = 9;
	}
	else {
		hd = 4; hc = 6;
	}
	if (y <= 3) {
		cd = 1; cc = 3;
	}
	else if (y >= 7) {
		cd = 7; cc = 9;
	}
	else {
		cd = 4; cc = 6;
	}

}
void GetInvail(int x, int y) {
	
	checkNum.fill(true);
	//check Hang + check Cot
	for (int i = 1; i < 10; i++)
	{
		checkNum[a[x][i]] = false;
		checkNum[a[i][y]] = false;
	}

	//check Vung
	int hd, hc, cd, cc;
	GetVung(x, y, hd, hc, cd, cc);
	for (int i = hd; i <= hc; i++)
	{
		for (int j = cd; j <= cc; j++)
		{
			checkNum[a[i][j]] = false;
		}
	}

}

27/11/2017 23:17
Master
Kẻ hữu tình trồng hoa, hoa không thắm. Kẻ vô tình cắm liễu, liễu lại xanh
Có 2 loại phụ nữ, 1 là cả thế giới công nhận họ đẹp, 2 là họ làm cho thế giới của mình đẹp.
VẺ ĐẸP KHÔNG PHẢI Ở ĐÔI MÁ HỒNG CỦA NGƯỜI THIẾU NỮ MÀ NẰM TRONG ĐÔI MẮT CỦA KẺ SI TÌNH…
Thuan Pham
https://www.youtube.com/watch?v=Zf_sZo41RGY
