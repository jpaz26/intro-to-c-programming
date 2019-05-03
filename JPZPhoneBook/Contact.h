#pragma once
#include <string>
#include <iostream>



class Contact

{

public:

	Contact();

	~Contact();

private:

	std::string strFirstName;

	std::string strLastName;

	std::string strPhoneNum;

public:

	void setFirstName(std::string strpFirstName);

	std::string getFirstName();

	void inputFirstName();

	void setLastName(std::string strpLastName);

	std::string getLastName();

	void inputLastName();

	void input();

	std::string toString();

	void setPhoneNum(std::string strpPhoneNum);

	void inputPhoneNum();

	std::string getPhoneNum();


};

