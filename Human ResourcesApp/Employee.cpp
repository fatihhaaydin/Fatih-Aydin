#include "Header.h"

void candidate::set_name(string n) {
	name = n;
}
void candidate::set_dc(int a) {
	development_capability = a;
}
void candidate::set_os(int b) {
	operating_system_capability = b;
}
void candidate::set_exp(int c) {
	experience = c;
}
void candidate::set_asd(int d) {
	agile_software_development = d;
}
void candidate::set_masters(int f) {
	masters_bachelors_or_canditate = f;
}
void candidate::set_GPA(float e) {
		bachelor_GPA = e;
}
void candidate::set_calculate(double g) {

	average = g;
}
int candidate::get_dc() {
	return development_capability;
}
int candidate::get_os() {
	return operating_system_capability;
}
int candidate::get_asd() {
	return agile_software_development;
}
int candidate::get_masters() {
	return masters_bachelors_or_canditate;
}
int candidate::get_exp() {
	return experience;
}
float candidate::get_GPA() {
	return bachelor_GPA;
}
string candidate::get_name() {
	return name;
}
float candidate::get_calculate() {
	return average;
}

