#include<iostream>
#include<ctime>
using namespace std;

//Функция заполняет одномерный массив случайными числами
void FillArray(int arr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}

//Функция выводит одномерный массив
void PrintArray(int arr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

//Функция добавляет элемент в конец одномерного массива
void push_back(int*& arr, int& size, const int value)
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = value;
	size++;
	delete[] arr;
	arr = newArr;
}

//Функция удаляет элемент в конце одномерного массива
void pop_back(int*& arr, int& size)
{
	size--;
	int* newArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
}

//Работа рекурсии на примере функции уменьшающей значение переменной
//int Decrement(int a)
//{
//	if (a < 1)
//		return 0;
//
//	a--;
//	cout << a << " ";
//
//	return Decrement(a);
//}

//Работа рекурсии на примере функции вычисляющей факториал числа
//int Factorial(int N)
//{
//	if (N == 0)
//		return 0;
//	if (N == 1)
//		return 1;
//	return N * Factorial(N - 1);
//}

//Функция меняет местами значения двух переменных по указателям в памяти
//void Swap(int *pa, int *pb)
//{
//	int Temp = *pa;
//	*pa = *pb;
//	*pb = Temp;
//}

//Шаблонная функция (работает с любыми типами данных) меняет местами значения двух переменных по ссылкам
//template <class T>
//void Swap(T &a, T &b)
//{
//	T Temp = a;
//	a = b;
//	b = Temp;
//}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	//Проверка работы пропусков
	/*cout << "\t\t\thelloworld! how are you?\n";
	cout << "\t\t\tпривет! все хорошо. как у тебя?\n";
	cout << "\t\t\ti'm fine. thank you!\n";*/

	//Программа определяет вводимое число четное или нечетное
	/*int x;
	cout << "введите число: ";
	cin >> x;

	if (x % 2 == 0)
	{
		cout << x << " - четное число\n";
	}
	else
	{
		cout << x << " - нечетное число\n";
	}*/

	//Программа производит математические операции между двумя числами через меню
	/*
	int a;
	cout << "Введите первое число: ";
	cin >> a;
	int b;
	cout << "Введите второе число: ";
	cin >> b;
	int x;
	cout << "Введите 0, чтобы произвести сложение\n" << "Введите 1, чтобы произвести вычетание\n" << "Введите 2, чтобы произвести умножение\n" << "Введите 3, чтобы произвести деление\n";
	cin >> x;

	switch (x)
	{
	case 0:
		cout << a + b;
		break;

	case 1:
		cout << a - b;
		break;

	case 2:
		cout << a * b;
		break;

	case 3:
		cout << (float) a / b;
		break;

	default:
		cout << "Вы ввели не 0, 1, 2, 3";
	}*/

	//Программа выводит линию из символов в строку или столбец
	/*
	char a;
	cout << "Введите символ: ";
	cin >> a;

	int b;
	cout << "Введите количество: ";
	cin >> b;

	int x;
	cout << "Введите 0, для расположения в строку\n" <<
		"Введите 1, для расположения в столбец\n";
	cin >> x;

	int i = 0;

	switch (x)
	{
	case 0:
		while (i < b)
		{
			cout << a;
			i++;
		}
		break;
	case 1:
		while (i < b)
		{
			cout << a << "\n";
			i++;
		}
		break;
	default:
		cout << "Вы ввели не 0 и не 1";
		break;
	}*/

	//Программа находит сумму всех целых нечетных чисел в указанном диапазоне
	/*
	int LowIndeks, HighIndeks;
	int Summa = 0;
	cout << "Введите нижнюю границу диапазона\n";
	cin >> LowIndeks;
	cout << "Введите верхнюю границу диапазона\n";
	cin >> HighIndeks;
	int i = LowIndeks;

	do
	{
		if (i % 2 != 0)
		{
			Summa += i;
		}
		i++;
	} while ( (LowIndeks < i ) && (i < HighIndeks) );
	cout << "Cумма всех целых нечетных чисел в указанном диапазоне: " << Summa << endl;*/

	//Программа выводит на экран прямоугольник символом *. Высота и ширина задаётся пользователем
	/*
	char symbol = '\*';
	int width, length;
	cout << "введите высоту прямоугольника\n";
	cin >> width;
	cout << "введите длину прямоугольника\n";
	cin >> length;
	cout << "\n";

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << symbol;
		}
		cout << "\n";
	}*/

	//Программа заполняет одномерный массив случайными уникальными числами, выводит массив и наименьшее/наибольшее числа в массиве
	/*const int SIZE = 10;
	int arr[SIZE];
	bool AlreadyGet;

	for (int i = 0; i < SIZE; )
	{
		AlreadyGet = false;
		int RandomValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == RandomValue)
			{
				AlreadyGet = true;
				break;
			}
		}

		if (!AlreadyGet)
		{
			arr[i] = RandomValue;
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int Min = arr[0];
	int Max = arr[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < Min)
		{
			Min = arr[i];
		}
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
	}
	cout << "Наименьшее число в массиве: " << Min << endl;
	cout << "Наибольшее число в массиве: " << Max << endl;*/

	//Программа заполняет двумерный массив случайными числами и выводит его не экран
	/*int const ROWS = 3;
	int const COLS = 4;
	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
	cout << "\n";
	}*/

	//Программа меняет местами значения двух переменных по указателям в памяти (убери & - по ссылкам) с помощью функции Swap
	/*int a = 5, b = 10;
	cout << "Переменная a = " << a << endl;
	cout << "Переменная b = " << b << endl;

	Swap(&a, &b);

	cout << "Переменная a = " << a << endl;
	cout << "Переменная b = " << b << endl;*/

	//Программа заполняет динамический одномерный массив случайными числами, выводит массив и адреса в памяти элементов
	/*int size = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	cout << endl;
	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr + i << "\t";
		cout << arr[i] << endl;
	}

	delete[] arr;*/

	//Программа заполняет динамический двумерный массив случайными числами и выводит массив
	/*int rows, cols;
	cout << "Введите количество строк массива: " << endl;
	cin >> rows;
	cout << "Введите количество столбцов массива: " << endl;
	cin >> cols;
	int **arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;*/

	//Программа при помощи функций FillArray, PrintArray заполняет два динамических одномерных массива случайными числами,
	//выводит массивы, копирует второй массив в первый
	/*int size;
	cout << "Введите размер массивов: ";
	cin >> size;
	cout << endl;
	int *FirstArr = new int[size];
	int *SecondArr = new int[size];

	FillArray(FirstArr, size);
	FillArray(SecondArr, size);

	cout << "Первый массив: \t";
	PrintArray(FirstArr, size);
	cout << "Второй массив: \t";
	PrintArray(SecondArr, size);

	cout << "-------------------------------------" << endl;

	delete[] FirstArr;
	FirstArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		FirstArr[i] = SecondArr[i];
	}

	cout << "Первый массив: \t";
	PrintArray(FirstArr, size);
	cout << "Второй массив: \t";
	PrintArray(SecondArr, size);

	delete[] FirstArr;
	delete[] SecondArr;*/

	//Программа при помощи функций FillArray, PrintArray заполняет динамический одномерный массив случайными числами,
	//выводит массив, добавляет элемент в конец массива , убирает последний элемент при помощи функций push_back, pop_back
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	cout << endl;
	int* arr = new int[size];

	FillArray(arr, size);
	PrintArray(arr, size);
	push_back(arr, size, rand() % 20);
	PrintArray(arr, size);
	pop_back(arr, size);
	PrintArray(arr, size);

	delete[] arr;
}
