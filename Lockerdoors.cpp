#include <iostream>
#include <string>

using namespace std;
int counter = 0;


void LockerDoors(string ArrayDoors[], int k) {
	for (int i = 0; i < k; i++) {
		//cout << ArrayDoors[i] << " | ";// the first state of the doors
		if (i == k - 1) {
		}
	}

	cout << "\n";
	for (int o = 0; o < k; o++) {
		for (int p = 0; p < k; p++) {
			if (((p + 1) % (o + 1)) == 0) {
				if (ArrayDoors[p] == " C ") { //processes the changes of the door, if it is close open it
					ArrayDoors[p] = " OT ";
					
				}
				else if (ArrayDoors[p] == " O ") {// processes the changes of the door, if it is open in contrast close it.
					     ArrayDoors[p] = " CT ";
					    counter++;
				}

			}
		}

		for (int b = 0; b < k; b++)
		{
			cout << ArrayDoors[b];
			if (b == k - 1) {
			}
		}
	

		cout << "\n";
		if (o != k - 1) {
			for (int b = 0; b < k; b++)
			{
				if (ArrayDoors[b] == " OT ") {
					ArrayDoors[b] = " O ";
				}
				
				else if(ArrayDoors[b] == " CT "){
					  ArrayDoors[b] = " C ";
				
			      
				}
				
			}

		}
	}
	while (int i = 0) {
		cout << ArrayDoors[i];
	}

	cout << "\n";
	cout << "the number of times the basic operation is executed:" << counter << endl; //prints out the number of operation execution
}


int main()
{
	string a[3000];
	for (int i = 0; i < 2000; i++) {
		a[i] = " C ";
	}
	cout << " n = 10\n" << endl;
	LockerDoors(a, 10);// the numbers 10, 20, 30 and etc. is placed in here so you can change it to suit.
	system("pause");
}

