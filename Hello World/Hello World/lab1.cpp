#include "lab1.h"
#include<iostream>
using namespace std;
// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	// Replace this line with your code (have fun!).
	int numberA{ a };
	int numberB{ b };
	if (a == b) {
		return a;
	}
	else if (a > b) {

		while (numberB > 0)
		{
			if (a % numberB != 0) {
				numberB--;
			}
			else {
				return numberB;
			}
		}
	}
	else {
		while (numberA > 0)
		{
			if (b % numberA != 0) {
				numberA--;
			}
			else {
				return numberA;
			}
		}
	}
	return 0;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	// Replace this line with your code (challenge: do this with recursion!).
	if (n == 0) {
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		return fibonacci(n - 2) + fibonacci(n - 1);
	}

	return 0;
}
