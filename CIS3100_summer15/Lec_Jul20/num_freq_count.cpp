#include <iostream>

using namespace std;

void main(){
	// initialize variables
	const int size = 10;
	int num_array[size] = { 1, 2, 44, 5, 66, 56, 66, 7, 9, 2 };
	int unique[10] = {0};
	int count[size] = { 0 };

	// count number of occurances or frequency
	for (int i = 0; i<size; i++){
		int temp = num_array[i];
		for (int j = 0; j<size; j++){
			if (num_array[j] == temp)
				count[j]++;
		}
	}

	bool flag=1; // use this flag to check for uniques

	// find uniques
	for (int k = 0; k < size; k++){
		for (int m = 0; m < size; m++){
			if (unique[m] == num_array[k]){
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			unique[k] = num_array[k];
		else
			unique[k] = num_array[k] - 10;
		flag = 1;
	}

	// print the frequencies if there is a match between unique and num_array
	cout << "Number\t" << "Frequency"<<endl;
	cout << "************************"<<endl;
	for(int m = 0;m<size;m++){
		if (unique[m] == num_array[m]){
			cout << num_array[m] << " \t \t" << count[m]<<endl;

		}
	}
	
}