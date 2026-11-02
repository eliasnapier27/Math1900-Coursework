#include <iostream>
#include <string>
using namespace std;

string checkPassphrase(string attempt)
{
	string secret = "DuranDuran";
	if (attempt != secret)
	{
		return "Incorrect";
	}
	
		return "Correct.";
	}
int main()
{
	string guess;

	cout << "Enter the password: ";
	getline(cin, guess);
	cout << checkPassphrase(guess) << endl;

	return 0;
}

 