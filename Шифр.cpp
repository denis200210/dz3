﻿// шифрование 
// простая перестановка
#include <iostream>
using namespace std;

int strlen(char* string)
{
	int lengh = 0;
	while (*string++)
		lengh++;
	return lengh;

}


int main() {

	char s[50];
	char massiv[100][100];
	int b, c;
	int count = 0;
	cout << "Исходное слово:";
	cin >> (s);

	cout << " Кол-во символов " << strlen(s) << endl;
	cout << "Ввести ключ (M x N) " << endl;
	cout << "Ввести кол-во строк: ";
	cin >> b;
	cout << "Ввести кол-во столбцов: ";
	cin >> c;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{
			massiv[i][j] = s[count];
			count++;
		}
	}

	cout << "Зашифрованное слово: ";
	for (int j = 0; j < c; j++)
	{
		for (int i = 0; i < b; i++)
		{
			cout << massiv[i][j];
		}
	}
	cout << endl;

}

