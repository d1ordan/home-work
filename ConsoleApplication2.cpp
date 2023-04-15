//Стоврити масив з 10 елементів, тобто продуктів і записати туди їх
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string food[10];
	for (int i = 0; i < 5; i++) {
		getline(cin, food[i]);
	}

	for (int i = 0; i < 5; i++)
		cout << food[i] << endl;
	
}
