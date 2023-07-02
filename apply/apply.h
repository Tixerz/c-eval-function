#include <string>
#include <iostream>
using namespace std;
bool is_neg;
string apply_op(int num1, int num2, char op) {
	string output; 
	switch (op) {
	case '*':
		return  to_string(num1 * num2);
		break;
	case '/':
		return to_string(num1 / num2);
		break;
	case '+':
		return   to_string(num1 + num2);
		break;
	case '-':
		return   to_string(num1 - num2);
		break;

	}
	
	return "";
}
//2+3*6+3