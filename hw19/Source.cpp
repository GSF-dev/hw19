#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
//Задача 1
int maxDivider(int num1, int num2);
//Задача 2
long long resurveNumber(long long num);
//Задача 3
template<typename T> T searchIndex(T array[], int length, T key, int begin=0) {
	for (int i = 0; i < length; i++)
		if (array[i] == key) {
			begin = i;
			break;
		}
		else
			begin = -1;
	for (int i = length - 1; i > begin; i--)
		for (int j = begin+1; j < i; j++)
			if (array[j] > array[j + 1])
				swap(array[j], array[j+ 1]);
	return begin;
}
//Задача 4
template <typename T> void fromRange(T array[], int length, T a, T b) {
	cout << "[";
	for (int i = 0; i < length; i++) {
		array[i] = rand() % (b - a + 1) + a;
		cout << array[i] << ", ";
	}
	cout << "\b\b]";
}
bool type = false;
int main() {
	setlocale(LC_ALL, "Russian");
	long long n;
	int x, y;
	int arr[10];
	srand(time(NULL));
	//задача 1
	/*cout << "Задача 1 (Максимальный общий делитель)" << endl << endl;
	int n1, n2;
	cout << "Введите 2 числа: ";
	cin >> n1 >> n2;
	cout <<"Максимальный общий делитель чисел "<<n1<<" и "<<n2<<" = "<<maxDivider(n1, n2)<<endl<<endl;
	//Задача 2
	cout << "Задача 2 (Зеркальное число)\nВведите число: " << endl;
	cin >> n;
	cout << "Отражение числа " << n << " это ";
	cout << resurveNumber(n) << endl<<endl;
	//Задача 3
	cout << "Задача 3\nИзначальный массив:"<<endl;
	cout << "[";
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]"<<endl;
	cout << "Введите число для поиска в массиве: ";
	cin >> x;
	cout << "Первая позиция числа "<<x<<" = "<<searchIndex(arr, 10, x)<<endl;
	cout << "Отсортированный массив:\n[";
	for (int i = 0; i < 10; i++)
		cout << arr[i]<<", ";
	cout << "\b\b]"<<endl<<endl;*/
	//Задача 4
	cout << "Введите начало диапазона: ";
	cin >> x;
	cout << "Введите конец диапазона: ";
	cin >> y;
	if (x <= y) {
		cout << "Массив чисел от " << x << " до " << y << ":" << endl;
		fromRange(arr, 10, x, y);
	}
	else
		cout << "Ошибка! Первое число должно быть не больше второго!" << endl;




	return 0;
}
int maxDivider(int num1, int num2) {
	int limit;
	if (num1 < num2)
		limit = num1;
	else
		limit = num2;
	for (int i = limit; i >= 1; i--)
		if (num1 % i == 0 && num2 % i == 0)
			return i;
}
long long resurveNumber(long long num) {
	if (num / 10 == 0)
		return num;
	if (!(num % 10) && !type) {
		cout << "";
	}
	else 
		if( num % 10 || type ){
		cout << num % 10;
		type = true;
	}
	return  resurveNumber(num / 10);
}