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
	std::cout << "Работаю в режиме тренировки" << enter;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << enter;
	int x = 0, y = 0;
	std::cout << "Введите число 1: ";
	std::cin >> x;
	std::cout << "Введите число 2: ";
	std::cin >> y;
	std::cout << "Результат сложения: " << add(x, y);
#else
	std::cout << "Неизвестный режим. Завершение работы..." << enter;
#endif
}