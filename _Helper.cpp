#include "_Helper.h"

string Helper::GetFirstName(string str) {
	string firstName;
	size_t pos = str.find_last_of(" ");
	firstName = str.substr(pos + 1);
	return firstName;
}
