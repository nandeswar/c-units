//
//  E01_Functions.cpp
//  Unit1_exercise1_understanding_functions
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E01_FunctionsSpec.cpp file.
 
 */


//
// Note:
//  Think of all the edge cases.
//
// returns the mid-point of
// given 2 points on X-axis
//
int midPoint(int x1, int x2) {
	int midpoint = 0;
	midpoint = x1 + ((x2 - x1) / 2);
    return midpoint;
}

//
// sum of most significant digits of non-negative integers.
//
int sumOfMSDs(int num1, int num2) {
	while (num1 > 9) {
		num1 = num1 / 10;
	}
	while (num2 > 9) {
		num2 = num2 / 10;
	}
	int sum = num1 + num2;
    return sum;
}

//
// sum of two 100 digit positive numbers
//
void sumOf100DigitNumbers(int num1[100], int num2[100], int sum[101]) {
	int i, add = 0, j = 0;
	for (i = 99; i >= 0; i--) {
		num2[i] += j;
		add = num1[i] + num2[i];
		if (add > 9) {
			j = add / 10;
			add = add % 10;
		}
		else {
			j = 0;
		}
		sum[i + 1] = add;
	}
	sum[i+1] = j;
}

//
// product of two 100 digit positive numbers
//
void productOf100DigitNumbers(int num1[100], int num2[100], int prod[200]) {
    
}
