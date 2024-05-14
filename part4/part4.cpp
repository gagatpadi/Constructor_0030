#include <iostream>
#include <string>
using namespace std;

class angka {
	int* arr;
	int panjang;
public:
	angka(int);
	~angka();
	void cetakData();
	void isiData();
};

angka::angka(int i) {
	panjang = 1;
	arr = new int[i];
	isiData();
}

angka::~angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = ";
		cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3);
	angka* ptrBelajarcpp;
	delete ptrBelajarcpp;

	return 0;
}

