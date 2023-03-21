#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

int main() {
	setlocale(LC_ALL, "rus"); \
		int sum_r = 0;
	 short m,n;

		//Ex1
	std::cout << "\n\n\t\tHome work 15.1\n\n"; //заполнить двумерный массив 10х10
	srand(time(NULL));
	std::cout << "Изначальный двумерный массив: \n";
	const int size = 10;
	int arr[size][size];

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			arr[i][j] = rand() % 101;//(100-0+1)+0
	std::cout << std::endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
		
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	int ryad = 0;  // сумма рядов
	for (int k = 0; k < size; k++) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (j == ryad)
					sum_r = sum_r + arr[i][j];
			}
		}		
		std::cout << "Сумма " << k << " ряда = " << sum_r << std::endl;
		sum_r = 0;
		ryad++;
	}
	
	std::cout << "Enter number -> ";// сортировка нужного ряда + вывод
	std::cin >> n;
	for (int k = 0; k < size / 2; k++) {
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++) {
				if (j == n)
					if (arr[i][j] < arr[i + 1][j])
						std::swap(arr[i][j], arr[i + 1][j]);
			}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			if(j == n)
			std::cout << arr[i][j] << "\t";
		std::cout << std::endl;
	}
	return 0;
}