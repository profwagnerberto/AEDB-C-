#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv) {

	map <string, string > pratos;

	pratos["F01"] = "Parmegiana de Frango";
	pratos["B01"] = "Parmegiana de Carne";
	pratos["B02"] = "Almondegas";
	pratos["P01"] = "Bisteca Suina";
	pratos["B03"] = "Bife Acebolado";
	pratos["F02"] = "Frango Grelhado";

	cout << "Pratos:" << endl;
	cout << "=======" << endl;
	cout << pratos["F01"] << endl;
	cout << pratos["B01"] << endl;
	cout << pratos["B02"] << endl;
	cout << pratos["P01"] << endl;
	cout << pratos["B03"] << endl;
	cout << pratos["F02"] << endl;


	return 0;
}