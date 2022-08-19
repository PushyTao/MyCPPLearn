#include <iostream>
#include "Human.h"

int main() {
	/*unique_ptr<string> p1(new string("hello, world"));
	unique_ptr<string> p2;*/
	Human human;
	human.setAge(21);
	human.setSex(1);

	std::cout << "Wuyt :" << human.getAge() << "   " << human.getSex() << std::endl;
	

	Human* h = new Human();
	h->setAge(21);
	h->setSex(0);
	std::cout << "Girl :" << h->getAge() << "   " << h->getSex() << std::endl;
	//free(h);
	delete h;
	return 0;
}