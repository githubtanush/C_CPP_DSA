// #include <iostream>
// using namespace std;

// int main() {
  
//   int num = 7;

//   if(num%2 == 0) {
//     cout << "Even" << endl;
//   }
//   else {
//     cout << "Odd" << endl;
//   }




// //   int num = 0;

// //   if(num > 0) {
// //     cout << "Positive " << endl;
// //   }
// //   else if(num < 0) {
// //     cout << "negative" << endl;
// //   }
// //   else {
// //     cout << "zero" << endl;
// //   }
  
//   return 0;
// }



// #include<iostream>
// using namespace std;

// int main() {
// 	int i=1;
// 	for(; ; ) {
// 		cout << "value of i is :" << i << endl;
// 		if(i<5) {
// 			cout << "babbar" << endl;
// 			i=i+1;
// 		}
// 		else {
// 			break;
// 		}
		
// 	}

// 	cout << "Hi" << endl;

	
// 	// for(int i=0; i<3; i=i+1) {
// 	// 	cout<< endl << "Outer Loop " << i << endl << endl; 
		
// 	// 	for(int j=0; j<3; j=j+1) {
// 	// 		cout << "inner loop " << j << endl;
// 	// 	}
		
// 	// }
	
// 	// for(int i=0; i<5; i=i+1) {
// 	// 	cout << "A" << " ";
// 	// }
// 	// cout << endl;
	
// 	// for(int i=10 ;i>=0; i= i - 3) {
// 	// 	cout << i << endl;
// 	// }
	
// 	// for(int i=2; i<10; i=i+2) {
// 	// 	cout << i << endl;
// 	// }

// 	// for(int i=10; i<=12; i=i+1) {
// 	// 	cout << "Monica, my darlo" << endl;
// 	// }

	
// 	// int num = 8;
	
// 	//   if(num%2 == 0) {
// 	//     cout << "Even" << endl;
// 	//   }
// 	//   else {
// 	//     cout << "Odd" << endl;
// 	//   }
// 	// int marks;

// 	// cout << "Enter the marks here: " << endl;
// 	// //take input from user
// 	// cin >> marks;

// 	// cout << "Printing marks: " << marks << endl;
	

// 	// int age = 101;
// 	// int car = 12;
	
// 	// if(age >= 18 || car >=1) {
// 	// 	cout << "License miljaega" << endl;
// 	// }

// 	// cout << !age << endl;
	
// 	// int a = 20;
// 	// int b = 10;

// 	// cout << (a == b) << endl;
		
// 	// int a = 3;
// 	// int b = 2;

// 	// cout << a + b << endl;
// 	// cout << a - b << endl;
// 	// cout << a*b << endl;
// 	//cout << a/b << endl;
// 	//cout << b % a << endl; 
// 	//garbage value
// 	// int num;
// 	// num = 12;
// 	// cout << num << endl;

// 	//int -> 4 byte
// 	// int num = 50;
// 	// cout << num << endl;

// 	// cout << sizeof(num) << endl;

// 	// //character -> 1byte
// 	// char ch = 'k';
// 	// cout << ch << endl;
// 	// cout << sizeof(ch) << endl;

// 	// //float -> 4 byte
// 	// float point = 1.69;
// 	// cout << point << endl;
// 	// cout << sizeof(point) << endl;

// 	// //long -> 4 byte
// 	// long number = 23;
// 	// cout << number << endl;
// 	// cout << sizeof(number) << endl;
	
// 	// cout << "Love " << endl << "babbar" << '\n';
// 	// cout << "Love Babbar" << endl ;
// 	// cout << endl;
// 	// cout << endl;
// 	// cout << '\n';
// 	// cout << "Lovely Babbar" ;

// 	//find in homework
// 	return 0;
// }



#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for(int row=0; row<n; row=row+1 ){
		for(int col=0; col<n-row; col=col+1) {
			cout << col+1<< " ";
		}
		cout << endl;
	}

	// for(int row=0; row<n; row=row+1) {
	// 	for(int col=0; col<row+1; col = col + 1) {
	// 		cout << col+1 << " ";
	// 	}
	// 	cout << endl;
	// }

	// for(int row=0; row<n; row=row+1) {
	// 	for(int col=0; col<n-row; col=col+1) {
	// 		cout << "* " ;
	// 	}
	// 	cout << endl;
	// }
	
	// int n;
	// cin >> n;

	// for(int row=0; row<n; row=row+1) {
	// 	for(int col=0; col<row+1; col=col+1) {
	// 		cout << "* ";
	// 	}
	// 	cout << endl;
	// }

	// int ROWS = 10;
	// int COLS = 7;
	// //outer loop
	// for(int row=0; row<ROWS; row=row+1 ) {
	// 	//inner loop
	// 	for(int col=0; col<COLS; col=col+1) {
	// 		//if zeroth or last row, then print star
	// 		if(row == 0 || row == ROWS-1) {
	// 			cout << "* ";
	// 		}
	// 		else {
	// 			if(col ==0 || col ==COLS-1) {
	// 				cout << "* ";
	// 			}
	// 			else {
	// 				cout << "  ";
	// 			}
	// 		}
	// 	}
	// 	cout << endl;
	// }


	
	//outer loop -> rows
	// for(int i=0; i<3; i=i+1) {
	// 	//for each row, print 5 star
	// 	//inner loop -> print 5 stars

	// 	for(int j=0; j<5; j=j+1) {
	// 		cout << "* ";
	// 	}
	// cout << endl;
		
	// }
	
	//outer loop -> rows
	// for(int i=0; i<4; i=i+1) {

	// 	//print 4 stars
	// 	for(int j=0; j<4; j=j+1) {
	// 		cout << "* ";
	// 	}
	// 	cout << endl;
	// }



	return 0;
}