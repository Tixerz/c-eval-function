//static libs
#include "op-finder1/op_finder1.h"
#include "apply/apply.h"
#include "left-side/lefi_side.h"
#include "op-finder2/op_finder2.h"
#include "replace/replace.h"
#include "right_side/right_side.h"

// built in libs
#include <iostream>
#include <string>
using namespace std;


string text1 = "-3*2";

	
string one_loop_dev(string str) { // its for / and *
	op_finder1(str);
	str = replace(start1, end1 + 1, str, apply_op(left_side(str, op1_index), right_side(str, op1_index), op1));
	return str;
}
string one_loop_sum(string str) {
	op_finder2(str);
	str = replace(start1, end1 + 1, str, apply_op(left_side(str, op2_index), right_side(str, op2_index), op2));
	return str;
}




string POT_eval(string str) {
	bool has_dev = true;
	bool has_sum = true;
	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == '/' || str[i] == '*') {
			has_dev = true;
			break;
		}
		else {
			has_dev = false;
		}
	}
	while (has_dev) {
		str = one_loop_dev(str);
		for (int i = 0; i <= str.length(); i++) {
			if (str[i] == '/' || str[i] == '*') {
				has_dev = true;
				break;
			}
			else {
				has_dev = false;

			}

		}

	}
	///////////////////////////////////////////////////////
	for (int i = 0; i <= str.length(); i++) {
		
		if (str[i] == '+' || (str[i] == '-' && i != 0)) {
			has_sum = true;
			break;
		}
		else {
			has_sum = false;
		}
	}
	//cout << has_sum << endl;
	while (has_sum) {

		str = one_loop_sum(str);

		for (int i = 0; i <= str.length(); i++) {
			if (str[i] == '+' || str[i] == '-') {
				has_sum = true;
				break;
			}
			else {
				has_sum = false;

			}
		}

	}
	return str;
}
int main() { // end1 should always be +1

	
	cout << "Enter the mathematical expression u want:";
	//cin >> text1;
	cout << endl << "---------------------" << endl << POT_eval(text1);
	cin >> text1;

}


