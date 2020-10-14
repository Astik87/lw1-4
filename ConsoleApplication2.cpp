#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// --------------------------- ������������ ������ 1 --------------------------- //

// 1 ��������� ������ � ������ � �������� � �����������.

void lw1_1() {
	cout << "������� ������: ";

	float num;

	cin >> num;

	double a = num * 583.333;

	double b = a * 182.88;

	cout << num << " �����" << " = " << a << " ������\n";

	cout << a << " ������" << " = " << b << "��";

}

// 2 ��������� ���� � ��������� � ��� � �������� � ������ � �������.

void lw1_2() {
	cout << "������� ����: ";

	float num;

	cin >> num;

	float a = num * 1.852;

	float b = a / 3.6;

	cout << num << " ����" << " = " << a << " �/�\n";

	cout << a << " �/�" << " = " << b << "�/�";

}

// 3 ��������� ������� ������� � �������� � �������� � �����������.

void lw1_3() {
	cout << "������� ������� �������: ";

	float num;

	cin >> num;

	float a = num + 273.15;

	float b = (a - 273.15) * 9 / 5 + 32;

	cout << num << " ������ �������" << " = " << a << " �\n";

	cout << a << " �" << " = " << b << " F";

}

// 4 ��������� ����� � ����� � �������� � �������.

void lw1_4() {

	cout << "������� �����: ";

	float num;

	cin >> num;

	float a = num * 0.0254;

	float b = a / 0.7112;

	cout << num << " �����" << " = " << a << " �\n";

	cout << a << " �" << " = " << b << " �����";

}

// 5. ��������� ��� � ����� � �������� � ������.

void lw1_5() {

	cout << "������� ����: ";

	float num;

	cin >> num;

	float a = num * 63.986;

	float b = a / 144;

	cout << num << " ���" << " = " << a << " ���\n";

	cout << a << " ���" << " = " << b << " �����";

}

// 6. ��������� ����� � �������� � �������� � �������.

void lw1_6() {

	cout << "������� �����: ";

	float num;

	cin >> num;

	float a = num * 10;

	float b = a * 100000;

	cout << num << " �" << " = " << a << " �\n";

	cout << a << " �" << " = " << b << " �";

}

// 7. ��������� ����� � ������� � ���� � ������� � �������� � ���������� � ������.

void lw1_7() {

	cout << "������� �/c: ";

	float num;

	cin >> num;

	float a = num / 1609.344;

	float b = a * 96.5606;

	cout << num << " �/c" << " = " << a << " ����/�\n";

	cout << a << " ����/�" << " = " << b << " �/���";

}

// 8. ��������� ��������� � ���� � �������� � ������.

void lw1_8() {

	cout << "������� ��������: ";

	float num;

	cin >> num;

	float a = num * 1093.61;

	float b = a * 36;

	cout << num << " �" << " = " << a << " ���/�\n";

	cout << a << " ���" << " = " << b << " ����";

}

// 9. ��������� �� ���������� � ������ � �������� � �������.

void lw1_9() {

	cout << "������� ���������: ";

	float num;

	cin >> num;

	float a = num * 1.312;

	float b = a / 14000;

	cout << num << " ��" << " = " << a << " ������/�\n";

	cout << a << " ������" << " = " << b << " �����";

}

//10. ��������� �� ������ � ���� � ������.

void lw1_10() {

	cout << "������� �����: ";

	float num;

	cin >> num;

	float a = num / 0.1778;

	float b = a / 4;

	cout << num << " �" << " = " << a << " ����/�\n";

	cout << a << " ����" << " = " << b << " �����";

}

// --------------------------- ������������ ������ 2 --------------------------- //

//1. �������� ���������, ������� ���������, ������� ��� ��������� � ����������
//����� ����������� � �������.������ � ��� ����� �������� �������������.

void lw2_1() {
	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	cout << "������� ����� n: ";

	int n;

	cin >> n;

	int count = 0;

	for (int i = 0; i < m; i++) {
		if (A[i] == n) count++;
	}

	cout << count;
}

//2. �������� ���������, ������� ��������� ������� �������������� ���������
//������� ��� ����� ������������ � ������������� ��������� �������.������ �
//��� ����� �������� �������������.

void lw2_2() {
	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int max = A[0];
	int min = A[0];

	for (int i = 0; i < m; i++) {

		if (A[i] > max) max = A[i];
		if (A[i] < min) min = A[i];

	}

	int sum = 0;

	for (int i = 0; i < m; i++) {

		if (A[i] == max or A[i] == min) continue;

		sum += A[i];

	}

	cout << "������� �������������� ��������� = " << float(sum) / (m - 2);
}

//3. �������� ���������, ������� ������� ���������� ��������� ���������
//�������.������ � ��� ����� �������� �������������.

void lw2_3() {

	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int count = 0;

	for (int i = 0; i < m; i++) {
		if (A[i] != 0) count++;
	}

	cout << " " << count << "  ��������� ��������� �������";

}

// 4. �������� ���������, ������� ��������� ����� ���� ������������� ���������
// �������.������ � ��� ����� �������� �������������.

void lw2_4() {

	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int sum = 0;

	for (int i = 0; i < m; i++) {
		if (A[i] > 0) sum += A[i];
	}

	cout << "�����: " << sum;
}

//5. �������� ���������, ������� ��������� ������������ ���� �������������
//��������� �������.������ � ��� ����� �������� �������������.

void lw2_5() {

	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int a = 1;

	for (int i = 0; i < m; i++) {
		if (A[i] < 0) a = a * A[i];
	}

	cout << "�����: " << a;

}

//6. �������� ���������, ������� ��������� �������� ������������� �
//������������ ��������� �������.������ � ��� ����� �������� �������������.

void lw2_6() {

	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int max = A[0];
	int min = A[0];

	for (int i = 0; i < m; i++) {
		if (A[i] < min) min = A[i];
		if (A[i] > max) max = A[i];
	}

	cout << "�����: " << max - min;

}

//7. �������� ���������, ������� ��������� ������� �� ������� ������� ��������
//������� �� ���������.������ � ��� ����� �������� �������������.

void lw2_7() {

	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	cout << "�����: " << float(A[0]) / A[m - 1];

}

/*
8. �������� ���������, ������� ��������� ������� ����� ������� � ����������,
������� � �������������� � �.�. ��������� �������. ���� ���������� ���������
��������, �� � ����� ������� ����������� ������� �������. ������ � ��� �����
�������� �������������.
*/

void lw2_8() {

	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	cout << "�����:\n";

	for (int i = 0; i < m / 2; i++) {
		cout << A[i] + A[m - i - 1] << "\n";
	}

	if (m % 2 != 0) cout << A[m / 2];

}

//9. �������� ���������, ������� ������� �� ����� ������ ������� �����. ������ �
//��� ����� �������� �������������.

void lw2_9() {

	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < m; i++) {
		int c = 0;
		for (int j = 2; j < 10; j++) {
			if (j == A[i]) continue;
			if (A[i] % j == 0) c++;
		}
		if (c == 0 and A[i] != 1) cout << A[i];
	}

}

// 10. �������� ���������, ������� ��������� ������� �������������� ������
// ��������� �������.������ � ��� ����� �������� �������������.

void lw2_10()
{

	size_t m;

	cout << "������� ����� �������: ";
	cin >> m;

	int* A = new int[m];

	cout << "������� �������� �������: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int count = 0;
	int sum = 0;

	for (int i = 0; i < m; i++) {
		if (A[i] % 2 == 0) {
			sum += A[i];
			count++;
		}
	}

	cout << "�����: " << float(sum) / count;

}

// --------------------------------- ������������ ������ 3 ----------------------------- //

// 1. �������� ���������, ������� �� �������� � ���������� ������ ������� ���
//��������� ���� ���� �� ���� � ������� ��������� �� �����.
void lw3_1() {

	string str;

	getline(cin, str);

	char b[7] = { ' ', ',', '.', '!', '?', ':', ';' };

	for (int i = 3; i < size(str); i++) {

		int count = 0;

		for (int j = 0; j < 7; j++) {

			if (b[j] == str[i]) {
				count++;
				break;
			}

		}

		if (count != 0 && str[i - 2] == '�' && str[i - 1] == '�' && str[i - 3] != ' ') {

			str[i - 2] = '�';
			str[i - 1] = '�';

		}

	}

	cout << str;
}

//2. �������� ���������, ������� �� �������� � ���������� ������ ������� �����,
//������������ � ������� �����, � ������� �� �� �����.
void lw3_2() {

	string str;

	string sl[1024];

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0) m++;
		}
	}

	char a[18] = { '�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�' };

	for (int i = 0; i <= m; i++) {
		for (int b = 0; b < 18; b++) {
			if (a[b] == sl[i][0]) {
				cout << sl[i];
				break;
			}
		}
	}

}

//3. �������� ���������, ������� �� �������� � ���������� ������ ������� �����,
//��������������� ��������� ������, � ������� �� �� �����.
void lw3_3() {

	string str;

	string sl[1024];

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0) m++;
		}
	}

	char a[18] = { '�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�' };

	int n;

	for (int i = 0; i <= m; i++) {
		n = 0;
		for (int b = 0; b < 18; b++) {
			if (a[b] == sl[i][size(sl[i]) - 1]) {
				n++;
				break;
			}
		}
		if (n != 0) continue;
		cout << sl[i] << endl;
	}
}

//4. �������� ���������, ������� �� �������� � ���������� ������ ������� �����,
//���������� ���� �� � ������� ����� �����������, � ������� �� �� �����.
void lw3_4() {

	string str;

	string sl[1024];

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0) m++;
		}
	}

	int max = 0, id = -1, n;

	for (int i = 0; i <= m; i++) {
		n = 0;
		for (int j = 0; j < size(sl[i]); j++) {
			if (sl[i][j] == '�' or sl[i][j] == '�') {
				n++;
			}

			if (max < n) {
				max = n;
				id = i;
			}
		}
	}

	if (id != -1) cout << sl[id];

}

//5. �������� ���������, ������� �� �������� � ���������� ������ ������� �����
//��� �� ��� � ������� ��������� �� �����.
void lw3_5() {

	string str;

	getline(cin, str);

	for (int i = 0; i < size(str); i++) {
		if (str[i] == '�') str[i] = '�';
	}

	cout << str << endl;

}

//6. �������� ���������, ������� �� �������� � ���������� ������ �������
//��������� �� �����������.������� ����� ����������� - �����, ���������������
//��� �������������� ����� � ������� ��������� �� �����.
void lw3_6() {

	string str;

	getline(cin, str);

	int n = 0;

	for (int i = 0; i < size(str); i++) {
		if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
			for (n; n <= i; n++) {
				cout << str[n];
			}
			cout << endl;
			n++;
		}
	}

}

//7. �������� ���������, ������� �� �������� � ���������� ������ ���������
//���������� ���� � ������������ � ������� ��������� �� �����.
void lw3_7() {

	//A-Z = 65-90
	//a-z = 97-122
	//A-� = < 0

	string str;

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {

		int code = (int)str[i];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			continue;
		}

		code = (int)str[i - 1];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			m++;
		}
	}

	cout << m << " ����(-�) � ������";

}

//8. �������� ���������, ������� �� �������� � ���������� ������ ������ ���
//�������, ����� ��������� � ������� ���������� ��������� �������� �� �����.
void lw3_8() {

	string str;

	getline(cin, str);

	int n = 0;

	for (int i = 0; i < size(str); i++) {
		if ((int)str[i] == 9 || (int)str[i] == 32) {
			n++;
			continue;
		}
		cout << str[i];

	}

	cout << endl << n << " �������� � ������ ��������� ���� �������";

}

//9. �������� ���������, ������� �� �������� � ���������� ������ ������� ����� �
//�������� ����������� ���� � ������� ��������� �� �����.
void lw3_9() {
	string str;

	getline(cin, str);

	int m = 0;
	string sl;

	for (int i = 0; i < size(str); i++) {
		int h = i - 1;
		if (h < 0) h = 0;
		int code = (int)str[i];
		int code0 = (int)str[h];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			sl += str[i];
			m++;
			if (i == size(str) - 1 && m % 2 != 0) cout << sl << endl;
		}
		else if ((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0) {
			if (m % 2 != 0) {
				cout << sl << endl;
			}
			m = 0;
			sl = "";
		}
	}
}

//10. �������� ���������, ������� �� �������� � ���������� ������ ������� ������
//����� �� ��������� �� ���� ������ ������ � ������� ��������� �� �����.
void lw3_10() {

	string str;

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		int h = i - 1;
		if (h < 0) h = 0;
		int code = (int)str[i];
		int code0 = (int)str[h];

		if (((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) &&
			!((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0)) m = i;
		else if (((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0) &&
			!((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0)) str[m] = str[h];

		if (((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) && i == size(str) - 1) str[m] = str[h + 1];

	}

	cout << str;

}

// --------------------------------- ������������ ������ 4 ----------------------------------------- //
// --------------------------------- �����!!!!!!!          ----------------------------------------- //
// ��� ����� ����������� � ����� TextFile1.txt � ����� ����� ��� � ���� ��� (ConsoleApplication2.cpp) 
// ��������� ������������ � ���� res.txt
// ���� ��� ����� �� �������� ��������� �� ����� ��������

// 1. �������� ���������, ������� �� �������� � ���������� ������ ������� ���
//��������� ���� ���� �� ���� � ������� ��������� �� �����.
void lw4_1() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	char b[7] = { ' ', ',', '.', '!', '?', ':', ';' };

	for (int i = 3; i < size(str); i++) {

		int count = 0;

		for (int j = 0; j < 7; j++) {

			if (b[j] == str[i]) {
				count++;
				break;
			}

		}

		if (count != 0 && str[i - 2] == '�' && str[i - 1] == '�' && str[i - 3] != ' ') {

			str[i - 2] = '�';
			str[i - 1] = '�';

		}
		else if (count == 0 && i == size(str) - 1) {
			str[i - 1] = '�';
			str[i] = '�';
		}

	}

	ofstream fout("res.txt");

	fout << str;
	fin.close();

	cout << "�������� ���� res.txt � ����� � ��������.";

}

//2. �������� ���������, ������� �� �������� � ���������� ������ ������� �����,
//������������ � ������� �����, � ������� �� �� �����.
void lw4_2() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	string sl[1024];

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0) m++;
		}
	}

	char a[18] = { '�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�' };

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i <= m; i++) {
		for (int b = 0; b < 18; b++) {
			if (a[b] == sl[i][0]) {
				fout << sl[i] << endl;
				break;
			}
		}
	}

	fin.close();

	cout << "�������� ���� res.txt � ����� � ��������.";

}

//3. �������� ���������, ������� �� �������� � ���������� ������ ������� �����,
//��������������� ��������� ������, � ������� �� �� �����.
void lw4_3() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	string sl[1024];

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0 && i != size(str) - 1) m++;
		}
	}

	char a[18] = { '�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�' };

	int n;

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i <= m; i++) {
		n = 0;
		for (int b = 0; b < 18; b++) {
			if (a[b] == sl[i][size(sl[i]) - 1]) {
				n++;
				break;
			}
		}
		if (n != 0) continue;
		fout << sl[i] << endl;
	}

	fout.close();

	cout << "�������� ���� res.txt � ����� � ��������.";

}

//4. �������� ���������, ������� �� �������� � ���������� ������ ������� �����,
//���������� ���� �� � ������� ����� �����������, � ������� �� �� �����.
void lw4_4() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	string sl[1024];

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0 && i != size(str) - 1) m++;
		}
	}

	int max = 0, id = -1, n;

	for (int i = 0; i <= m; i++) {
		n = 0;
		for (int j = 0; j < size(sl[i]); j++) {
			if (sl[i][j] == '�' or sl[i][j] == '�') {
				n++;
			}

			if (max < n) {
				max = n;
				id = i;
			}
		}
	}

	if (id != -1) {

		ofstream fout("res.txt");

		fout << sl[id];
		fin.close();

	}

	cout << "�������� ���� res.txt � ����� � ��������.";

}

//5. �������� ���������, ������� �� �������� � ���������� ������ ������� �����
//��� �� ��� � ������� ��������� �� �����.
void lw4_5() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	for (int i = 0; i < size(str); i++) {
		if (str[i] == '�') str[i] = '�';
	}

	ofstream fout("res.txt");

	fout << str;
	fin.close();

	cout << "�������� ���� res.txt � ����� � ��������.";


}

//6. �������� ���������, ������� �� �������� � ���������� ������ �������
//��������� �� �����������.������� ����� ����������� - �����, ���������������
//��� �������������� ����� � ������� ��������� �� �����.
void lw4_6() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int n = 0;

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i < size(str); i++) {
		if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
			for (n; n <= i; n++) {
				fout << str[n];
			}
			fout << endl;
			n++;
		}
	}

	fout.close();

	cout << "�������� ���� res.txt � ����� � ��������.";

}

//7. �������� ���������, ������� �� �������� � ���������� ������ ���������
//���������� ���� � ������������ � ������� ��������� �� �����.
void lw4_7() {

	//A-Z = 65-90
	//a-z = 97-122
	//A-� = < 0

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int m = 0;

	for (int i = 0; i < size(str); i++) {

		int code = (int)str[i];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			continue;
		}

		code = (int)str[i - 1];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			m++;
		}
	}
	ofstream fout("res.txt");
	fout << m << " ����(-�) � ������";
	fout.close();

	cout << "�������� ���� res.txt � ����� � ��������.";

}

//8. �������� ���������, ������� �� �������� � ���������� ������ ������ ���
//�������, ����� ��������� � ������� ���������� ��������� �������� �� �����.
void lw4_8() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int n = 0;

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i < size(str); i++) {
		if ((int)str[i] == 9 || (int)str[i] == 32) {
			n++;
			continue;
		}
		fout << str[i];

	}

	fout << endl << n << " �������� � ������ ��������� ���� �������";

	cout << "�������� ���� res.txt � ����� � ��������.";

}

//9. �������� ���������, ������� �� �������� � ���������� ������ ������� ����� �
//�������� ����������� ���� � ������� ��������� �� �����.
void lw4_9() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int m = 0;
	string sl;

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i < size(str); i++) {
		int h = i - 1;
		if (h < 0) h = 0;
		int code = (int)str[i];
		int code0 = (int)str[h];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			sl += str[i];
			m++;
			if (i == size(str) - 1 && m % 2 != 0) cout << sl << endl;
		}
		else if ((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0) {
			if (m % 2 != 0) {
				fout << sl << endl;
			}
			m = 0;
			sl = "";
		}
	}

	fout.close();

	cout << "�������� ���� res.txt � ����� � ��������.";

}

//10. �������� ���������, ������� �� �������� � ���������� ������ ������� ������
//����� �� ��������� �� ���� ������ ������ � ������� ��������� �� �����.
void lw4_10() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		int h = i - 1;
		if (h < 0) h = 0;
		int code = (int)str[i];
		int code0 = (int)str[h];

		if (((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) &&
			!((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0)) m = i;
		else if (((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0) &&
			!((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0)) str[m] = str[h];

		if (((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) && i == size(str) - 1) str[m] = str[h + 1];

	}



	ofstream fout("res.txt");

	fout << str;
	fin.close();

	cout << "�������� ���� res.txt � ����� � ��������.";

}