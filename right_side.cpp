#include <iostream>
using namespace std;

int right_side(string str , int op_index){
    string output ; 
    for (int i = op_index+1 ; i < str.length()  ; i++){
        if(str[i] == '/' || str[i] == '*' || str[i] == '+' || str[i] == '-'){
            break ;
        }
        output += str[i] ;

    }
    return stoi(output) ; 
}
