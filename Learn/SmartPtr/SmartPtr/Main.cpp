#include <iostream>
#include "Human.h"
#include <assert.h>
#include <queue>
#include <vector>
class A
{
public:
	explicit A(int x)
	{
		num_ = x;
	}

private:
	int num_;
};
void get() {
	assert(false);
}
int main() {
	//A a = A(123);

	/*unique_ptr<string> p1(new string("hello, world"));
	unique_ptr<string> p2;*/
	/**
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
	**/
	//int val = 100;
	//int &v = val;
	//get();
	//while (true);
	//double f = 1e18;
	//printf("%.10lf", sqrt(f));
	std::priority_queue<int, std::vector<int>, std::greater<int> > xiao;
	std::priority_queue<int, std::vector<int>, std::less<int> > da;
	
	xiao.push(2);
	xiao.push(3);
	xiao.push(1);
	std::cout << xiao.top() << std::endl;
	return 0;
}