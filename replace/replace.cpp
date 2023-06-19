#include <string>
#include <iostream>
using namespace std;
string replace(int start_index , int end_index , string the_main_item , string new_item) {
	the_main_item.erase(start_index, end_index);
	the_main_item.insert(start_index, new_item);
	return the_main_item;
}
int main() {
	int x;
	cout << replace(2, 5, "6+2*4", "8");
	cin >> x; 
}