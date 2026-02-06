#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Create structure for Buisness Card 
struct BusinessCard {
    string companyName;
    string companyAddress;
    string phoneNumber;
    string workingHours;
    string contactPerson;
    double priceQuoted;
};

// Constructor function to initialize BusinessCard structure
BusinessCard createBusinessCard(const string& n, const string& a, const string& p, const string& h, const string& c, double price) {
    BusinessCard card;
    card.companyName = n;
    card.companyAddress = a;
    card.phoneNumber = p;
    card.workingHours = h;
    card.contactPerson = c;
    card.priceQuoted = price;
    return card;
};

int main() {
   // Seed the random number generator for priceQuoted
   srand(time(nullptr));

   double randomPrice1 = rand() % 1000 + 1000;
   double randomPrice2 = rand() % 1000 + 1000;
   double randomPrice3 = rand() % 1000 + 1000;
   double randomPrice4 = rand() % 1000 + 1000;
   double randomPrice5 = rand() % 1000 + 1000;

    // Structure to hold business card information
   BusinessCard card1 = createBusinessCard("Money Solutions Inc.", "1567 Arm Street, Springfield", "(818) 555-6789", "9 AM - 5 PM", "Johny Cares", randomPrice1);
   BusinessCard card2 = createBusinessCard("Quantam Moneys", "2075 Pom pom Avenue, Greentown", "(934) 782-2899", "8 AM - 3 PM", "James Smith", randomPrice2);
   BusinessCard card3 = createBusinessCard("Capital Plus Plus", "9876 Power Street, Woodsfield", "(328) 876-3456", "10 AM - 5 PM", "Omar Johnson", randomPrice3);
   BusinessCard card4 = createBusinessCard("Cash Cards", "5623 Jingle Street, Mountainview", "(426) 149-6789", "9 AM - 6 PM", "Jane Doe", randomPrice4);
   BusinessCard card5 = createBusinessCard("Savings Solutions", "1209 ElmStreet, Flowersprings", "(324) 555-2353", "8 AM - 7 PM", "John Pines", randomPrice5);

    // Display the business card information
   cout << "Company Name: " << card1.companyName << "\nCompany Address: " << card1.companyAddress << "\nPhone Number: " << card1.phoneNumber << "\nWorking Hours: " << card1.workingHours << "\nContact Person: " << card1.contactPerson << "\nPrice Quoted: $" << fixed << setprecision(2) << card1.priceQuoted << endl;
   cout << "----------------------------------------------" << endl;
   cout << "Company Name: " << card2.companyName << "\nCompany Address: " << card2.companyAddress << "\nPhone Number: " << card2.phoneNumber << "\nWorking Hours: " << card2.workingHours << "\nContact Person: " << card2.contactPerson << "\nPrice Quoted: $" << fixed << setprecision(2) << card2.priceQuoted << endl;
   cout << "----------------------------------------------" << endl;
   cout << "Company Name: " << card3.companyName << "\nCompany Address: " << card3.companyAddress << "\nPhone Number: " << card3.phoneNumber << "\nWorking Hours: " << card3.workingHours << "\nContact Person: " << card3.contactPerson << "\nPrice Quoted: $" << fixed << setprecision(2) << card3.priceQuoted << endl;
   cout << "----------------------------------------------" << endl;
   cout << "Company Name: " << card4.companyName << "\nCompany Address: " << card4.companyAddress << "\nPhone Number: " << card4.phoneNumber << "\nWorking Hours: " << card4.workingHours << "\nContact Person: " << card4.contactPerson << "\nPrice Quoted: $" << fixed << setprecision(2) << card4.priceQuoted << endl;
   cout << "----------------------------------------------" << endl;
   cout << "Company Name: " << card5.companyName << "\nCompany Address: " << card5.companyAddress << "\nPhone Number: " << card5.phoneNumber << "\nWorking Hours: " << card5.workingHours << "\nContact Person: " << card5.contactPerson << "\nPrice Quoted: $" << fixed << setprecision(2) << card5.priceQuoted << endl;
    cout << "----------------------------------------------" << endl;
    
     // Determine the lowest price quoted
     double bestPrice = card1.priceQuoted;
    
     if (card2.priceQuoted < bestPrice) {
          bestPrice = card2.priceQuoted;
     }
     if (card3.priceQuoted < bestPrice) {
          bestPrice = card3.priceQuoted;
     }
     if (card4.priceQuoted < bestPrice) {
          bestPrice = card4.priceQuoted;
     }
     if (card5.priceQuoted < bestPrice) {
          bestPrice = card5.priceQuoted;
     }
    
     cout << "Lowest price quoted: $" << fixed << setprecision(2) << bestPrice << endl;
   

     // Determine the lowest price quoted and the corresponding company
     string bestCompany = card1.companyName;
     bestPrice = card1.priceQuoted;
        if (card2.priceQuoted < bestPrice) {
            bestPrice = card2.priceQuoted;
            bestCompany = card2.companyName;
        }
        if (card3.priceQuoted < bestPrice) {
            bestPrice = card3.priceQuoted;
            bestCompany = card3.companyName;
        }
        if (card4.priceQuoted < bestPrice) {
            bestPrice = card4.priceQuoted;
            bestCompany = card4.companyName;
        }
        if (card5.priceQuoted < bestPrice) {
            bestPrice = card5.priceQuoted;
            bestCompany = card5.companyName;
        }
    
    cout << "Lowest price quoted by: " << bestCompany << endl;

    return 0;
}
