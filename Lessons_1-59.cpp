#include<iostream>
#include<ctime>
using namespace std;

//������� ��������� ���������� ������ ���������� �������
void FillArray(int arr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}

//������� ������� ���������� ������
void PrintArray(int arr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

//������� ��������� ������� � ����� ����������� �������
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

//������� ������� ������� � ����� ����������� �������
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

//������ �������� �� ������� ������� ����������� �������� ����������
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

//������ �������� �� ������� ������� ����������� ��������� �����
//int Factorial(int N)
//{
//	if (N == 0)
//		return 0;
//	if (N == 1)
//		return 1;
//	return N * Factorial(N - 1);
//}

//������� ������ ������� �������� ���� ���������� �� ���������� � ������
//void Swap(int *pa, int *pb)
//{
//	int Temp = *pa;
//	*pa = *pb;
//	*pb = Temp;
//}

//��������� ������� (�������� � ������ ������ ������) ������ ������� �������� ���� ���������� �� �������
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

	//�������� ������ ���������
	/*cout << "\t\t\thelloworld! how are you?\n";
	cout << "\t\t\t������! ��� ������. ��� � ����?\n";
	cout << "\t\t\ti'm fine. thank you!\n";*/

	//��������� ���������� �������� ����� ������ ��� ��������
	/*int x;
	cout << "������� �����: ";
	cin >> x;

	if (x % 2 == 0)
	{
		cout << x << " - ������ �����\n";
	}
	else
	{
		cout << x << " - �������� �����\n";
	}*/

	//��������� ���������� �������������� �������� ����� ����� ������� ����� ����
	/*
	int a;
	cout << "������� ������ �����: ";
	cin >> a;
	int b;
	cout << "������� ������ �����: ";
	cin >> b;
	int x;
	cout << "������� 0, ����� ���������� ��������\n" << "������� 1, ����� ���������� ���������\n" << "������� 2, ����� ���������� ���������\n" << "������� 3, ����� ���������� �������\n";
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
		cout << "�� ����� �� 0, 1, 2, 3";
	}*/

	//��������� ������� ����� �� �������� � ������ ��� �������
	/*
	char a;
	cout << "������� ������: ";
	cin >> a;

	int b;
	cout << "������� ����������: ";
	cin >> b;

	int x;
	cout << "������� 0, ��� ������������ � ������\n" <<
		"������� 1, ��� ������������ � �������\n";
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
		cout << "�� ����� �� 0 � �� 1";
		break;
	}*/

	//��������� ������� ����� ���� ����� �������� ����� � ��������� ���������
	/*
	int LowIndeks, HighIndeks;
	int Summa = 0;
	cout << "������� ������ ������� ���������\n";
	cin >> LowIndeks;
	cout << "������� ������� ������� ���������\n";
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
	cout << "C���� ���� ����� �������� ����� � ��������� ���������: " << Summa << endl;*/

	//��������� ������� �� ����� ������������� �������� *. ������ � ������ ������� �������������
	/*
	char symbol = '\*';
	int width, length;
	cout << "������� ������ ��������������\n";
	cin >> width;
	cout << "������� ����� ��������������\n";
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

	//��������� ��������� ���������� ������ ���������� ����������� �������, ������� ������ � ����������/���������� ����� � �������
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
	cout << "���������� ����� � �������: " << Min << endl;
	cout << "���������� ����� � �������: " << Max << endl;*/

	//��������� ��������� ��������� ������ ���������� ������� � ������� ��� �� �����
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

	//��������� ������ ������� �������� ���� ���������� �� ���������� � ������ (����� & - �� �������) � ������� ������� Swap
	/*int a = 5, b = 10;
	cout << "���������� a = " << a << endl;
	cout << "���������� b = " << b << endl;

	Swap(&a, &b);

	cout << "���������� a = " << a << endl;
	cout << "���������� b = " << b << endl;*/

	//��������� ��������� ������������ ���������� ������ ���������� �������, ������� ������ � ������ � ������ ���������
	/*int size = 0;
	cout << "������� ������ �������: ";
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

	//��������� ��������� ������������ ��������� ������ ���������� ������� � ������� ������
	/*int rows, cols;
	cout << "������� ���������� ����� �������: " << endl;
	cin >> rows;
	cout << "������� ���������� �������� �������: " << endl;
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

	//��������� ��� ������ ������� FillArray, PrintArray ��������� ��� ������������ ���������� ������� ���������� �������,
	//������� �������, �������� ������ ������ � ������
	/*int size;
	cout << "������� ������ ��������: ";
	cin >> size;
	cout << endl;
	int *FirstArr = new int[size];
	int *SecondArr = new int[size];

	FillArray(FirstArr, size);
	FillArray(SecondArr, size);

	cout << "������ ������: \t";
	PrintArray(FirstArr, size);
	cout << "������ ������: \t";
	PrintArray(SecondArr, size);

	cout << "-------------------------------------" << endl;

	delete[] FirstArr;
	FirstArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		FirstArr[i] = SecondArr[i];
	}

	cout << "������ ������: \t";
	PrintArray(FirstArr, size);
	cout << "������ ������: \t";
	PrintArray(SecondArr, size);

	delete[] FirstArr;
	delete[] SecondArr;*/

	//��������� ��� ������ ������� FillArray, PrintArray ��������� ������������ ���������� ������ ���������� �������,
	//������� ������, ��������� ������� � ����� ������� , ������� ��������� ������� ��� ������ ������� push_back, pop_back
	int size;
	cout << "������� ������ �������: ";
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
