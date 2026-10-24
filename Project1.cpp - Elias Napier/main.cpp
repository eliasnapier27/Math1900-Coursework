#include <iostream> 
using namespace std;

int main()
{
	int checkpoint;
	cout << "How Many Checkpoints Do You Wish To Record?: ";
	cin >> checkpoint;

	while (checkpoint <2)
	{
		cout << "You Must Record At Least 2 Checkpoints!" << endl;
		cout << "How Many Checkpoints Do You Wish To Record?: ";
		cin >> checkpoint;
	}
	cout << "You Have Chosen To Record: "
		<< checkpoint << endl;

	return 0;
}