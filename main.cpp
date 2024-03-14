#include <iostream>

using namespace std;

int main()
{ 
    //Input and output (cout/cin)
    
    int favorite_number;
    
    cout  << "Enter your favorite number between 1 and 100: ";
    
    cin >> favorite_number;
    
    cout << favorite_number << " is my favorite number as well!" << endl;
    
    // using aritmetics
    
    int small{0}, large{0};
    double price_small {25};
    double price_large {35};
    double tax {6};
    
    
    cout << "Hello, Welcome to Ana's Carpet Cleaning Service\n\n" << endl;
    cout << "How many small rooms would you like cleaned? ";
    cin  >> small;
    cout << "How many large rooms would you like cleaned?\n";
    cin >> large;
    
    cout << "Estimate for carpet cleaning service\n"<<"Number of small rooms: " << small << endl;
    cout <<"Number of large rooms: " << large << endl;
    
    cout << "Cost : $" << small * price_small + large * price_large << endl;
    cout << "Tax: $" << tax/100*small * price_small + large * price_large;
    
    
    


	return 0;
}
