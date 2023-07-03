#include <iostream>
using namespace std;
// it will find - and +
int op2_index;
char op2;
void op_finder2(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '+' || (str[i] == '-' && i != 0)) {
            op2 = str[i];
            op2_index = i;
            break;
        }
    }
}