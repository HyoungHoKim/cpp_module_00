#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstdlib>

class	Phone_Book
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favoite_meal;
	std::string underwear_color;
	std::string darkest_secret;

public:
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nick_name(std::string nick_name);
	void set_login(std::string login);
	void set_postal_address(std::string postal_address);
	void set_email_address(std::string email_address);
	void set_phone_number(std::string phone_number);
	void set_birthday_date(std::string birthday_date);
	void set_favoite_meal(std::string favoite_meal);
	void set_underwear_color(std::string underwear_color);
	void set_darkest_secret(std::string darkest_secret);
	
	std::string &get_first_name(void);
	std::string &get_last_name(void);
	std::string &get_nick_name(void);
	std::string &get_login(void);
	std::string &get_postal_address(void);
	std::string &get_email_address(void);
	std::string &get_phone_number(void);
	std::string &get_birthday_date(void);
	std::string &get_favoite_meal(void);
	std::string &get_underwear_color(void);
	std::string &get_darkest_secret(void);
	
	int		set_infos(void);
	void	print_info(void);
};

void ph_select(Phone_Book *p_list, int book_cnt);