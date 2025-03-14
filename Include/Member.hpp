#ifndef MEMBER_HPP
#define MEMBER_HPP

#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

class Member
{
private:
    string name;
    long long contact;
    string address;
    vector<string> borrowed_books;
    string memberID;
    static int generateMemberID()
    {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::uniform_int_distribution<> dis(100000, 999999); // 6-digit number
        return dis(gen);
    }

public:
    Member();
    Member(const string &name, const string &address, const long long &contact); // Change to const reference

    void borrowBook(const string &isbn);
    void returnBook(const string &isbn);
    void display_borrowed_books();

    // getter methods
    string get_name();
    string get_address();
    string getMemberID();
    long long get_contact();
    vector<string> get_borrowed_books();

    // setter methods
    void set_name(const string &name);
    void set_address(const string &address);
    void set_contact(const long long &contact);
    void set_ID(const string &ID);
    // check if the member has borrowed a book
    bool has_borrowed(const string &isbn);
};
#endif