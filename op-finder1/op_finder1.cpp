#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>

using namespace std;
// it will find / and *
int op1_index;
string op1;

    void op_finder1(string str) {//string str
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '/' || str[i] == '*') {
                op1 = str[i];
                op1_index = i;
            }
        }
        
    }
