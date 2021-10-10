#pragma once
#include <iostream>
#include "_Helper.h"

/// <summary>
/// Lớp biểu diễn thông tin cán bộ
/// </summary>
class Officer
{
protected:
	/// <summary>
	/// Họ tên
	/// </summary>
	string fullName;

	/// <summary>
	/// Hệ số lương
	/// </summary>
	unsigned short coefficientsSalary;

	/// <summary>
	/// Phụ cấp
	/// </summary>
	unsigned int Allowance;
public:
	Officer();
	virtual void EnterInformation();
	virtual void PrintInformation(ostream& output);
	string GetFirstName();
	virtual unsigned int CalcSalary() = 0;
};

