#include <iostream>
#include <string> 
using namespace std;
int start1;
int left_side(string str, int op_index) {
	bool is_nagetive;
	string output1;
	string output2;
	string output3;
	string output4;
	string minus = "-";
	for (int i = op_index - 1; i < str.length(); i--) {
		if (str[i] == '+' || str[i] == '*' || str[i] == '/' || i == 0) {
			start1 = i+1;
			if (i == 0) {
				output1 += str[0];
				start1 = 0;
			}
			break;

		}
		output1 += str[i];
	}

	//reverse 
	for (int y = output1.length() - 1; y >= 0; y--) {
		output2 += output1[y];
	}
	for (int x = output2.length() - 1; x >= 0; x--) {
		if (output2[x] == '-') {
			is_nagetive = true;
			break;
		}
		output3 += output2[x];
	}

	//start index 
	//cout << start1;
	//reverse 
	for (int a = output3.length() - 1; a >= 0; a--) {
		output4 += output3[a];
	}
	if (is_nagetive == true) {
		minus += output4;
		return stoi(minus);
	}
	else {
		return stoi(output4);
	}
}
