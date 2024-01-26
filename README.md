# Project Title: SkyInn
## (Weather-Based Food Ordering System)

**Developers:**
- Hassan Raza Shah
- Salwa Mehreen

**Purpose and Goal:**
This program focuses on the business aspect of the internet. It allows users to input a specific date (predictable up to 15 days of weather forecast). Based on the temperature and weather conditions of that day, the program suggests suitable food and beverages. The application aims to help users explore food choices and assist companies in advertising their food products.

**Assumptions Made:**
- The user has the application open and resides in a specific location.
- The user has a pre-set payment method.
- The user has no allergies, and the program suggests trending food.

**Detailed Description:**
1. Utilize a weather forecasting website.
2. Use jQuery library to retrieve data from the website and store it in an Excel spreadsheet.
3. Transform the Excel file into a CSV (Comma Separated Values) file.
4. Default location is Spokane; to change, create a new Excel and CSV file.
5. Use vectors to store data (date, temperature, conditions) using ifstream file input stream.
6. Implement classes for food menu, order, and menu.
7. Use if-else statements to recommend food based on temperature ranges.

8. Pseudocode:
```cpp
fetch data by inputting URL into the Excel file
convert the Excel file consisting of data into CSV file
initialize a class FoodMenu
initialize function setFoodType with parameter string type
initialize function setFoodPrice with parameter double price
initialize function getFoodType with return type as string
initialize function getFoodPrice with return type as double
initialize variables string foodType, double foodPrice
initialize a class Order
initialize function setQuantity with parameter int qty
initialize function getQuantity with return type as int
initialize function getTotalCost with return type as double
initialize a vector foodList
initialize variables string foodType, int quantity
initialize class Menu
initialize function addFood with parameters string type and double price
initialize function showMenu
depending on the value of temperature in the csv file:
code jumps to a dedicated function
initialize a function cold_snow with return type char
initialize variables int choose = 0
initialize variables int qty, choice, gotostart
Print “What would you like to order”
Input choose
depending on the input, use and If else statement to show the foods on the menu
Input choice and quantity
Print the details of the bill
Initialize function clear that clears the bill
This menu system repeats for all three weather possibilities
hot_sunny and rainy are functions for other temperature ranges
```
**Works Cited:**

 - https://cplusplus.com/

 - https://www.geeksforgeeks.org/vector-in-cpp-stl/