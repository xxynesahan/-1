#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float widht, hight, area, perimetr, diagonal;
	// ���� ������
	cout << "������� ������ ��������������" << endl;
	cin >> widht;
	cout << "������� ����� ��������������" << endl;
	cin >> hight;
	if (widht <= 0 || hight <= 0) {
		cout << "error" << endl;
		return 0;
	}
	area = widht * hight; // ���o������ �������. ������� S =  a * b
	perimetr = 2 * (widht + hight); // ���������� ���������. ������� P = 2 * (a + b)
	diagonal = sqrt(widht * widht + hight * hight); // ���������� ���������. �������  c = sqrt(a^2 + b^2)
	cout << "������� ��������������" << " " << area << endl;
	cout << "�������� ��������������" << " " << perimetr << endl;
	cout << "����� ��������� ��������������" << " " << diagonal << endl;
	return 0;
}
