#include <string>
#include <iostream>
using namespace std;
bool is_neg;
string apply_op(int num1, int num2, char op) {
	string output; 
	switch (op) {
	case '*':
		return output = to_string(num1 * num2);
		break;
	case '/':
		return  output = to_string(num1 / num2);
		break;
	case '+':
		return   output =  to_string(num1 + num2);
		break;
	case '-':
		return   output = to_string(num1 - num2);
		break;

	}
	
	return "";
}
