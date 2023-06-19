#include <iostream>
#include<string>
using namespace std;
int end1;
int right_side(string str, int op_index) {
    int minus1=0;
    string output_real;
    string output;
    for (int i = op_index + 1; i <= str.length()-1; i++) {
        if (str[i] == '/' || str[i] == '*' || str[i] == '+' || i == str.length()-1) {
            end1 = i;
            if (i == str.length()-1) {
                
                output += str[i];
                end1 = i;
            }
            break;

        }
        output += str[i];

    } // -2-1
    for (int x = 0; x <= output.length() - 1; x++) {
        if (output[x] == '-') {
            minus1 += 1;

        }
        if (minus1 <= 1) {
            output_real.push_back(output[x]);
        }
    }
 
    return stoi(output_real);
}
int main() {
    int x;
    cout << right_side("1-3", 1);
    cin >> x;
}
