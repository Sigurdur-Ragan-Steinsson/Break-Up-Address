#include <iostream>
#include <string>

using namespace std;

struct partsOfAddress {
string streetNum;
string streetName;
string city;
string state;
string zip;
};
struct partsOfAddress BreakUpAddress(string address){
  partsOfAddress breakUp;

  breakUp.streetNum = address.substr(0,address.find(' '));

  address.erase(0,address.find(' ') + 1);

  breakUp.streetName = address.substr(0, address.find(','));

  address.erase(0,address.find(',') + 2);

  breakUp.city = address.substr(0, address.find(','));

  address.erase(0, address.find(',') + 2);
  //cout << "hi" <<address << endl;
  breakUp.state = address.substr(0, address.find(' '));

  address.erase(0, address.find(' ') + 1);

  breakUp.zip = address.substr(0, address.length());

  return breakUp;
}

int main() {
  string add;
  getline(cin, add);
  cout << BreakUpAddress(add).streetNum << endl;
  cout << BreakUpAddress(add).streetName << endl;
  cout << BreakUpAddress(add).city << endl;
  cout << BreakUpAddress(add).state << endl;
  cout << BreakUpAddress(add).zip << endl;
}