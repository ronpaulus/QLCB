#include "Officer.h"

Officer::Officer() {
	this->fullName = "";
	this->coefficientsSalary = 0;
	this->Allowance = 0;
}

void Officer::EnterInformation() {
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, this->fullName);
	cout << "Nhap he so luong: ";
	cin >> this->coefficientsSalary;
}

void Officer::PrintInformation(ostream& output) {
	output << "Ho ten: " << this->fullName << endl;
	output << "He so luong: " << this->coefficientsSalary << endl;
}

string Officer::GetFirstName() {
	return Helper::FirstName(this->fullName);
}

