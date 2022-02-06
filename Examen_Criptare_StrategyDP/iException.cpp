#include "iException.h"

void iException::show_error()
{
	std::cout << "Exception thrown ! Message code : " << this->error_message << " code error : " << this->error_code << std::endl;
}

FileNotOpened::FileNotOpened(std::string error_msg, int code) :iException(error_msg,code)
{
}
