#include <iostream>
#include <string>
using namespace std;
int start1;
int left_side(string str, int op_index) {
    string output1;
    string output2;
    for (int i = op_index - 1; i >=0; i--) {
        if (str[i] == '/' || str[i] == '*' || str[i] == '+' || str[i] == '-') {
            start1 = i;
            break;
        }
        output1 = output1 + str[i];

    }
    //reverse the output
    for (int i = output1.length() - 1; i >= 0; i--) {
        output2 += output1[i];
    }
    int num = stoi(output2);
    return num;
}

