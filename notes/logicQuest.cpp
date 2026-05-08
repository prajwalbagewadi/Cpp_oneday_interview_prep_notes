#include <iostream>
using namespace std;
//1. Palindrome Number
/*
Logic:
- Reverse the number and compare it with original number

Steps:
- Take input
- Store original num
- Extract the last digit using %10
- Build reverse num
- Remove the last digit /10
- Compare original and reverse
*/

//int main() {
//	int num;
//	cin >> num;
//	int org = num;
//	int rev = 0;
//	
//	while(num!=0) {
//		int digit = num % 10;
//		rev = rev * 10 + digit;
//		num = num / 10;
//	}
//	cout << "rev=" << rev << endl;
//	if (org == rev) {
//		cout << "Palindrome Num.";
//	} 
//	else {
//		cout << "Not Palindrome Num.";
//	}
//	return 0;
//}

//2. Prime Number
/*
Logic:
- A prime number has only 2 factors:
- 1
- number itself
- Check divisibility from 2 to n-1 (or sqrt(n))

Steps:
- input num
- check if divisibility by any num
- if divisible -> not prime
- else -> prime
*/

//int main() {
//	int n;
//	cin >> n;
//	
//	if(n<=1) {
//		cout << n << "not Prime." << endl;
//		//break;
//	}
//	
//	int i = 2;
//	while(i<n) {
//		if(n%i == 0) {
//			cout << n << " not Prime." << endl;
//			return 0;
//		}
//		i++;
//	}
//	
//	cout << n << " Prime." << endl;
//	return 0;
//}

//3. fibonacci series
/*
Logic:
- each num is the sum of previous two nums.
- 0 1 1 2 3 5 8

Steps:
- Start with 0 and 1
- Add them 
- Shift numbers forward
*/

//int main() {
//	int n;
//	cin >> n;
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	
//	for(int i = 1; i <= n; i++) {
//		cout << a << "\t";
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}

//4. Factorial
/*
Logic:
- Multiply all numbers from 1 to n.
- 5! = 5 × 4 × 3 × 2 × 1

Steps:
- Start result = 1.
- Multiply nums one by one.
*/

//int fact(int n) {
//	if(n == 0 || n == 1){
//		return 1; //base case
//	}
//	return n * fact(n-1);
//}
//
//int main() {
//	cout << fact(5);
//	return 0;
//}

//5. Armstrong number
/*
Logic:
- Sum of powers of digit equals original num.
- 153
- 1³ + 5³ + 3³ = 153

Steps:
- count digits
- extract each digit
- raise digit to power of count
- Add result
- Compare with original
*/

//int main() {
//	int num = 153;
//	int org = num;
//	int sum = 0;
//	int digit;
//	
//	while(num!=0) {
//		digit = num % 10;
//		sum = sum + (digit * digit * digit);
//		num = num / 10;
//	}
//	
//	cout << "sum=" << sum << endl;
//	if(sum == org) {
//		cout << "Armstrong." << endl;
//	}
//	else {
//		cout << "Not Armstrong." << endl;
//	}
//	return 0;
//}

//6. Array max and min
/*
Logic:
- Compare elements one by one.

Steps:
- Assume first element is max/min
- Traverse array
- update max/min
*/

//int main() {
//	int n = 4;
//	int arr[n] = {24, 12, 59, 41};
//	int max = arr[0];
//	int min = arr[0];
//	
//	for(int i=0; i < n; i++) {
//		if(arr[i] > max) {
//			max = arr[i];
//		}
//		if(arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	
//	cout << "max=" << max << endl;
//	cout << "min=" << min << endl;
//	
//	return 0;
}
