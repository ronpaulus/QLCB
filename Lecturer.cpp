#include "Lecturer.h"

Lecturer::Lecturer() {
	this->Faculty = "";
	this->Lesson = 0;
	this->Degree = "Cu Nhan";
}

void Lecturer::EnterInformation() {
	Officer::EnterInformation();
	cin.ignore();
	cout << "Nhap ten khoa: ";
	getline(cin, this->Faculty);
	int choice;
	do {
		cout << "Chon trinh do: " << endl;
		cout << "1. Cu Nhan" << endl;
		cout << "2. Thac Si" << endl;
		cout << "3. Tien Si" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			this->Degree = "Cu Nhan";
			this->Allowance = 300;
			break;
		case 2:
			this->Degree = "Thac Si";
			this->Allowance = 500;
			break;
		case 3:
			this->Degree = "Tien Si";
			this->Allowance = 1000;
			break;
		default:
			cout << "Ban chon sai. Hay chon lai!" << endl;
			break;
		}
	} while (choice < 1 || choice > 3);
	cout << "Nhap so tiet: ";
	cin >> this->Lesson;
}

void Lecturer::PrintInformation(ostream& output) {
	Officer::PrintInformation(output);
	output << "Ten khoa: " << this->Faculty << endl;
	output << "Trinh do: " << this->Degree << endl;
	output << "So tiet day: " << this->Lesson << endl;
	output << "Luong: " << Lecturer::CalcSalary() << endl;
	output << "Ten: " << Officer::GetFirstName() << endl;
	
}

unsigned int Lecturer::CalcSalary() {
	return this->coefficientsSalary * 730 + this->Allowance + this->Lesson * 45;
}