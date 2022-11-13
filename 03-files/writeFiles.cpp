#include <fstream>
#include <iostream>
using namespace std;
int main() {
	// type varName ("filename");
	ofstream record ("arquivo.txt");

	// record any content in the record variable
	record << "test" << endl;

	record << "test2" << endl;

	int number;

	cout << "Type a number" << endl;
	cin >> number;

	record << number;

	record.close();
}
