//Including the library
#include<iostream>
using namespace std;
int main() {
	int n=5;//Declaring the variables
	for (int i=0;i<n;i++){
        //Printing (n-(i+1)) space
	for(int j=0;j<(n-(i+1));j++){
	cout<<" ";}
	for (int j=0;j<n;j++){
	//Printing the stars
	cout<<"*";}
	cout<<endl;}
return 0;
}
