#include <iostream>
#include <cstdlib>
#include <ctime>


template <typename T>
void print_arr(T arr, const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ', ';
	std::cout << "\b\b]\n";
}

template <typename T>
void fill_arr(T arr, const int length, int left, int rigth) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (rigth - left) + left;
}


int main() {
	setlocale(LC_ALL, "Ru");
	int n, m;
	// task 1
	//первый спопоб создание нейтрального указателя
	int* pn1 = 0;
	if (pn1 != 0)
		std::cout << *pn1 << std::endl;
	else
		std::cout << " Указатель не инициализирован. \n";
	// способ 2
	int* pn2 = NULL;
	if (pn2 != NULL)
		std::cout << *pn2 << std::endl;
	else
		std::cout << " Указатель не инициализирован. \n";
	// Способ 3
	int* pn3 = nullptr;
	if (pn3 != nullptr)
		std::cout << *pn3 << std::endl;
	else
		std::cout << " Указатель не инициализирован. \n";

	// Task2 Виды указателей 
	n = 10; m = 20;
	// Указатель на константу, мжет быть объявлен без инициализации, и модет быть перенаправлен
	// на другую область памяти
	// но с его помощьтю нельзя менять значение памяти, на которую он направлен
	const int* mp1;
	mp1 = &n;
	mp1 = &m;
	//*mp1 = 30; // Ошибка
	std::cout << *mp1 << std::endl;

	// Указатель Константа или константный указатель
	// Не может быть объявлен без инициализации
	// и не может быть перенаправлен на другую область памяти
	// в остальном ограничений нет 
	int* const mp2 = &n;
	//*mp2 = &m; //Ошибка
	*mp2 = 15; 
	std::cout << *mp2 << std::endl;

	// Константный указатель на константу 
	// Не может быть объявлен бех инициализации 
	// и не может быть перенаправлен на другую область памяти. С его помощью 
	// Нельзяя менять значение переменной, на которуб он направлен
	const int* const mp3 = &n;
	//*mp3 = &m;//Ошибка
	//*mp3 = 25;//Ошибка
	std::cout << *mp3 << std::endl;


	





	return 0;
}