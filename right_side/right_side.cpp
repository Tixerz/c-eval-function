#include <iostream>
#include<string>
using namespace std;
int end1;
int right_side(string str , int op_index) { // "- + * /"
    string output; 
    bool has_minus;
    for (int i = op_index+1; i <= str.length() - 1; i++) {
        if (str[i] == '+' || str[i] == '*' || str[i] == '/' || (str[i] == '-' && i != op_index+1 )) {

            break;
        }
        
        end1 = i; 
        output.push_back(str[i]);
    }
    return stoi(output); 
}
int main() {
    int x;
    cout << endl << right_side("1-2", 1) << "\nend:" << end1;
    cin >> x;
}
//"1*-3333-4"