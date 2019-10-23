//Массивы динамические одномерные
//Найти номер элемента числового массива, для которого сумма
//разностей со значениями соседних элементов максимальна.
//Для крайних элементов использовать циклическое замыкание.
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
typedef int telem;	//объявление типа элемента массива
typedef telem* tmas;	//объявление типа "указатель на telem"
int nomer(tmas a, telem& max, int n);
void inputmas(tmas a, int n);
int main()
{
	int i, n;
	setlocale(LC_ALL, "Russian");
	cout << "\n Найти номер элемента массива, для которого сумма" << endl;
	cout << " разностей со значениями соседних элементов максимальна";
	//Ввод исходных данных
	cout << "\n Введите количество элементов массива: ";
	cin >> n;
	tmas a = new telem[n];	//создание переменной-указателя на telem,
					   //выделение динамической памяти под массив
					   //адрес начала области заносится в a
	int nom;				//номер искомого элемента
	telem max;			//значение максимальной разности
	inputmas(a, n);
	//Поиск номера элемента
	nom = nomer(a, max, n);
	cout << " Искомый номер элемента массива: " << nom << endl;
	cout << " Значение элемента: " << *(a + nom) << endl;
	cout << " Сумма разностей = " << max;
	delete a;			//освобождение динамической памяти
	return 0;
}
int nomer(tmas a, telem& max, int n)
{
	telem pr;			//текущее значение разности
	int imax = 0;		//за максимум принимаем первый по счету элемент
	max = fabs(*(a + n - 1) - *a) + fabs(*(a + 1) - *a);
	for (int i = 1; i < n - 1; i++)
		if (max < (pr = fabs(*(a + i - 1) - *(a + i)) + fabs(*(a + i + 1) - *(a + i))))
		{
			imax = i;
			max = pr;
		}
	if (max < (pr = fabs(*a - *(a + n - 1)) + fabs(*(a + n - 2) - *(a + n - 1))))
	{
		imax = n - 1;
		max = pr;
	}
	return imax;
}

void inputmas(tmas a, int n)
{
	cout << " Введите одной строкой элементы массива из ";
	cout << n << " чисел и нажмите <Enter>" << endl << " ";
	for (int i = 0; i < n; i++)
		cin >> *(a + i);
}