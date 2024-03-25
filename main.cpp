#include <iostream>
#include <vector>

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
    cout << "How many large rooms would you like cleaned? ";
    cin >> large;
    
    cout << "Estimate for carpet cleaning service\n"<<"Number of small rooms: " << small << endl;
    cout <<"Number of large rooms: " << large << endl;
    
    cout << "Cost : $" << small * price_small + large * price_large << endl;
    cout << "Tax: $" << tax/100*small * price_small + large * price_large << "\n\n" << endl;
    
    //Vectors
    
    vector <int> vector1;
    vector <int> vector2;
    vector <vector<int>> vector_2d;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "Vector 1 size: " << vector1.size() << endl;
    for (size_t i=0; i<vector1.size(); i++){
        cout << vector1.at(i) <<endl;
    }
  
    cout << "\nVector 2 size: " << vector2.size() << endl;  
        for (size_t i=0; i<vector2.size(); i++){
        cout << vector2.at(i) << endl;
    }


    cout << "\nVector 2D:\n" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    

	return 0;
}
