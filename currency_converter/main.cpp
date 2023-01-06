#include <iostream>
#include <iomanip>
#include <cctype>

void welcome_message(){
    std::cout << "\nWelcome to the Currency Converter..." << std::endl;
    std::cout << "Follow the instructions below:" << std::endl;
}

void print_list(){
    
    std::cout << "\nPick an option:" << std::endl;
    std::cout << "U - Convert USD" << std::endl;
    std::cout << "E - Convert Euro" << std::endl;
    std::cout << "P - Convert Pound" << std::endl;
    std::cout << "Y - Convert Yen" << std::endl;
    std::cout << "F - Finished Transaction" << std::endl;
}

char user_entry(){ //read a user entry and convert appropriate option to uppercase 
    char selection {};
    std::cin >> selection;
    return std::toupper(selection);
} 

void usd_convert(){
    std::cout << "Enter your amount in USD to convert" << std::endl;
    double usd {0.0};
    std::cin >> usd;
        std::cout << "Euro = " << usd*0.95 << std::endl;
        std::cout << "Pounds = " << usd*0.84 << std::endl;
        std::cout << "Yen = " << usd*133.60 << std::endl;
}

void euro_convert(){
    std::cout << "Enter your amount in Euro to convert" << std::endl;
    double euro {0.0};
    std::cin >> euro;
        std::cout << "USD = " << euro*1.05 << std::endl;
        std::cout << "Pounds = " << euro*.88 << std::endl;
        std::cout << "Yen = " << euro*140.96 << std::endl;
}

void pound_convert(){
    std::cout << "Enter your amount in Pounds to convert" << std::endl;
    double pound {0.0};
    std::cin >> pound;
        std::cout << "USD = " << pound*1.19 << std::endl;
        std::cout << "Euro = " << pound*1.13 << std::endl;
        std::cout << "Yen = " << pound*159.61 << std::endl;
}

void yen_convert(){
    std::cout << "Enter your amount in Yen to convert" << std::endl;
    double yen {0.0};
    std::cin >> yen;
        std::cout << "USD = " << yen*.0076 << std::endl;
        std::cout << "Euro = " << yen*.0071 << std::endl;
        std::cout << "Pound = " << yen*.0063 << std::endl;
}

void program_end(){
    std::cout << "Program ending" << std::endl;
}

void invalid_entry(){
    std::cout << "Invalid currency entered. Try again..." << std::endl;
}

int main(){
    
    char entry {};
    welcome_message();

do {
    print_list ();
    entry = user_entry(); //converts our users entry to uppercase
    switch (entry){
        case 'U':
           usd_convert();
            break;
        case 'E': 
            euro_convert();
            break;
        case 'P':
            pound_convert();
            break;
        case 'F': 
            program_end();
            break;
        case 'Y':
            yen_convert();
            break;
        default:
            invalid_entry();
            break;
    }
}while (entry != 'F');
    
   
return 0;
}