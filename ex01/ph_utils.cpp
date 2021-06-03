#include "phone_book.hpp"

std::string set_format(std::string str)
{
	std::string temp;

	if (str.length() > 10)
	{
		temp = str.substr(0, 9);
		temp += ".";
	}
	else
		return (str);
	return (temp);
}

void show_string(std::string str)
{
	std::cout << "|" << std::setw(10) << std::right << set_format(str);
	return ;
}

void show_select_header(void)
{
	show_string("index");
	show_string("first_name");
	show_string("last_name");
	show_string("nick_name");
	std::cout << "|" << std::endl;
}

bool is_digit_str(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

void ph_select(Phone_Book *p_list, int book_cnt)
{
	std::cout << std::endl;
	show_select_header();
	for (int i = 0; i < book_cnt; i++)
	{
		Phone_Book p = p_list[i];
		std::cout << "|" << std::setw(10) << std::right << i + 1;
		show_string(p_list[i].get_first_name());
		show_string(p_list[i].get_last_name());
		show_string(p_list[i].get_nick_name());
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;

	std::string entry;
	while (1)
	{
		std::cout << "Enter index to get full page (input 0 is exit)" << " : ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			return ;
		if (is_digit_str(entry))
		{
			int idx = atoi(entry.c_str()) - 1;
			if (idx >= book_cnt || idx < -1)
				std::cout << "Wrong index." << std::endl;
			else if (idx == -1)
			{
				std::cout << "Exit!!" << std::endl;
				break ;
			}
			else
				p_list[idx].print_info();
		}
		else
		{
			std::cout << "Undefined Command." << std::endl;
		}
	}
}