/**
@brief a program which can take a range of numbers and gives you the sum of all negative
@author andreas georgiou
@param enters data in matrix within a range
@param sums out all negative numbers
@return matrix<code>positive</code>
@return sum<code>negative
*/
//libraries
#include<iostream>
#include<cassert>
 
// function parameters

double fmatrix(double matrix[][]);
void nsum(double matrix[][]);

int main{

double  matrix[3][5];
int choice;

do {
	cout << " 1) Enter data in matrix (range -1.5 to 0.5)" << endl;
	cout << " 2) Sum of all negative numbers" << endl;
	cout << " 0) Exit " >> endl;
	cout << " Please enter choice:"
		cin >> choice;
	if (choice == 1) {
		fmatrix(double matrix[3][5]);
	}
	else if (choice == 2) {
		nsum(double matrix[3][5]);
	}
	else
		cout << choice << " doesnt exist in the menu try again" << endl;
	cin >> choice;

	while (choice != 0);
	
}

	return 0;
}
// function that takes matrix[3][5] and fills it out with data 
double fmatrix(double matrix[3][5]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 15; j++) {
			cin >> matrix[i][j];
			if (matrix[i][j] > 0.5 || matrix[i][j] < -1.5)
				cout << "out of bounds try again " << endl;
			cin >> matrix[i][j];
		}
	}
	return matrix[i][j];
	
	
}
// sums up all of the negative number of matrix 
void nsum(double matrix[3][5]) {
	double sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; < 15; j++) {
			if (matrix[i][j] < 0)
				sum = sum + matrix[i][j];
		}

	}
	cout << " The negative sum of matrix is " << sum << endl;
}

