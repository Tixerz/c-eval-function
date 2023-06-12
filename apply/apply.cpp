#include <string>
#include <iostream>
using namespace std;
string apply_op(int num1, int num2, char op) {
	switch (op) {
	case '*':
		return to_string(num1 * num2);
		break;
	case '/':
		return to_string(num1 / num2);
		break;
	case '+':
		return to_string(num1 + num2);
		break;
	case '-':
		return to_string(num1 - num2);
		break;

	}
}
