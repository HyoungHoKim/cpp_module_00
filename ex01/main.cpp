#include "phone_book.hpp"

int main(void)
{
	Phone_Book p_book[8];
	int book_cnt;
	std::string entry;

	book_cnt = 0;
	while (1)
	{
		std::cout << "Input Command : ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			return (0);
		if (entry.compare("EXIT") == 0)
			break ;
		else if (entry.compare("ADD") == 0)
		{
			if (book_cnt < 8)
			{
				std::cout << "------- Saved_cnt : " 
					<< book_cnt + 1 << " -------" << std::endl;
				if (p_book[book_cnt].set_infos())
					return (1);
				std::cout << "------- print_saved_info -------" << std::endl;
				p_book[book_cnt].print_info();
				std::cout << "------- ADD done!!! -------" << std::endl;
				book_cnt++;
			}
			else
				std::cout << "Already Full!!!" << std::endl;
		}else if (entry.compare("SEARCH") == 0)
		{
			if (book_cnt > 0)
				ph_select(p_book, book_cnt);
			else
				std::cout << "Empty Book!!!" << std::endl;
		}
	}
}