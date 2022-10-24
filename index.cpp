#include <iostream>
#include <bitset>
using namespace std;

// Different Functions being used throughout the code
void mainMenu();
void submenu();
void And_operation(unsigned short r1, unsigned short r2);
void OR_operation(unsigned short r1, unsigned short r2);
void Xor_operation(unsigned short r1, unsigned short r2);
void Not_operation(unsigned short r1);

int main()
{
    // Declare Variables here
    char ch, ch1, ch2, ch3;
    unsigned short r1, r2; //A 6 bit-word declaration

    cout << "Start the logic operations Y/N, eneter Y(y) or N(n): ";
    cin >> ch;
    ch1 = ch;

    mainMenu();  // these follwoing are the cases of that it will be used against for the labs ,
    cout << "Menu Options:";
    cin >> ch;
    ch2 = ch;
    while (ch1 == 'Y' || ch1 == 'y')
    {
        if (ch2 == '1') // All the diffeerent cases that can be the result for the input
        {
        Submenu:
            submenu(); //Submenu asking for the first choice 
            cout << "Submenu - input your choice";
            std::cin>>ch;
            ch3 = ch;
            switch (ch3)
            {
            case 'a':
            {
                cout << "Enter the first number in hexadecimal format (for example, 12ae):";
                cin >> hex >> r1;
                cout << "Enter the second number in hexdecimal foramt (for example, ff00):";
                cin >> hex >> r2;
                And_operation(r1, r2);
                break;
            }

            case 'b':
            {
                cout << "Enter the first number in hexadecimal format (for example, 12ae):";
                cin >> hex >> r1;
                cout << "Enter the second number in hexdecimal foramt (for example, ff00):";
                cin >> hex >> r2;
                OR_operation(r1, r2);
                break;
            }

            case 'c':
            {
                cout << "Enter the first number in hexadecimal format (for example, 12ae):";
                cin >> hex >> r1;
                cout << "Enter the second number in hexdecimal foramt (for example, ff00):";
                cin >> hex >> r2;
                Xor_operation(r1, r2);
                break;
            }

            case 'd':
            {
                cout << "Enter the first number in hexadecimal format (for example, 12ae):";
                cin >> hex >> r1;
                Not_operation(r1);
                break;
            }

            default: goto Submenu;
            }
        }

        else
            {
                goto endLable;
            }

        cout << "Do you like to continue the logic operations (Y/N)? Enter Y(y) or N(n):" << endl;
        cin >> ch;
        ch1 = ch;
    }

endLable:
    cout << "Exit program" << endl;

    system("pause");
    exit(0);
    return(0);
}

void mainMenu() // Main menu Input 
{
    cout << "Menu:" << endl;
    cout << "1, Perform logic operation with 16-bit operand(s)" << endl;
    cout << "2, Exit" << endl;
}

void submenu()    // This code allows the submenu to ask the user for a input 
{
    cout << "a.Input to 16-bit unsigned number operands and perform an AND (&) operation./n"
        << "Display the operands and results in binary format." << endl;

    cout << "b.Input to 16-bit unsigned number operands and perform an OR (|) operation./n"
        << "Display the operands and results in binary format." << endl;

    cout << "c.Input to 16-bit unsigned number operands and perform an XOR (^) operation./n"
        << "Display the operands and results in binary format." << endl;

    cout << "a.Input to 16-bit unsigned number operands and perform an NOT (~) operation./n"
        << "Display the operands and results in binary format." << endl;

}

void And_operation(unsigned short r1, unsigned short r2)
{
    unsigned short r;

    //AND operations
    r = r1 & r2;

    bitset<16> operant1_Bits(r1); //A bitset to display 16-bits
    bitset<16> operant2_Bits(r2); //A bitset to display 16-bits
    bitset<16> result_Bits(r); //A bitset to display 16-bits

    cout << "Perform an AND operation:" << endl;
    cout << "\t\t" << operant1_Bits << endl;
    cout << "\tAND" << "\t" << operant2_Bits << endl;
    cout << "-------------------------------\n";
    cout << "\t\t" << result_Bits << endl;
    cout << "================================================================\n";

}

void OR_operation(unsigned short r1, unsigned short r2)
{
    unsigned short r;

    //OR operations
    r = r1 | r2;

    bitset<16> operant1_Bits(r1); //A bitset to display 16-bits
    bitset<16> operant2_Bits(r2); //A bitset to display 16-bits
    bitset<16> result_Bits(r); //A bitset to display 16-bits

    cout << "Perform an OR operation:" << endl;
    cout << "\t\t" << operant1_Bits << endl;
    cout << "\tOR" << "\t" << operant2_Bits << endl;
    cout << "-------------------------------\n";
    cout << "\t\t" << result_Bits << endl;
    cout << "================================================================\n";
}

void Xor_operation(unsigned short r1, unsigned short r2)
{
    unsigned short r;

    //XOR operations
    r = r1 ^ r2;

    bitset<16> operant1_Bits(r1); //A bitset to display 16-bits
    bitset<16> operant2_Bits(r2); //A bitset to display 16-bits
    bitset<16> result_Bits(r); //A bitset to display 16-bits

    cout << "Perform an XOR operation:" << endl;
    cout << "\t\t" << operant1_Bits << endl;
    cout << "\tXOR" << "\t" << operant2_Bits << endl;
    cout << "-------------------------------\n";
    cout << "\t\t" << result_Bits << endl;;
    cout << "================================================================\n";
}

void Not_operation(unsigned short r1)
{
    unsigned short r;

    //NOT operations
    r = ~r1;

    bitset<16> operant1_Bits(r1); //A bitset to display 16-bits
    bitset<16> result_Bits(r); //A bitset to display 16-bits

    cout << "Perform a NOT operation:" << endl;
    cout << "\tNOT" << "\t" << operant1_Bits << endl;
    cout << "-------------------------------\n";
    cout << "\t\t" << result_Bits << endl;
    cout << "================================================================\n";
}