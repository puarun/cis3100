#include <iostream>

using namespace std;

void main2(){
	char word[25] = "madam25"; // word to check for palindrome
	int length=0; // length of the string
	int flag; // flag to determine if palindrome or not

	// This loop check for the length of the string by stopping at 
	// the null character
	for(int i=0;word[i]!='\0';++i){
		++length;
	}
	// output length of word to the console
	cout<<"Length of "<<word<<" is: "<<length<<endl;

	// this checks if word is a palindrome
	for(int j=0;j<length/2;++j){
		if(word[j]!=word[length-1-j])
			flag = 1;
	}
	// check for the value of flag before deciding if word is a palindrome
	if (flag == 1)
		cout<<word<<" is not a palindrome."<<endl;
	else
		cout<<word<<" is a palindrome."<<endl;

}