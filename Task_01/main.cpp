#include <iostream>
#define MODE 0
#define enter '\n'
#define tab '\t'

int add(int x, int y) {
	return x + y;
}

int main() {
	setlocale(LC_ALL, "ru");
#ifndef MODE
#error Please define MODE
#endif // !MODE

#if MODE ==0
	std::cout << "������� � ������ ����������" << enter;
#elif MODE == 1
	std::cout << "������� � ������ ������" << enter;
	int x = 0, y = 0;
	std::cout << "������� ����� 1: ";
	std::cin >> x;
	std::cout << "������� ����� 2: ";
	std::cin >> y;
	std::cout << "��������� ��������: " << add(x, y);
#else
	std::cout << "����������� �����. ���������� ������..." << enter;
#endif
}