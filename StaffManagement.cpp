#include "StaffManagement.h"

void StaffManagement::EnterOfficerList() {
	Officer* Officer;
	int choice;
	do {
		system("cls");
		cout << "1. Nhap giang vien" << endl;
		cout << "2. Nhap nhan vien hanh chinh" << endl;
		cout << "3. Thoat" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			Officer = new Lecturer();
			Officer->EnterInformation();
			officerList.push_back(Officer);
			break;
		case 2:
			Officer = new ExecutiveStaff();
			Officer->EnterInformation();
			officerList.push_back(Officer);
			break;
		case 3:
			break;
		default:
			break;
		}
	} while (choice != 3);
}

void StaffManagement::PrintOfficerList(ostream& output) {
	for (size_t i = 0; i < officerList.size(); ++i) {
		officerList[i]->PrintInformation(output);
		cout << "---------------------------------" << endl;;
	}
}

unsigned int StaffManagement::CalcTotalSalary() {
	unsigned int total = 0;
	for (size_t i = 0; i < officerList.size(); ++i) {
		total += officerList[i]->CalcSalary();
	}
	return total;
}

void StaffManagement::FindHighestLecturerSalary() {
	Officer* highestLecturerSalary = nullptr;
	for (size_t i = 0; i < officerList.size(); ++i) {
		cout << (string)typeid(*officerList[i]).name();
		if ((string)typeid(*officerList[i]).name() == "class Lecturer" && highestLecturerSalary == nullptr) {
			highestLecturerSalary = officerList[i];
		}
		else {
			if (officerList[i]->CalcSalary() > highestLecturerSalary->CalcSalary()) {
				highestLecturerSalary = officerList[i];
			}
		}
	}

	ofstream f;
	f.open("HighestLecturerSalary.txt");
	if (highestLecturerSalary != nullptr) {
		for (size_t i = 0; i < officerList.size(); ++i) {
			if (officerList[i]->CalcSalary() == highestLecturerSalary->CalcSalary()) {
				officerList[i]->PrintInformation(f);
			}
		}
	}
	f.close();
}