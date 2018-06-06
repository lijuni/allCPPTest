#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{

	struct Person{

		std::string r_name() const { return name; }
		std::string r_address() const { return address; }

		std::string name;
		std::string address;
	};

}
