// Mohamad Husseini 27.October
#include <iostream>
#include <string>
using namespace std;

// class init
class PersonData {    //Base class
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;

public:
	void setLastName(const string &lastName) {    //sets Lastname string value using pointer
		this->lastName = lastName;
	}
	
	string getLastName() const {				// gets lastname in string val
		return lastName;
	}

	void setFirstName(const string& firstName) {
		this->firstName = firstName;
	}

	string getFirstName() const {
		return firstName;
	}

	void setAddress(const string& address) {
		this->address = address;
	}

	string getAddress() const {
		return address;
	}

	void setCity(const string &city) {
		this->city = city;
	}

	string getCity() const {
		return city;
	}
	
	void setState(const string& state) {
		this->state = state;
	}

	string getState() const {
		return state;
	}

	void setZip(const string &zip) {
		this->zip = zip;
	}

	string getZip() const {
		return zip;
	}

	void setPhoneNo(const string &phone) {  // function that sets phoneNo using a Ptr
		this->phone = phone;
	}

	string getPhoneNo() const {				// gets phoneNo in string val
		return phone;
	}
};

// * CustomerData derrived class from PersonData to store *
// * mailinglist prefrence as well as CustomerNumber functions. *
class CustomerData : public PersonData {     
private:
	int customerNumber;
	bool mailingList;
public:
	void setCustomerNumber(int customerNumber) {
		this->customerNumber = customerNumber;
	}

	int getCustomerNumber() const {
		return customerNumber;
	}

	void setMailingList(bool mailingList) {	 // sets mailingList prefrence in boolean format
		this->mailingList = mailingList;
	}

	bool getMailingList() const {
		return mailingList;
	}
};

int main() {
	CustomerData customer1;

	string lastName, firstName, address, city, state, zip, phone;
	int cutsomerNumber;
	char mailingListChoice;

	cout << "Enter customer's last name: ";
	getline(cin, lastName);						// -- |
	customer1.setLastName(lastName);			//	  |
												//	|
	cout << "Enter customer's first name: ";	//	|
	getline(cin, firstName);					//	|
	customer1.setFirstName(firstName);			//	|
												//	|
	cout << "Enter customer's address: ";		//	|
	getline(cin, address);						//	|    <---This part of the code outputs a msg so user 
												//  |        kows what input and when to input it
	customer1.setAddress(address);				//	|
												//	|
	cout << "Enter City: ";						//	|
	getline(cin, city);							//	|
	customer1.setCity(city);					//	|
												//	|
	cout << "Enter State: ";					//	|
	getline(cin, state);						//	  |
	customer1.setState(state);					// -- |

	cout << "Enter Zip: ";
	getline(cin, zip);
	customer1.setZip(zip);

	cout << "Enter Customer's Phone Number: ";
	getline(cin,phone);
	customer1.setPhoneNo(phone);

	cout << "Enter 'y' if you would like to subscribe to our"
		<< "mailing list, if not input 'n'" << endl;
	cin >> mailingListChoice;
	customer1.setMailingList(mailingListChoice == 'y' || mailingListChoice == 'Y'); // * if user inputs 'Y' it'll be
																					// * stored in mailingListChoice

	cout << "\nUsing all the get functions from both the base and derived class"
		 << "to show the state of the CustomerData object: \n" << endl;
	cout << "custFirst name: " << customer1.getFirstName() << endl;
	cout << "custLast name: " << customer1.getLastName() << endl;
	cout << "custStreet Address: " << customer1.getAddress() << endl;
	cout << "custCity: " << customer1.getCity() << endl;
	cout << "custZip: " << customer1.getZip() << endl;
	cout << "custPhone: " << customer1.getPhoneNo() << endl;
	cout << "Customer's Mailing Choice: " << boolalpha << customer1.getMailingList() << endl;
		 
	return 0;
}
