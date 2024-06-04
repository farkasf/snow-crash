#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int ac, char **av) {
	if (ac != 2) {
		cout << "usage: ./filius <token>" << std::endl;
		return 1;
	}
	
	ifstream file(av[1]);
	if (!file) {
		cout << "token reading failed";
		return 1;
	}

	string content;
	getline(file, content);

	for (int i = 0; i < content.size(); ++i) {
		cout << static_cast<char>(content[i] - i);
	}
	
	cout << endl;
	
	return 0;
}
