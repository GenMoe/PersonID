#include <iostream>
#include <string>
using namespace std;

class PersonData {
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;

public:
	void setLastName(const string lastName) {
		this->lastName = lastName;
	}
	
	string getLastName() const {
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

	void setZip(const string &zip) {
		this->zip = zip;
	}

	string getZip() const {
		return zip;
	}

	void setPhoneNo(const string &phone) {
		this->phone = phone;
	}

	string getPhoneNo() const {
		return phone;
	}
};

class Customer