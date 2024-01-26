///////////////////////////////////
// Name : HASSAN RAZA SHAH
//        SALWA MEHREEN
//
// Content : Weather Based Food Ordering System Project
//
// Date  : 12/12/2022
//////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> readRecordFromFile(std::string file_name, std::string search_term);

// Food Menu Class
class FoodMenu
{
public:
    FoodMenu(){};

    void setFoodType(string type)
    {
        foodType = type;
    }
    void setFoodPrice(double price)
    {
        foodPrice = price;
    }
    string getFoodType()
    {
        return foodType;
    }
    double getFoodPrice()
    {
        return foodPrice;
    }

private:
    string foodType;

    double foodPrice;
};

// Order Class

class Order
{

public:
    Order(){};

    void setFoodType(string type)
    {
        foodType = type;
    }

    void setQuantity(int qty)
    {
        quantity = qty;
    }

    string getFoodType()
    {
        return foodType;
    }

    int getQuantity()
    {
        return quantity;
    }

    double getTotalCost()
    {
        double price;
        for (int i = 0; i < foodList.size(); i++)
        {
            if (foodList[i].getFoodType() == foodType)
            {
                price = foodList[i].getFoodPrice();
            }
        }
        return price * quantity;
    }
    static vector<FoodMenu> foodList;

private:
    string foodType;

    int quantity;
};

vector<FoodMenu> Order::foodList;

// Menu Class

class Menu
{

public:
    Menu(){};

    void addFood(string type, double price)
    {

        FoodMenu food;

        food.setFoodType(type);

        food.setFoodPrice(price);

        Order::foodList.push_back(food);
    }

    void clearfood()
    {
        Order ::foodList.clear();
    }

    void showMenu()
    {

        for (int i = 0; i < Order::foodList.size(); i++)
        {

            cout << i + 1 << ". " << Order::foodList[i].getFoodType() << " - $"

                 << Order::foodList[i].getFoodPrice() << endl;
        }
    }
};

// Main

char cold_snowy()
{

    int choose = 0;

    int qty;

    int choice;

    char gotostart;

beginning:

    cout << "\t\t\t____________SKY INN_____________\n\n";

    cout << "\nWhat would you like to order?\n\n";

    cout << "\t\t\t\t--------Menu--------\n\n";

    cout << "1) Sea food\n";

    cout << "2) Pasta\n";

    cout << "3) Ramen\n";

    cout << "4) Soup\n";

    cout << "5) Hot drinks\n\n";

    cout << "\nPlease Enter your Choice: ";

    cin >> choose;

    if (choose == 1)

    {

        Menu menu;

        menu.addFood("Shrimp with Rice ", 25);

        menu.addFood("Clam Chowder", 30);

        menu.addFood("Catfish Katsu", 20);

        menu.addFood("Seared Ahi Tuna", 35);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which dish would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        cout << endl;

        void clear();

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {
            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 2)
    {

        Menu menu;

        menu.addFood("Spaghetti and meatballs ", 20);

        menu.addFood("Alfredo Pasta", 25);

        menu.addFood("Pesto Pasta", 15);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which pasta would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 3)
    {

        Menu menu;

        menu.addFood("Chicken broth ramen", 17);

        menu.addFood("Shio ramen", 20);

        menu.addFood("Pork broth ramen", 24);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which ramen would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 4)
    {

        Menu menu;

        menu.addFood("Carrot soup", 15);

        menu.addFood("Chicken soup", 20);

        menu.addFood("Miso soup", 25);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which soup would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 5)
    {

        Menu menu;

        menu.addFood("Mocha", 7);

        menu.addFood("Hot chocolate", 9);

        menu.addFood("Chai", 10);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which drink would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;
        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else

    {

        cout << "Please Select Right Option: \n";

        cout << "Would You like to Start the program again? Y / N: ";

        cin >> gotostart;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            goto beginning;
        }
    }

    return 0.0;
}

char rainy()
{

    int choose = 0;

    int qty;

    int choice;

    char gotostart;

beginning:

    cout << "\t\t\t____________SKY INN_____________\n\n";

    cout << "\nWhat would you like to order?\n\n";

    cout << "\t\t\t\t--------Menu--------\n\n";

    cout << "1) Sushi\n";

    cout << "2) Snacks\n";

    cout << "3) Rolls\n";

    cout << "4) Biryani\n";

    cout << "5) Beverages\n\n";

    cout << "\nPlease Enter your Choice: ";

    cin >> choose;

    if (choose == 1)

    {

        Menu menu;

        menu.addFood("Sashimi", 13);

        menu.addFood("Nigri", 12);

        menu.addFood("Chirashi", 17);

        menu.addFood("Maki", 20);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which Sushi would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        cout << endl;

        void clear();

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 2)
    {

        Menu menu;

        menu.addFood("Samosas ", 5);

        menu.addFood("Pakoras", 10);

        menu.addFood("Corndogs", 5);

        menu.addFood("Fries", 7);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which Snacks would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 3)
    {

        Menu menu;

        menu.addFood("Spicy Salmon Roll", 17);

        menu.addFood("Avacado and Cucumber Roll", 20);

        menu.addFood("Hawaii Roll", 24);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which ramen would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 4)
    {

        Menu menu;

        menu.addFood("Chicken Biryani", 13);

        menu.addFood("Mutton Biryani", 20);

        menu.addFood("Beef Biryani", 25);

        menu.addFood("Vegetable Biryani", 15);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which Biryani would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 5)
    {

        Menu menu;

        menu.addFood("Lemonade", 7);

        menu.addFood("Iced Tea", 9);

        menu.addFood("Chai", 10);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which Beverage would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else

    {

        cout << "Please Select Right Option: \n";

        cout << "Would You like to Start the program again? Y / N: ";

        cin >> gotostart;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            goto beginning;
        }
    }

    return 0.0;
}

char hot_sunny()
{

    int choose = 0;

    int qty;

    int choice;

    char gotostart;

beginning:

    cout << "\t\t\t____________SKY INN_____________\n\n";

    cout << "\nWhat would you like to order?\n\n";

    cout << "\t\t\t\t--------Menu--------\n\n";

    cout << "1) Entree\n";

    cout << "2) Salads\n";

    cout << "3) Fruits\n";

    cout << "4) Icecream\n";

    cout << "5) Drinks\n\n";

    cout << "\nPlease Enter your Choice: ";

    cin >> choose;

    if (choose == 1)

    {

        Menu menu;

        menu.addFood("Grilled Chicken Skewers", 25);

        menu.addFood("Spicy Shrimp Wrap", 25);

        menu.addFood("Tandoori Chicken", 25);

        menu.addFood("Pepperoni Pizza", 15);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which entree would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        cout << endl;

        void clear();

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 2)
    {

        Menu menu;

        menu.addFood("Caesar Salad", 15);

        menu.addFood("Greek Salad", 15);

        menu.addFood("Cobb Salad", 15);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which salad would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 3)
    {

        Menu menu;

        menu.addFood("Melon and Pineapple Fruit Salad", 17);

        menu.addFood("Strawberry Pecan Pretzel Salad", 20);

        menu.addFood("Hawaiian Fresh Fruit Salad", 24);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which fruit salad would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 4)
    {

        Menu menu;

        menu.addFood("Chocolate Icecream", 7);

        menu.addFood("Strawberry Icecream", 7);

        menu.addFood("Cookies n Cream Icecream", 7);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which icecream would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else if (choose == 5)
    {

        Menu menu;

        menu.addFood("Mango Lassi", 10);

        menu.addFood("Fresh Sugarcane Juice", 9);

        menu.addFood("Pina Colada", 15);

        cout << endl;

        menu.showMenu();

        Order order1;

        cout << "\nPlease Enter which drink would you like to have?:";

        cin >> choice;

        cout << "\nQuantity: ";

        cin >> qty;

        order1.setFoodType(Order::foodList[choice - 1].getFoodType());

        order1.setQuantity(qty);

        cout << endl;

        cout << "\t\t---------Your Order----------\n";

        cout << "Item: " << order1.getFoodType() << endl;

        cout << "Quantity: " << order1.getQuantity() << endl;

        cout << "Total Cost: $" << order1.getTotalCost() << endl;

        cout << "\t\tThanks for ordering from Sky Inn! " << endl;

        void clear();

        cout << endl;

        cout << "Would you like to order anything else? Y / N:";

        cin >> gotostart;

        cout << endl;

        cout << endl;

        cout << endl;

        cout << endl;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            menu.clearfood();
            goto beginning;
        }
    }

    else

    {

        cout << "Please Select Right Option: \n";

        cout << "Would You like to Start the program again? Y / N: ";

        cin >> gotostart;

        if (gotostart == 'Y' || gotostart == 'y')

        {

            goto beginning;
        }
    }

    return 0.0;
}

int main()
{
    string date;
    std::cout << "The location is Spokane, WA by default." << '\n'
              << "Enter the date you want to find the weather forcast of . For example :  12/9/2022 . " << '\n';
    std::cin >> date;

    std::vector<std::string> data = readRecordFromFile("./source/weather file.csv", date);
    return 0;
    // std::vector<std::string> data = readRecordFromFile("weather file.csv", "12/19/2022");
    // return 0;
}

std::vector<std::string> readRecordFromFile(std::string file_name, std::string search_term)
{
    std::vector<std::string> record;
    std::ifstream file;
    file.open(file_name);
    /*
        if (file.is_open()) {
            cout << "File open";
        } else {
            cout << "File not open";
        }
    */

    bool found_record = false;
    std::string field_one;
    std::string field_two;
    std::string field_three;

    while (getline(file, field_one, ',') && !found_record)
    {
        getline(file, field_two, ',');
        getline(file, field_three, '\n');
        if (field_one == search_term)
        {
            found_record = true;
            record.push_back(field_one);
            record.push_back(field_two);
            record.push_back(field_three);
        }
    }

    std::cout << "Date is : " << record[0] << '\n';
    std::cout << "Highest Weather temperature : " << record[1] << " F" << '\n';
    std::cout << "This is how the weather is going to look like : " << record[2];

    // return record;

    std::cout << endl;
    std::cout << endl;
    std::cout << endl;

    if (record[1] == "31" || record[1] == "26" || record[1] == "25" || record[1] == "22" || record[1] == "24" || record[1] == "27" || record[1] == "28" || record[1] == "29")
    {
        std::cout << "Here's the menu u should choose from as the weather is cold and snowy" << endl;
        cold_snowy();
    }

    else if (record[1] == "36" || record[1] == "34" || record[1] == "39")
    {
        std::cout << "Here's the menu u should choose from as the weather is rainy and cloudy" << endl;
        rainy();
    }

    else
    {
        std::cout << "Here's the menu u should choose from as the weather is hot and sunny" << endl;
        hot_sunny();
    }

    return record;
}
