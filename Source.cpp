#include<iostream>
using namespace std;
int main()
{
	int price, quantity, str, total, discount;
	discount = 0.1;
	for (int i = 1; i <= 10; i++) {

		cout << "Enter the price: ";
		cin >> price;
		cout << "Enter the qauntity: ";
		cin >> quantity;
		cout << "Enter the Sales Tax Rate: ";
		cin >> str;

		if (quantity >= 10) {

			total = (str * quantity) + (price * quantity) - discount;
			cout << "\nTotal price is: " << total << endl;
			cout << "Your discount is: " << discount << endl;
		}
		else {

			total = (price * quantity) + (str * quantity);
			cout << "\nTotal price is: " << total << endl;
		}
		cout << "Tax rate is: " << str * quantity << endl;
		break;
	}
	return 0;
		
}