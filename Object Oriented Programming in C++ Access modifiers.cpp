#include <iostream>

using std::string;
class Employee
{
//private:
//protected:
public:
	string Name;
	string Company;
	int age;
	int id_number;

	void IntroduceYourSelf() { // function
		std::cout << "Name " << Name << std::endl;
		std::cout << "Company " << Company << std::endl;
		std::cout << "Age " << age << std::endl;
		std::cout << "id_number " << id_number << std::endl;
	}
};

class Player
{
	//private:
	//protected:
public:
	string Name;
	string Group;
	int age;
	int serial_number;

	void IntroduceYourSelf() { // function
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Group - " << Group << std::endl;
		std::cout << "Age - " << age << std::endl;
		std::cout << "Serial_Number - " << serial_number << std::endl;
	}
};
int main()
{

	Employee employee1;// class object
	employee1.Name = "Me";
	employee1.Company = "BB";
	employee1.age = 25;
	employee1.id_number = 1112;


	Player player1;
	player1.Name = "Him";
	player1.Group = "Crazysouls";
	player1.age = 30;
	player1.serial_number = 22;


	employee1.IntroduceYourSelf();
	player1.IntroduceYourSelf();

	system("pause>0");

}


