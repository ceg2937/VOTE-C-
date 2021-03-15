#include <iostream>
#include <string>
using namespace std;

int main()
{
	//create an application to determine voting status
	//to vote, you  must be 18 or older  and you must be an USA citizen
	//strings - set of charts that could form words or phrases
	// LOGICAL OPERATORS && (and) || (OR)
	// check for valid age. age must be between 1 and 125  - data  vali

	int age;
	string response;

	// ASK FOR AGE
	cout << "how old are you? {1-125}: ";
	cin >> age;

	// ASK USER IF THEY ARE US citizens
	cout << "Are You A US citizen (Yes/No): ";
	cin >> response;

	//Determine the voting status
	if( age < 1 || age > 125 ) //T || T  = T; T || F = T; F || T = T; F || F = F;
	{
		cout << "ERROR: Please enter valid age between 1 and 125!" << endl;
	} 
	else if ( age >= 18 && (response == "yes" || response == "Yes") ) // T && T = T; T && F = F; F && T = F; F && F = F; 
	{
		cout << "you are eliable to vote!" << endl;
	}
	else 
	{
		cout << "You may not vote!!" <<endl;
	}
	return 0;
}
