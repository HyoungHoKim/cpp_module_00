#include "phone_book.hpp"

int main(void)
{
	Phone_Book p_book[8];
	int book_cnt;
	std::string entry;

	book_cnt = 0;
	while (1)
	{
		cout << "Input Command : ";
		std::get_line(std::cin, entry);
		if (entry.compare("EXIT") == 0)
			break ;
		else if (entry.compare("ADD") == 0)
		{
			if (book_cnt < 8)
				p_book[book_cnt++].set_infos();
			else
				std::cout << "Already Full!!!" << std::endl;
		}

			
	}
}