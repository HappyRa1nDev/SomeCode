#include <iostream>
using namespace std;
int foo(int k) {
	return k;
}
int main()
{
	//����������� ��� ���������� � ������������
	cout << (-1 < 0u)<<"\n";
	//������������ �������������� ���
	unsigned int tmp = -1;
	cout << tmp << endl;
	//���� � int unsigned int, ����������� ��������������� ����
	cout << foo(std::numeric_limits<unsigned int>::max()) << endl;
	int tmp2 = std::numeric_limits<int>::max();
	cout << tmp2<<endl;
	cout << tmp2 + 1 << endl;

	//������ � char
	std::cout << is_signed_v<char> << endl;//���� ��������, ���� ��� �������� �� ���������� �����������
	std::cout << is_same_v<char,unsigned char> << endl;
	std::cout << is_same_v<char, signed char> << endl;

	//��������� ����������� ����� �������������� ���������� �����, ����� ������� �� �����������, �� ���� ����� 0. string pooling. ����� ��������, ���� ������������ string.
	const char* txt1 = "qwerty";
	const char* txt2 = "rty";
	cout << (txt2 == txt1 + 3) << endl;

}

