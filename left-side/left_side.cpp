#include <iostream>
#include <string> 
using namespace std;
int start1;//"1-12/-2"
int left_side(string str, int op_index) {
	bool is_neg;
	string minus = "-";
	string output;
	string final_output;
	for (int i = op_index - 1; i >= 0; i--) {
		if (str[i] == '+' || str[i] == '/' || str[i] == '*' || str[i] == '-') {
			if (str[i] == '-') {
				is_neg = true;
			}
			else {
				is_neg = false;
			}
			break;
		}
		start1 = i;
		output.push_back(str[i]); //21-


	}
	for (int i = output.length() - 1; i >= 0; i--) {
		final_output.push_back(output[i]);
	}
	if (is_neg) {
		start1 -= 1;

		minus += final_output;

		return stoi(minus);
	}
	else {
		return stoi(final_output);
	}

}
int main() {
	cout << left_side("1+2",1) << endl << "start : " << start1;
	int x; 
	cin >> x;
}