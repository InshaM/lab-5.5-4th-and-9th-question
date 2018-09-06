
//Include in the library
#include<iostream>
using namespace std;
int main() {
		int n=5;
		for (int i= 0 ; i < n ; i++){
			//Print  i+1 stars for 1st,2nd and last row
			if ( i == 0 || i  == 1 || i == 4) {
				for (int j = 0 ; j < (i+1) ; j++ ){
					cout << "*";
				}
				cout <<endl;
			}
			else{
				//Print star
				cout <<"*";
				//Print space
				for (int j=0;j<(i-1);j++){
					cout << " ";
				}
				//Print star
			cout << "*";
			cout <<endl;
			}}
return 0;
}

