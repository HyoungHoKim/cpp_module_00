#include "phone_book.hpp"

phone_book::phone_book()
{
	this.first_name = NULL;
	this.last_name = NULL;
	this.nick_name = NULL;
	this.login = NULL;
	this.postal_address = NULL;
	this.email_address = NULL;
	this.phone_number = NULL;
	this.birthday_data = NULL;
	this.favoite_meal = NULL;
	this.underwear_color = NULL;
	this.darkest_secret = NULL;
}

/* -------------- setter --------------- */
void phone_book::set_first_name(std::string first_name)
{
	this.first_name = first_name;
}

void phone_book::set_last_name(std::string last_name)
{
	this.last_name = last_name;
}

void phone_book::set_nick_name(std::string nick_name)
{
	this.nick_name = nick_name;
}

void phone_book::set_login(std::string login)
{
	this.login = login;
}

void phone_book::set_postal_address(std::string postal_address)
{
	this.postal_address = postal_address;
}

void phone_book::set_email_address(std::string email_address)
{
	this.email_address = email_address;
}

void phone_book::set_phone_number(std::string phone_number)
{
	this.phone_number = phone_number;
}

void phone_book::set_birthday_date(std::string birthday_date)
{
	this.birthday_date = birthday_date;
}

void phone_book::set_favoite_meal(std::string favoite_meal)
{
	this.favoite_meal = favoite_meal;
}

void phone_book::set_underwear_color(std::string underwear_color)
{
	this.underwear_color = underwear_color;
}

void phone_book::set_darkest_secret(std::string darkest_secret)
{
	this.darkest_secret = darkest_secret;
}

/* -------------- getter --------------- */
std::string phone_book::get_first_name(void)
{
	return (this.first_name);
}

std::string phone_book::get_last_name(void)
{
	return (this.last_name);
}

std::string phone_book::get_nick_name(void)
{
	return (this.nick_name);
}

std::string phone_book::get_login(void)
{
	return (this.login);
}

std::string phone_book::get_postal_address(void)
{
	return (this.postal_address);
}

std::string phone_book::get_email_address(void)
{
	return (this.email_address);
}

std::string phone_book::get_phone_number(void)
{
	return (this.phone_number);
}

std::string phone_book::get_birthday_date(void)
{
	return (this.birthday_date);
}

std::string phone_book::get_favoite_meal(void)
{
	return (this.favoite_meal);
}

std::string phone_book::get_underwear_color(void)
{
	return (this.underwear_color);
}

std::string phone_book::get_darkest_secret(void)
{
	return (this.darkest_secret);
}

void phone_book::set_infos(void)
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
	std::string entry = NULL;

	for (int i = 0; i < 11; i++)
	{
		std::cout << info_names[i] << " : ";
		std::get_line(std::cin, entry);
		if (entry == NULL)
		{
			cout << "Please input " << info_names << "!" << endl;
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
}
