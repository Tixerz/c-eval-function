//static libs
#include "op-finder1/op_finder1.h"
#include "apply/apply.h"
#include "left-side/lefi_side.h"
#include "op-finder2/op_finder2.h"
#include "replace/replace.h"
#include "right-side/right_side.h"

// built in libs
#include <iostream>
#include <string>
using namespace std;


string text1 = "2*3";

	

}
int main() { // start should always be +1
	
	int x; 
	op_finder1(text1);
	cout << replace(start1+1 , end1 , text1 , apply_op(left_side(text1, op1_index), right_side(text1, op1_index) , op1));
	cin >> x; 
}


