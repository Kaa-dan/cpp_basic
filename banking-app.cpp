#include <iostream>
#include <iomanip>
void showBalance(double balance);
double deposit();
double withDraw(double balance);
int main()
{
    double balance = 0;
    int choice = 0;
    do
    {
        std::cout << "********************\n";
        std::cout << "Enter your choice\n";
        std::cout << "********************\n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. WithDraw Money \n";
        std::cout << "4. Exit \n";
        std::cin >> choice;
        // check what this functions do ?
        std::cin.clear();
        fflush(stdin);
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withDraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting \n";
            break;
        default:
            std::cout << "invalid choice";
            break;
        }
    } while (choice != 4);
    return 0;
}
void showBalance(double balance)
{
    std::cout << "your balance is " << std::setprecision(2) << std::fixed << balance << std::endl;
}
double deposit()
{
    double amount = 0;
    std::cout << "Enter amout to be deposited: ";

    std::cin >> amount;

    if (amount > 0)
        return amount;
    else
    {
        std::cout << "Thats not a valid amout \n";
        return 0;
    }
}
double withDraw(double balance)
{
    double amount = 0;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    if (amount > balance)
    {
        std::cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else
    {
        return amount;
    }
}