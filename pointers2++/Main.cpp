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
	//������ ������ �������� ������������ ���������
	int* pn1 = 0;
	if (pn1 != 0)
		std::cout << *pn1 << std::endl;
	else
		std::cout << " ��������� �� ���������������. \n";
	// ������ 2
	int* pn2 = NULL;
	if (pn2 != NULL)
		std::cout << *pn2 << std::endl;
	else
		std::cout << " ��������� �� ���������������. \n";
	// ������ 3
	int* pn3 = nullptr;
	if (pn3 != nullptr)
		std::cout << *pn3 << std::endl;
	else
		std::cout << " ��������� �� ���������������. \n";

	// Task2 ���� ���������� 
	n = 10; m = 20;
	// ��������� �� ���������, ���� ���� �������� ��� �������������, � ����� ���� �������������
	// �� ������ ������� ������
	// �� � ��� �������� ������ ������ �������� ������, �� ������� �� ���������
	const int* mp1;
	mp1 = &n;
	mp1 = &m;
	//*mp1 = 30; // ������
	std::cout << *mp1 << std::endl;

	// ��������� ��������� ��� ����������� ���������
	// �� ����� ���� �������� ��� �������������
	// � �� ����� ���� ������������� �� ������ ������� ������
	// � ��������� ����������� ��� 
	int* const mp2 = &n;
	//*mp2 = &m; //������
	*mp2 = 15; 
	std::cout << *mp2 << std::endl;

	// ����������� ��������� �� ��������� 
	// �� ����� ���� �������� ��� ������������� 
	// � �� ����� ���� ������������� �� ������ ������� ������. � ��� ������� 
	// ������� ������ �������� ����������, �� ������� �� ���������
	const int* const mp3 = &n;
	//*mp3 = &m;//������
	//*mp3 = 25;//������
	std::cout << *mp3 << std::endl;


	





	return 0;
}