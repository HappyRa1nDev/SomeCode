#include <iostream>
using namespace std;
int foo(int k) {
	return k;
}
int main()
{
	//знакованный тип приводится к беззнаковому
	cout << (-1 < 0u)<<"\n";
	//используется дополнительный код
	unsigned int tmp = -1;
	cout << tmp << endl;
	//каст к int unsigned int, особенности дополнительного кода
	cout << foo(std::numeric_limits<unsigned int>::max()) << endl;
	int tmp2 = std::numeric_limits<int>::max();
	cout << tmp2<<endl;
	cout << tmp2 + 1 << endl;

	//работа с char
	std::cout << is_signed_v<char> << endl;//либо знаковый, либо без знаковый на усмотрение компилятора
	std::cout << is_same_v<char,unsigned char> << endl;
	std::cout << is_same_v<char, signed char> << endl;

	//некоторые компиляторы могут оптимизировать размещение строк, ответ зависит от архитектуры, но чаще всего 0. string pooling. Можно избежать, если использовать string.
	const char* txt1 = "qwerty";
	const char* txt2 = "rty";
	cout << (txt2 == txt1 + 3) << endl;

}

