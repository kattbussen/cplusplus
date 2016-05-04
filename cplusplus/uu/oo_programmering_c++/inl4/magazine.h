#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "item.h"
#include <string>

class Magazine : public Item {

	public:
		Magazine(std::string inTitle, int itemNumber, int borrowedNumber, int inIssue, int inYear);
		~Magazine();
		int getIssue();
		int getYear();
		void printInfo();

	private:
		std::string title;
		int issue;
		int year;
};

#endif
