#pragma once
#include <iostream>
#include <string>
class iException
{
private:
	std::string error_message;
	int error_code;
public:
	iException(std::string error_msg,int code) : error_message(error_msg),error_code(code){}

	void show_error();
};

class FileNotOpened : public iException {
public:

	FileNotOpened(std::string error_msg, int code = 1);

};