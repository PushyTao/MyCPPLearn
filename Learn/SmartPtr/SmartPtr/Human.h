#include <iostream>

class Human {
public:
	void setAge(int age);
	int getAge();
	void setSex(int sex);
	int getSex();
private:
	int age;
	int sex;
public:
	Human() {
		std::cout << "construct" << std::endl;
		age = 0, sex = 0;
	};
	~Human() {
		std::cout << "destruct" << std::endl;
	};
};
