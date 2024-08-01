

# Food Ordering System

This is a simple console-based Food Ordering System written in C++. The program allows users to order sandwiches, view their order summary, and print a receipt. It is a basic implementation suitable for educational purposes, demonstrating the use of functions, file handling, and basic control structures in C++.

## Features

- Menu with various sandwich options, each with its own price.
- Ability to order multiple sandwiches.
- Calculation of the total cost of the order.
- Generation of a detailed receipt that can be saved to a text file.
- User-friendly prompts to continue ordering or exit.

## Getting Started

### Prerequisites

To run this program, you need:

- A C++ compiler (such as GCC, Clang, or MSVC)
- A terminal or command-line interface to execute the compiled program

### Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/your-username/food-ordering-system.git
   ```

2. **Navigate to the project directory:**

   ```bash
   cd food-ordering-system
   ```

3. **Compile the C++ code:**

   ```bash
   g++ -o food_ordering_system main.cpp
   ```

   Replace `main.cpp` with the actual name of your C++ source file if it's different.

4. **Run the program:**

   ```bash
   ./food_ordering_system
   ```

   This will start the program and display the main menu in the terminal.

## Usage

1. **Select a sandwich**: Choose a sandwich by entering the corresponding number from the menu.
2. **Enter quantity**: Input the number of sandwiches you wish to order.
3. **View total**: After each order, the program will display the total cost for that item.
4. **Continue ordering**: You can continue ordering by following the prompts, or choose to generate a receipt and exit.
5. **Receipt**: The receipt will display all ordered items with their prices and the total cost. The receipt is also saved in a file named `Receipt.txt` in the project directory.

## Example

```plaintext
                         W E L C O M E  T O  T A L A B T K  A P P   FOR FOOD            

                         _____________________MAIN MENU__________________

                             THE SANDWICHS                 price    L.E |
                         |                                              |
                         | [1] FOUL SANDWICH                3.75    L.E |
                         | [2] FALAFL SANDWICH              4.00    L.E |
                         | [3] FRENCH FRIES SANDWICH        6.50    L.E |
                         | [4] SMASHED POTATO SANDWICH      5.00    L.E |
                         | [5] FRIED EGGS SANDWICH         10.00    L.E |
                         | [6] JAM SANDWICH                 3.00    L.E |
                         | [7] EXIT                                     |
                         ________________________________________________

Choose a number from (1 to 6) to order your sandwich:
```

## File Structure

- **`main.cpp`**: The source code of the food ordering system.
- **`Receipt.txt`**: Generated after each session, contains the receipt details for the user's order.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests to enhance the functionality or fix bugs.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

