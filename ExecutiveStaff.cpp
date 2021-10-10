#include "ExecutiveStaff.h"

ExecutiveStaff::ExecutiveStaff() {
	this->Department = "";
	this->Position = "";
	this->workDay = 0;
}

void ExecutiveStaff::EnterInformation() {
	Officer::EnterInformation();
	cin.ignore();
	cout << "Nhap phong ban: ";
	getline(cin, this->Department);
	int choice;
	do {
		cout << "Chon chuc vu: " << endl;
		cout << "1. Truong phong" << endl;
		cout << "2. Pho phong" << endl;
		cout << "3. Nhan vien" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			this->Position = "Truong phong";
			this->Allowance = 2000;
			break;
		case 2:
			this->Position = "Pho phong";
			this->Allowance = 1000;
			break;
		case 3:
			this->Position = "Nhan vien";
			this->Allowance = 500;
			break;
		default:
			cout << "Ban chon sai. Hay chon lai!" << endl;
			break;
		}
	} while (choice < 1 || choice > 3);
	cout << "Nhap so ngay cong: ";
	cin >> this->workDay;
}

void ExecutiveStaff::PrintInformation(ostream& output) {
	Officer::PrintInformation(output);
	output << "Ten phong ban: " << this->Department << endl;
	output << "Chuc vu: " << this->Position << endl;
	output << "So ngay cong: " << this->workDay << endl;
	output << "Luong: " << ExecutiveStaff::CalcSalary() << endl;
}

unsigned int ExecutiveStaff::CalcSalary() {
	return this->coefficientsSalary * 730 + this->Allowance + this->workDay * 200;
}