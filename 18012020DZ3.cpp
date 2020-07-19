/*
Задание 3: Пользователь вводит с клавиатуры 7 целых чисел.Напишите программу, которая определяет максимальное из этих 7 чисел(Подсказка – решение должно быть простым).
*/
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int now = 0, old = 0;
	for (int i = 0; i < 7; i++)
	{
		cout << i + 1 << "-ое число: ";
		cin >> now;
		if (now > old)
		{
			old = now;
		}
	}
	cout << "Максимальное число: " << old;
	return 0;
}