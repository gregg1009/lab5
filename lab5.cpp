#include <iostream>
#include <string>
using namespace std;

class feature {
private:
	int speed;
	string PS; //PS - max paper size
	int NOC; //NOC - number of colors
public:
	void standart()
	{
		speed = 40;
		PS = "A4";
		NOC = 1024;
	}
	void Set(int a, string b, int c)
	{
		speed = a;
		PS = b;
		NOC = c;
	}
	void GetSpeed()
	{
		cout << speed;
	}
	void GetPS()
	{
		cout << PS;
	}
	void GetNOC()
	{
		cout << NOC;
	}
};

int main() {
	int num, ans, check;

	feature example;
	example.standart();

	cout << "Example data table:" << endl;
	cout << "# | print speed | paper size | number of colors |" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "0 |     ";
	example.GetSpeed();
	cout << "      |     ";
	example.GetPS();
	cout << "     |       ";
	example.GetNOC();
	cout << "       | " << endl;
	cout << "-------------------------------------------------" << endl << endl;
	check = 0;

	cout << "enter number of printers: ";
	cin >> num;
	feature feature[40];
	
	cout << "CHANGE DATA? (print 1)" << "\nOUTPUT DATA? (print 2)" << "\nEND EDITING? (print 0)" << endl;
	cin >> ans;

	while (ans != 0) {
		if (ans == 1) {

			check = 1;
			int i{}, a, c;
			string b;
			for (i == 1; i < num; i++)
			{
				cout << "enter speed of printer " << i << ": ";
				cin >> a;
				cout << "enter max paper size of printer " << i << ": ";
				cin >> b;
				cout << "enter number of colors of printer " << i << ": ";
				cin >> c;
				feature[i].Set(a, b, c);
				cout << endl;
			}	

			int j{};
			cout << "# | print speed | paper size | number of colors |" << endl;
			cout << "-------------------------------------------------" << endl;
			for (j == 1; j < num; j++)
			{
				cout << j << " |     ";
				feature[j].GetSpeed();
				cout << "      |     ";
				feature[j].GetPS();
				cout << "     |       ";
				feature[j].GetNOC();
				cout << "       | " << endl;
				cout << "-------------------------------------------------" << endl;
			}
			cout << endl;
			cout << "CHANGE DATA? (print 1)" << "\nOUTPUT DATA? (print 2)" << "\nEND EDITING? (print 0)" << endl;
			cin >> ans;
		}

		else if (ans == 2) {
			if (check == 0)
			{
				cout << "# | print speed | paper size | number of colors |" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "0 |     ";
				example.GetSpeed();
				cout << "      |     ";
				example.GetPS();
				cout << "     |       ";
				example.GetNOC();
				cout << "       | " << endl;
				cout << "-------------------------------------------------" << endl << endl;
			}else{
				int j{};
				cout << "# | print speed | paper size | number of colors |" << endl;
				cout << "-------------------------------------------------" << endl;
				for (j == 1; j < num; j++)
				{
					cout << j << " |     ";
					feature[j].GetSpeed();
					cout << "      |     ";
					feature[j].GetPS();
					cout << "     |       ";
					feature[j].GetNOC();
					cout << "       | " << endl;
					cout << "-------------------------------------------------" << endl;
				}
				cout << endl;
			}
			cout << "CHANGE DATA? (print 1)" << "\nOUTPUT DATA? (print 2)" << "\nEND EDITING? (print 0)" << endl;
			cin >> ans;
		}
	}
	return 0;
}