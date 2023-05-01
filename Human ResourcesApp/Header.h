#include <iostream>
using namespace std;
class candidate {
private:
	string name;
	int development_capability;
	int operating_system_capability;
	int experience;
	int agile_software_development;
	float bachelor_GPA;
	int masters_bachelors_or_canditate;
	float average;
public:
	string get_name();
	void set_name(string n);
	void set_dc(int a), set_os(int b), set_exp(int c), set_asd(int d ), set_masters(int f) , set_GPA(float e);
	int get_dc(), get_os(), get_exp(), get_asd(), get_masters();
	float get_GPA();
	void set_calculate(double g);
	float get_calculate();

};
