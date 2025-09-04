#include "paper.h"

Paper::Paper()
{
}

Paper::Paper(string tree) : tree(tree)
{
}

void Paper::print1() const
{
	cout << "사용한 종이의 수" << endl;
}
