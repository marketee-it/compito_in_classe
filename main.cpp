#include<iostream>
#include<string>
#include "libs/list.cpp"
#include "libs/customer.cpp"

using namespace std;

void menu(Customers customers) {
  cout <<"1. Add a new customer" << endl;
  cout <<"2. Search a customer by name" << endl;
  cout <<"3. Search a customer by card ID" << endl;
  cout <<"4. Remove a customer" << endl;
  cout <<"5. Exit" << endl;

}

int main(){
    Customers customers;
    menu(customers);

    return 0;
}