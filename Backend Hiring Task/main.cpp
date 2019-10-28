#include<iostream>
#include<string>

using namespace std;
bool encrypt(string& s);

void main() {
	string example;
	cout << "Please input string to encrypt\n";
	getline(cin, example);
	if(encrypt(example))
		cout << "The encrypted string is: "<< example << endl;
	else
		cout << "Error: Invalid Character found\n";
	system("pause");
	return;
}
bool encrypt(string& s)										//Returns success boolean
{
	string temp = s;
	for (int iter = 0; iter < s.length(); iter++)			//For each character in the string
	{

		if (s[iter] != ' ')									//If the character is not a space
		{
			if (s[iter] > 64 && s[iter] < 91)				//If the character is capital
			{
				s[iter] += 3;
				if (s[iter] > 90)							//If the character is out of capital letter range
					s[iter] -= 26;							//Make the encoding cyclical
			}
			else
				if (s[iter] > 96 && s[iter] < 123)			//If the character is lowercase
				{
					s[iter] += 3;
					if (s[iter] > 122)						//If the character is out of lowercase letter range
						s[iter] -= 26;						//Make the encoding cyclical
				}
				else										//If it is not a letter and not a letter
				{
					s = temp;								//Return string to original value
					return false;							//Failed encodee
				}
		}

	}
	return true;											//Successful encode
}