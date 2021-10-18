#include "StaffManagement.h"

int main() {
	StaffManagement StaffManagement;
	int choice;

	do {
		system("cls");
		cout << "============== MENU ==============" << endl;
		cout << "1. Nhap danh sach" << endl;
		cout << "2. In danh sach ra console" << endl;
		cout << "3. In danh sach ra file" << endl;
		cout << "4. Tinh tong luong" << endl;
		cout << "5. Tim giang vien luong cao nhat" << endl;
		cout << "0. Thoat" << endl;
		cout << "=================================" << endl;
		cout << "Nhap lua chon: ";
		cin >> choice;

		switch (choice)
		{
		case 0: break;
		case 1:
			StaffManagement.EnterOfficerList();
			break;
		case 2:
			StaffManagement.PrintOfficerList(cout);
			system("pause");
			break;
		case 3: {
			ofstream f;
			f.open("List.txt");
			StaffManagement.PrintOfficerList(f);
			f.close();
			break;
		}
		case 4: {
			unsigned int totalSalary = StaffManagement.CalcTotalSalary();
			cout << "Tong luong: " << totalSalary << endl;
			system("pause");
			break;
		}
		case 5:
			StaffManagement.FindHighestLecturerSalary();
			break;
		default:
			cout << "Ban chon sai!";
			break;
		}
	} while (choice != 0);
}