

//
//  Customer.hpp
//  assignment4_implementation
//
//  Created by Ruby Kassala on 12/8/16.
//  Copyright © 2016 Ruby Kassala. All rights reserved.
//

#ifndef Customer_h
#define Customer_h

#include <stdio.h>


#include "movie.h"
#include "BinTree.h"
#include "transaction.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include "movie.h"
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Transaction;
class Customer {
    
public:
    // constructors
    Customer();
    Customer(const Customer&);
    Customer(int idNum, string fName, string lName);
    ~Customer();

    const vector<Transaction *> getHistory() const;

    int getID() const;
    void setCustomer(int cid);
  //  void getHistory();
    
    const string &getFirstName() const;
    void setFirstName(const string & fname);
    
    const string &getLastName() const;
    void setLastName(const string & lname);
    
    void addTransaction(Transaction Trans);

    
private:
  /*  struct CustomerHist {				// Structure: linked list for the customer's history
        CustomerHist* next;				// Next transaction made by the customer
        char transaction;					// Borrow or Return
        Movie* info;						// Pointer to the movie
    };
    
    CustomerHist* head;*/
    int idNumber;
    string firstName;
    string lastName;
    vector<Transaction> history;
//    list<Media *> borrowed;
};

#endif /* Customer_h */