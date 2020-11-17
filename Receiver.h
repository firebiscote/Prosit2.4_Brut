#pragma once

#include <iostream>
#include <string>

class Receiver {
public:
	Receiver();
	void doAThing();
	std::string get_message();
	void set_message(std::string message);
private:
	std::string _message;
};