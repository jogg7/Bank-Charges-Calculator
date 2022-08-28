#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float balance, a, b; // a represents checks fees, b represents balance after check fees
	int checks;

	//Ask user for balance and number of checks written 
	cout << "What is your current balance? ";
	cin >> balance;
	cout << "How many checks have you written for the month? ";
	cin >> checks;

	//Subtract 10 from balance
	balance -= 10;

	//Subtract another 15 if the balance is under 400$
	if (balance <= 400)
		balance -= 15;

	//Calculate fees depending on number of checks written
	if (checks < 20)
		a = 0.10 * checks;

	else if (checks > 20 && checks < 40)
		a = 0.08 * checks;

	else if (checks > 40 && checks <60)
		a = 0.06 * checks;

	else if (checks >= 60)
		a = 0.04 * checks;

	else (checks < 0) 
	{
		cout << "Urgent Message\n";
		cout << "Your account is overdrawn\n.";
		return 0;
	}




	//Subtract total fees out from total remaning balance
	b = (balance - a);
	
	//Output the cents after the dollars
	cout << setprecision(2) << fixed;

	//Give user thier new balance
	cout << "Your new balance after fees is " << b << "." << endl;


	return 0;
}