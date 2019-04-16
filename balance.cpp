#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;


struct PERSON{
	char Name[20];
	float Balance;};


void Display(PERSON(&person)[10], int &nPeople){
for (int i = 0; i < nPeople; i++) {

cout << person[i].Name << " " << person[i].Balance << endl;

}
} 

void findRichest (PERSON (&personF)[10], int &nPeople){
	float tmp = personF[0].Balance;
	int counter = 0;
	string name1;
	
	while (counter < nPeople) {
		while (tmp < personF[counter].Balance){
			tmp = personF[counter].Balance;
			name1 = personF[counter].Name;
		}
		counter++;
		

	}
		cout << "The customer with maximum balance is " << name1 << endl << endl;
}

void Deposit(string name2, PERSON (&personF)[10], int &nPeople){
	int i = 0;
	float temp;
	
	cout << name2 << ", how much would you like to deposit?" << endl;
	cin >> temp;
	
	while  (i < nPeople){
		
		if (name2 == personF[i].Name) {
			personF[i].Balance += temp;
			cout << "Now your new balance is " << personF[i].Balance << endl;
	}
	
	i++;
}

}

void NewCopy(string namefile, PERSON (&person)[10], int &nPeople){
	ofstream output_file;
	output_file.open(namefile);
	if (output_file.is_open()){
	
	for (int i = 0; i < nPeople; i++){
	output_file << person[i].Name << " " << person[i].Balance << endl;
	
	
	
	
	
}
	output_file.close();
	
}
}
int main(){
int counter = 0;

string fName;
string lName;
string fullname;
string customer;
int nPeople = 6;
float pay;

	string filename = "data.txt";
	ifstream file;
	
	PERSON person[10]; 

	file.open(filename.c_str());
	if (file.is_open()) {
	while(file.eof() == false) {
		file >> fName >> lName >> pay; 
		person[counter].Balance = pay;
		fullname = (fName + " " + lName);
		strcpy(person[counter].Name, fullname.c_str());
	
	
	++counter;
		
	}
}

	else {
		cout << "file not open!" << endl;
		
	}
	Display(person, nPeople);
	findRichest(person, nPeople);
	cout << "Enter your full name to deposit money " << endl;
	getline(cin, customer);
	
	
	
	
	
	Deposit(customer, person, nPeople);
	NewCopy(filename, person, nPeople);

	return 0;
}


	

