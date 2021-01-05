#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double prevbalance,rate,payment;
	cout << "Enter initial loan: ";
	cin >> prevbalance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >>payment;
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
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int time=1;
	double interest,total,newbalance;
	while(prevbalance>0){
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << time; 
	cout << setw(13) << left << prevbalance;
	interest= (double) prevbalance*rate/100;
	cout << setw(13) << left << interest;
	total=prevbalance+interest;
	cout << setw(13) << left << total;
	if(total<payment){
		payment = total;
	}
	cout << setw(13) << left << payment;
	newbalance=total-payment;
	cout << setw(13) << left << newbalance;
	cout << "\n";
	time++;
	prevbalance=newbalance;
		
	}
	return 0;
}
