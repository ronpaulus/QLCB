#pragma once
#include "Officer.h"

/// <summary>
/// Lớp biểu diễn thông tin nhân viên hành chính
/// </summary>
class ExecutiveStaff : public Officer
{
private:
	/// <summary>
	/// Phòng ban
	/// </summary>
	string Department;

	/// <summary>
	/// Chức vụ
	/// </summary>
	string Position;

	/// <summary>
	/// Số ngày công
	/// </summary>
	unsigned short workDay;
public:
	ExecutiveStaff();
	void EnterInformation();
	void PrintInformation(ostream& output);
	unsigned int CalcSalary();
};

