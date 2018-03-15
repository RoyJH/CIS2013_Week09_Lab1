#include <iostream>
#include <cstring>
using namespace std;
void tst ();
int main(){
		char name[5] = "Trey";
		char last[7] = "Harris";
		char copy [7];
		
		strncpy(copy, last, 7);
		
		cout << "Firstname: " << name << " Lastname: " << copy << endl << endl;
		tst();
}


void tst(){
string test = "Harris";

cout << test << endl;
test = "Trey";
cout << test << endl;
cout << "The length of test is " << test.length() << endl;
cout << "The 3rd Char of test is " << test[2] << endl;

for(int i=0; i<test.length(); i++){
	cout << " You spell Trey with a " << test[i] << endl;
}
cin >> test;
cout << "Test is now equal to " << test << endl;
}