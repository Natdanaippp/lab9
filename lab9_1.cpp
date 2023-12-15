#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double PrevBalance,Interest01,Interest02,amount;
	double Total,NewBalance;
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin>>Interest01;
	cout << "Enter amount you can pay per year: ";	
	cin>>amount;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	NewBalance=PrevBalance;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	for(int i=1;NewBalance!=0;i++)
	{	cout << fixed << setprecision(2);
		
		Interest02=PrevBalance*(Interest01/100);
		Total=PrevBalance+Interest02;
		NewBalance=Total-amount;
		if(amount>=Total)
		{
			amount=Total;
			cout << setw(13) << left << i; 
			cout << setw(13) << left << PrevBalance;
			cout << setw(13) << left << Interest02;
			cout << setw(13) << left << Total;
			cout << setw(13) << left << amount;
			cout << setw(13) << left << Total-amount;
			break;
		}
		cout << setw(13) << left << i; 
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << Interest02;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << amount;
		PrevBalance=NewBalance;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
	}
		
	
	return 0;
}
