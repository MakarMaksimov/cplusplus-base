#include <iostream>
 
using namespace std;
 
int main() {
	char c; // 1 байт, одиночне символы
	c = 'b';
	cout << c << " " << int(c) << endl;
	// на самом деле char - целочисленный тип данных
 
	cout << char(50); // вывести символ на основе его кода
	// или правильнее сказать привести число 50 к типу char
	cout << endl;
 
	// хочу полученный символ цифры преобразовать в
	// саму цифру:
	cin >> c; // считать символ пропуская "пробелы"
	// c = cin.get(); // считывает символы, в том числе "пробелы"
	int a = c; // вычтем код символа 0 из нашего символа
	cout << a - '0' << endl; // это работает так как все цифры идут подряд
	// а char ведёт себя как целочисленный тип, при любых
	// арифметических операциях
 
	cin >> c; // также можно получить и номер буквы в алфавите
	cout << c - 'a' << endl; // при вычислении арифметических операций
	// char сразу же приводится к типу int, поэтому при выводе
	// результата таких вычислений, получается число, а не символ
 
	// хочу получить предыдующую букву:
	cout << char(c - 1) << endl; // если необходимо вывести это
	//  как символ, то нужно приписать char()
	// в данном случае, мы получили букву предшествующую заданной
 
	// Хочу перевести букву из нижнего регистра в верхний:
	cout << char(c - 'a' + 'A');
	cout << char(toupper(c)) << endl; // если буква уже большая
	// или это не буква - не трогает её
	//tolower()
 
	//Хачу узнать: у меня в руках большая буква?
	if (c >= 'A' && c <= 'Z')
		cout << "UpperCase";
	else if ('a' <= c && c <= 'z') // а может быть маленькая?
		cout << "LowerCase";
	else if ('0' <= c && c <= '9') // или цифра?
		cout << "Digit";
}
