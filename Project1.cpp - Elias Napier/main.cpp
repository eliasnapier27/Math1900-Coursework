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
	double timeDifferences[100];
	double tripTime;
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
		cout << "Enter Miles For Checkpoint " << i << ": ";
		cin >> position;
		cout << "Enter Hours For Checkpoint " << i << ": ";
		cin >> time;
		
	while (cin.fail() || (i > 1 && time <= previousTime))
						
	{
		cin.clear();
		cin.ignore(10000, '\n');

		cout << "Time is Invalid. Try a Later Time!" << endl;
		cout << "Enter Hours For Checkpoint " << i << ": ";
		cin >> time;
	}
	if (i == 1)
	{
		startPosition = position;
		startTime = time;
	}
	else
	{
		timeDifferences[i - 2] = time - previousTime;
		double distance = position - previousPosition;
		double timeElapsed = time - previousTime;
		double speed = distance / timeElapsed;
		cout << "Speed Between Checkpoint " << i - 1 << " and Checkpoint " << i << ": " << speed << " mph" << endl;
	}
	previousPosition = position;
	previousTime = time;
	}
	double avgSpeed = (previousPosition - startPosition) / (previousTime - startTime);
	
	cout << "\nAverage Speed: ";
	cout << avgSpeed << " mph" << endl;

	cout << "\nTime between checkpoints:\n";
	for (int j = 0; j < checkpoint - 1; j++)
	{
		cout << "Time Between Checkpoint " << j + 1 << " and Checkpoint " << j + 2 << ": " 
			<< timeDifferences[j] << " hours" << endl;
	}
	tripTime = previousTime - startTime;
	cout << "\nTotal Trip Time: " << tripTime << " hours" << endl;
	return 0;
}
