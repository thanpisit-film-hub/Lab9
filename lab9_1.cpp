#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double _findAns(double x, double y, double z){
	double _Pre = x, _inter, _Total, _Pay, _New;
	for(int i = 1; _New > 0; i++){

		_inter = y/100 * _Pre;
		_Total = _Pre + _inter;
		_Pay = z;
		if(_Total - _Pay < 0){
			_Pay = _Total;
		}
		_New = _Total - _Pay;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << i;
		cout << setw(13) << left << _Pre; 
		cout << setw(13) << left << _inter;
		cout << setw(13) << left << _Total;
		cout << setw(13) << left << _Pay;
		cout << setw(13) << left << _New;
		cout << "\n";

		_Pre = _New;	
	}
	return 0;
}

int main(){
	double _loan, _interest, _amount;	
	cout << "Enter initial loan: ";
	cin >> _loan;
	cout << "Enter interest rate per year (%): ";
	cin >> _interest;
	cout << "Enter amount you can pay per year: ";
	cin >> _amount;
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

	//start
	_findAns(_loan, _interest, _amount);
	//end
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/*cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/
	
	return 0;
}
