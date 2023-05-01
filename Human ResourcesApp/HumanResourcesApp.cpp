#include "Header.h"

using namespace std;
int main() {
	int k;
	cout << "How many applicants do you want to add ? " << endl;
	cin >> k;
	int max_person = 0;
	int count = 0;
	float final_calculated = 0;
	string namee;
	int scr1;
	int scr2;
	int scr3, scr4, scr6;
	float scr5;
	int score1, score2, score3, score4, score5, score6;
	string yes_or_no;
	candidate* ptr = new candidate[k];

	cout << "Hello, HR representative." << endl;
	cout << "First, please enter weights of each score" << endl;
	cout << "Score 1 : " << endl;
	cin >> score1;
	cout << "Score 2 : " << endl;
	cin >> score2;
	cout << "Score 3 : " << endl;
	cin >> score3;
	cout << "Score 4 : " << endl;
	cin >> score4;
	cout << "Score 5 : " << endl;
	cin >> score5;
	cout << "Score 6 : " << endl;
	cin >> score6;
	cout << "Thank you!" << endl;
	while (yes_or_no != "n") {
		cout << "Do you like to enter an applicant? (y/n) " << endl;
		cin >> yes_or_no;
		for (int i = 0; i < k; i++) {
			if (yes_or_no == "y") {
				cout << "Please enter applicant name: " << endl;
				cin >> namee;
				while (namee.length()>50) {
					cout << "Your name shouldn't be like that. Try again ! " << endl;
					cin >> namee;
				}
				ptr[i].set_name(namee);
				cout << "Enter C++ development score:" << endl;
				cin >> scr1;
				while (scr1 < 0 or scr1>10) {
					cout << "Your score should be between 0 and 10. Try again ! " << endl;
					cin >> scr1;
				}
				ptr[i].set_dc(scr1);
				cout << "Enter OS capability score :" << endl;
				cin >> scr2;
				while (scr2 < 0 or scr2>10) {
					cout << "Your score should be between 0 and 10. Try again ! " << endl;
					cin >> scr2;
				}
				ptr[i].set_os(scr2);
				cout << "Enter experience in software development in years:" << endl;
				cin >> scr3;
				ptr[i].set_exp(scr3);
				cout << "Enter agile software development score:" << endl;
				cin >> scr4;
				while (scr4 < 0 or scr4>10) {
					cout << "Your score should be between 0 and 10. Try again ! " << endl;
					cin >> scr4;
				}
				ptr[i].set_asd(scr4);
				cout << "Enter bachelor GPA:" << endl;
				cin >> scr5;
				while (scr5 < 0 or scr5>4) {
					cout << "Your score should be between 0 and 4. Try again ! " << endl;
					cin >> scr5;
				}
				ptr[i].set_GPA(scr5);
				cout << "Enter education status: (1-bachelor, 2-masters, 3-doctorate)" << endl;
				cin >> scr6;
				while (scr6 < 0 or scr6>3) {
					cout << "Your input is invalid. Try again ! " << endl;
					cin >> scr6;
				}
				ptr[i].set_masters(scr6);
				float calculate_1 = (score1 + score2 + score3 + score4 + score5 + score6);
				float calculation = ((score1/calculate_1) * scr1) + ((score2 / calculate_1) * scr2) + ((score3 / calculate_1) * scr3) + ((score4 / calculate_1) * scr4) + ((score5 / calculate_1) * scr5) + ((score6 / calculate_1) * scr6);
				if (calculation > final_calculated) {
					final_calculated = calculation;
					max_person = count;
				};
				ptr[i].set_calculate(calculation);
				count = count + 1;
			}
			else {
				break;
			}
		}
	}
	cout << "Applicants list:" << endl;
	for (int i = 0; i < k; i++) {
		cout << i+1<< "- " << ptr[i].get_name() << ", " << ptr[i].get_dc() << ", " << ptr[i].get_os() << ", " << ptr[i].get_exp() << ", " << ptr[i].get_asd() << ", " << ptr[i].get_GPA() << ", " << ptr[i].get_masters() << ". " << "Average Score: " << ptr[i].get_calculate()<< endl;
	}
	cout << "Best Appplicant : " << ptr[max_person].get_name();

}