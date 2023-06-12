#pragma once
#include <iostream>
#include <string>

using namespace std;
int op1_index;
char op1;
void op_finder1(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '/' || str[i] == '*') {
            op1 = str[i];
            op1_index = i;
        }
    }
    
}