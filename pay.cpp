//Alexis Vergara
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "person.cpp"
using namespace std;



void readData(vector <Person> &worker, vector<int> &nWorker){
ifstream input_file;
input_file.open("input.txt");
if (input_file) {
	string line;
	while (getline(input_file, line))
	cout << line << '\n';
	
	input_file.close();
		
}
}


void writeData(vector <Person> &worker, vector<int> &nWorker){
ofstream output_file;
output_file.open("output.txt");
output_file << worker[0].fullName() << " " << worker[0].totalPay(); 




output_file.close();
}


int main(){
	vector<Person> person;
	vector<int> nWorker;
	
	
	readData(person,nWorker);
	writeData(person,nWorker);
	person.emplace_back(100);
	nWorker.emplace_back(200);
	
	return 0;
}
