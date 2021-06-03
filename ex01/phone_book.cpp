#include "phone_book.hpp"

/* -------------- setter --------------- */
void Phone_Book::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Phone_Book::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Phone_Book::set_nick_name(std::string nick_name)
{
	this->nick_name = nick_name;
}

void Phone_Book::set_login(std::string login)
{
	this->login = login;
}

void Phone_Book::set_postal_address(std::string postal_address)
{
	this->postal_address = postal_address;
}

void Phone_Book::set_email_address(std::string email_address)
{
	this->email_address = email_address;
}

void Phone_Book::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Phone_Book::set_birthday_date(std::string birthday_date)
{
	this->birthday_date = birthday_date;
}

void Phone_Book::set_favoite_meal(std::string favoite_meal)
{
	this->favoite_meal = favoite_meal;
}

void Phone_Book::set_underwear_color(std::string underwear_color)
{
	this->underwear_color = underwear_color;
}

void Phone_Book::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

/* -------------- getter --------------- */
std::string &Phone_Book::get_first_name(void)
{
	return (this->first_name);
}

std::string &Phone_Book::get_last_name(void)
{
	return (this->last_name);
}

std::string &Phone_Book::get_nick_name(void)
{
	return (this->nick_name);
}

std::string &Phone_Book::get_login(void)
{
	return (this->login);
}

std::string &Phone_Book::get_postal_address(void)
{
	return (this->postal_address);
}

std::string &Phone_Book::get_email_address(void)
{
	return (this->email_address);
}

std::string &Phone_Book::get_phone_number(void)
{
	return (this->phone_number);
}

std::string &Phone_Book::get_birthday_date(void)
{
	return (this->birthday_date);
}

std::string &Phone_Book::get_favoite_meal(void)
{
	return (this->favoite_meal);
}

std::string &Phone_Book::get_underwear_color(void)
{
	return (this->underwear_color);
}

std::string &Phone_Book::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

int Phone_Book::set_infos(void)
{
	std::string info_names[11] = {
		"first_name",
		"last_name",
		"nick_name",
		"login",
		"postal_address",
		"email_address",
		"phone_number",
		"birthday_date",
		"favoite_meal",
		"underwear_color",
		"darkest_secret"
	};

	std::string entry;
	for (int i = 0; i < 11; i++)
	{
		std::cout << info_names[i] << " : ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			return (1);
		if (entry.empty())
		{
			std::cout << "Please input " << info_names[i] << "!" << std::endl;
			i--;
		}
		else
		{
			if (i == 0) set_first_name(entry);
			else if (i == 1) set_last_name(entry);
			else if (i == 2) set_nick_name(entry);
			else if (i == 3) set_login(entry);
			else if (i == 4) set_postal_address(entry);
			else if (i == 5) set_email_address(entry);
			else if (i == 6) set_phone_number(entry);
			else if (i == 7) set_birthday_date(entry);
			else if (i == 8) set_favoite_meal(entry);
			else if (i == 9) set_underwear_color(entry);
			else if (i == 10) set_darkest_secret(entry);
		}
	}
	return (0);
}

void	Phone_Book::print_info(void)
{
	std::string info_names[11] = {
	"first_name",
	"last_name",
	"nick_name",
	"login",
	"postal_address",
	"email_address",
	"phone_number",
	"birthday_date",
	"favoite_meal",
	"underwear_color",
	"darkest_secret"
	};
	std::string info;

	for (int i = 0; i < 11; i++)
	{
		std::cout << info_names[i] << " : ";
		if (i == 0) info = get_first_name();
		else if (i == 1) info = get_last_name();
		else if (i == 2) info = get_nick_name();
		else if (i == 3) info = get_login();
		else if (i == 4) info = get_postal_address();
		else if (i == 5) info = get_email_address();
		else if (i == 6) info = get_phone_number();
		else if (i == 7) info = get_birthday_date();
		else if (i == 8) info = get_favoite_meal();
		else if (i == 9) info = get_underwear_color();
		else if (i == 10) info = get_darkest_secret();
		std::cout << info << std::endl;
	}
}
