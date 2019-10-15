#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 10;
	int a[size], i;
	int maxValue = a[0];
	cout << "Введите элементы целочисленного массива" << endl;
	for (i = 1; i < size; i++)
		cin >> a[i];
	if (a[i] > maxValue)
	{
		a[i] = maxValue;
	}
	cout << "Получен целочисленный массив с элементами" << endl;
	for (i = 0; i < size; i++)
		cout << "a[" << i << "]=" << a[i] << ' ';
	cout << "Максимальное значение=" << maxValue;
	system("pause");
}





















/*



	int main()
		; {
		int l, n, m, pr;
		setlocale(LC_ALL, "Russian");
		cout << "\n В массиве целых чисел определить количество и произведение положительных элементов "
			"массива, лежащих между элементом с максимальным по абсолютной величине значением и "
			"элементом с номером n/2."
			<< endl;
		//Ввод исходных данных
		cout << "\nВведите количество элементов массива: ";
		cin >> m;
		tmas a = new telem[n - 1]; //создание переменной-указателя на telem,
		//выделение динамической памяти под массив
		//адрес начала области заносится в a
		int imax; //значение максимальной разности
		inputmas(a, m);
		//Поиск номера элемента
		pr = pro(a, n, imax);
		cout << " Искомое произведение: " << pr << endl;
		delete[] a; //освобождение динамической памяти
		return 0;
	}

} */