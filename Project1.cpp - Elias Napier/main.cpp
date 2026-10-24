#include <iostream> 
using namespace std;

int main()
{
	double position, time;
	double previousPosition = 0;
	double previousTime = 0;
	double startPosition = 0;
	double startTime = 0;
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
	for (int i = 1; i <= checkpoint; i++)
	{
		cout << "Enter Position For Checkpoint " << i << ": ";
		cin >> position;
		cout << "Enter Time For Checkpoint " << i << ": ";
		cin >> time;
	while (cin.fail() || (i > 1 && time <= previousTime))
						
	{
		cin.clear();
		cin.ignore(10000, '\n');

		cout << "Time is Invalid. Try a Later Time!" << endl;
		cout << "Enter Time For Checkpoint " << i << ": ";
		cin >> time;
	}
	if (i == 1)
	{
		startPosition = position;
		startTime = time;
	}
	else
	{
		double distance = position - previousPosition;
		double timeElapsed = time - previousTime;
		double speed = distance / timeElapsed;
		cout << "Speed Between Checkpoint " << i - 1 << " and Checkpoint " << i << ": " << speed << endl;
	}
	previousPosition = position;
	previousTime = time;
	}
	return 0;
}
