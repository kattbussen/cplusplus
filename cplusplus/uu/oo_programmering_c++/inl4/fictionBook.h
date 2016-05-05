#include "book.h"

#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

class FictionBook : public Book {
	
	public:
		FictionBook(std::string inTitle, int itemNumber, int borrowedNumber, std::string inAuthor);
		~FictionBook();
		void printInfo();
		std::string extractInfo();
	
	private:
};	

#endif
