#pragma once
#include <vector>
#include <fstream>
#include "Officer.h"
#include "Lecturer.h"
#include "ExecutiveStaff.h"

/// <summary>
/// Lớp biểu diễn các chức năng quản lý cán bộ
/// </summary>
class StaffManagement
{
private:
	vector<Officer*> officerList;
public:
	void EnterOfficerList();
	void PrintOfficerList(ostream& output);
	unsigned int CalcTotalSalary();
	void FindHighestLecturerSalary();
};

