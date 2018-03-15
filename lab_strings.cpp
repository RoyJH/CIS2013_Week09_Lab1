#include <iostream>
#include <cstring>
using namespace std;

int main(){
		char name[5] = "Trey";
		char last[7] = "Harris";
		char copy [7];
		
		strncpy(copy, last, 7);
		
		cout << "Firstname: " << name << " Lastname: " << copy << endl;
}