#include <iostream>

//написать 3 шаблонные функции сортировки одномерных массивов любого типа
//способы :
//-пузырьком
//- вставками
//- выбором
//результаты публикуем на гитхабе!

template<class T>
void BubbleSort(T Arr, int size)
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7 - 1; j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				std::swap(Arr[j], Arr[j + 1]);
			}
		}
	}
}
template<class T>
void SelectiveSorting(T Arr,int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int k = i;

		for (int j = i + 1; j < size; j++)
			if (Arr[k] > Arr[j]) k = j;

		std::swap(Arr[k], Arr[i]);
	}
}
template<class T>
void InsertSort(T Arr, int size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j > 0; j--)
		{
			if (Arr[j] < Arr[j - 1]) std::swap(Arr[j], Arr[j - 1]);
			else break;
		}
}
template<class T>
void show(T Arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << Arr[i];
	}
}
int main() 
{
	int Arr1[] = { 2,1,4,6,5,0,3 };
	BubbleSort(Arr1, 7);
	show(Arr1, 7);
	std::cout << "\n";

	int Arr2[] = { 4,7,2,9,5,0 };
	SelectiveSorting(Arr2, 6);
	show(Arr2, 6);
	std::cout << "\n";

	int Arr3[] = { 5,2,7,4,9,5,3,7 };
	SelectiveSorting(Arr3, 8);
	show(Arr3, 8);
	std::cout << "\n";
}





