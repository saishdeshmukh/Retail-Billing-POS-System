# Retail Billing & POS System

## Project Overview
The **Retail Billing & POS System** is a simple console-based application developed using C++. It helps a cashier enter product details, view available products, select a product, calculate the customer's bill, apply GST, and update stock after a purchase.

## Project Objectives
- To develop a basic retail billing system using C++.
- To accept product details from the user.
- To display available products with their prices and stock.
- To calculate the bill based on the selected product and quantity.
- To apply GST according to the project's defined rule.
- To update product stock after a successful purchase.

## Features
- Customer name input.
- Dynamic product entry (up to 50 products).
- Product name, price, and stock input.
- Display of available products.
- Product selection using product numbers.
- Quantity validation.
- Automatic subtotal and GST calculation.
- Automatic final bill calculation.
- Stock update after purchase.

## Technologies Used
- **Programming Language:** C++
- **IDE:** Visual Studio Code / Visual Studio
- **Compiler:** GCC (g++) or a compatible C++ compiler

## C++ Concepts Used
- Classes and objects
- Arrays of objects
- Variables and data types
- Conditional statements (`if`)
- Loops (`for`)
- Input and output (`cin`, `cout`)
- String handling
- Manipulators (`fixed`, `setprecision()`)

## System Workflow
1. Start the program.
2. Enter the customer's name.
3. Enter the number of products.
4. Enter each product's name, price, and stock.
5. Display the available products.
6. Select a product using its number.
7. Enter the purchase quantity.
8. Validate the selected product and quantity.
9. Calculate the subtotal and GST.
10. Display the final customer bill.
11. Update the selected product's stock.
12. End the program.

## GST Calculation
The project uses the following GST rule:

- If the subtotal is ₹50 or more, GST is calculated at 5%.
- If the subtotal is below ₹50, GST is ₹0.

**Formula:**

Subtotal = Product Price × Quantity

GST = Subtotal × 5 / 100 (when subtotal is ₹50 or more)

Final Bill = Subtotal + GST

*Note: This is the GST rule implemented for this academic project.*

## Sample Output

```text
===== RETAIL BILLING & POS SYSTEM =====

Enter Customer Name: Saish
Enter number of products: 3

Enter product name: Rice
Enter price: 50
Enter stock: 20

Enter product name: Sugar
Enter price: 40
Enter stock: 15

Enter product name: Oil
Enter price: 120
Enter stock: 10

===== AVAILABLE PRODUCTS =====

1. Rice - Rs.50 | Stock: 20
2. Sugar - Rs.40 | Stock: 15
3. Oil - Rs.120 | Stock: 10

Enter product number: 1
Enter quantity: 2

========== CUSTOMER BILL ==========

Customer Name: Saish
Product: Rice
Quantity: 2
Subtotal: Rs.100.00
GST: Rs.5.00
Final Bill: Rs.105.00

Thank you for shopping!
```

### Explanation of the Sample Output
- `Enter number of products: 3` means three products (Rice, Sugar, and Oil) are added to the product list.
- `Enter quantity: 2` means the customer purchases two units of Rice.
- The bill is calculated for the selected product only.

## How to Run the Project

### Using VS Code
1. Install a C++ compiler such as GCC.
2. Open the project folder in VS Code.
3. Create or open the C++ source file.
4. Open the VS Code terminal.
5. Compile the program:

```bash
g++ main.cpp -o billing
```

6. Run the program:

```bash
./billing
```

On Windows, use:

```bash
billing.exe
```

### Using Visual Studio
1. Open Visual Studio.
2. Create a C++ Console App project.
3. Add the project source code to the project.
4. Build the project.
5. Run the program.

## Current Limitations
- The program supports up to 50 products in one execution.
- Product names must be entered as single words.
- Only one selected product can be billed per execution.
- Product details are not permanently stored.
- The program uses a console-based interface.
- The program does not use a database.

## Future Improvements
- Support billing for multiple products in one bill.
- Add permanent product storage using a database or file.
- Add a graphical user interface.
- Generate automatic bill numbers.
- Add customer contact details.
- Add more inventory management features.

## Team Members
1. Saish Deshmukh
2. Bhumika Dokhe
3. Shital Lahire

## Project Guide
**Guided By:** Lalith Sir

## Institution
**Career Craft Academy powered by HCL Tech**  
**Sanjivani University**  
**School of Engineering and Technology**

## Conclusion
The Retail Billing & POS System demonstrates the use of basic C++ programming concepts to perform retail billing operations. It accepts product information, calculates bills, applies the project's GST rule, and updates stock after a purchase.

---

**Project:** Retail Billing & POS System  
**Language:** C++