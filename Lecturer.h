#pragma once
#include "Officer.h"

/// <summary>
/// Lớp biểu diễn thông tin giảng viên
/// </summary>
class Lecturer : public Officer
{
private:
	/// <summary>
	/// Khoa
	/// </summary>
	string Faculty;

	/// <summary>
	/// Trình độ
	/// </summary>
	string Degree;

	/// <summary>
	/// Số tiết dạy
	/// </summary>
	unsigned short Lesson;
public:
	Lecturer();
	void EnterInformation();
	void PrintInformation(ostream& output);
	unsigned int CalcSalary();
};

