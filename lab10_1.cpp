#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){
	double prev,interest,rate,total,pay,newb;
	
	cout << "Enter initial loan: ";
	cin >> prev;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

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
	
	for(int count = 1; newb > 0 ; count++){

	interest = prev*(rate/100);
	total = prev+interest;
	newb = total-pay;

		if(newb<0){
			pay = total;
			newb = total-pay;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << count; 
			cout << setw(13) << left << prev;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << newb;
			cout << "\n";
			break;
		}
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << count; 
	cout << setw(13) << left << prev;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << newb;
	cout << "\n";
	prev = newb;	
	}

	
	return 0;
}
