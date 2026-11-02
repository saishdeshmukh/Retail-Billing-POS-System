
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product
{
public:
    string name;
    float price;
    int stock;
};

int main()
{
    Product p[50];
    string customerName;
    int n, choice, qty;
    float total, gst, bill;

    cout << "===== RETAIL BILLING & POS SYSTEM =====\n";

    cout << "\nEnter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter number of products: ";
    cin >> n;

    if (cin.fail() || n <= 0 || n > 50)
    {
        cout << "Invalid number of products!";
        return 0;
    }

    // Enter product details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter product name: ";
        cin >> p[i].name;

        cout << "Enter price: ";
        cin >> p[i].price;

        cout << "Enter stock: ";
        cin >> p[i].stock;

        if (cin.fail() || p[i].price <= 0 || p[i].stock < 0)
        {
            cout << "Invalid input! Enter correct values.";
            return 0;
        }
    }

    // Display available products and stock condition
    cout << "\n===== AVAILABLE PRODUCTS =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct Number: " << i + 1;
        cout << "\nProduct Name: " << p[i].name;
        cout << "\nPrice: Rs." << p[i].price;
        cout << "\nStock Quantity: " << p[i].stock;

        if (p[i].stock == 0)
        {
            cout << "\nStock Condition: OUT OF STOCK\n";
        }
        else if (p[i].stock <= 5)
        {
            cout << "\nStock Condition: LOW STOCK\n";
        }
        else
        {
            cout << "\nStock Condition: AVAILABLE\n";
        }
    }

    // Product selection
    cout << "\nEnter product number: ";
    cin >> choice;

    if (cin.fail() || choice < 1 || choice > n)
    {
        cout << "Invalid product choice!";
        return 0;
    }

    // Check selected product stock
    if (p[choice - 1].stock == 0)
    {
        cout << "\nSorry! This product is OUT OF STOCK.";
        return 0;
    }

    cout << "\nStock is available for " << p[choice - 1].name;
    cout << "\nEnter quantity: ";
    cin >> qty;

    if (cin.fail() || qty <= 0)
    {
        cout << "Invalid quantity!";
        return 0;
    }

    if (qty > p[choice - 1].stock)
    {
        cout << "\nInsufficient stock!";
        cout << "\nAvailable stock: "
             << p[choice - 1].stock;
        return 0;
    }

    // Bill calculation
    total = p[choice - 1].price * qty;

    gst = 0;

    if (total >= 50)
    {
        gst = total * 5 / 100;
    }

    bill = total + gst;

    // Update stock
    p[choice - 1].stock -= qty;

    cout << fixed << setprecision(2);

    // Display customer bill
    cout << "\n\n========== CUSTOMER BILL ==========\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Product: " << p[choice - 1].name << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Subtotal: Rs." << total << endl;
    cout << "GST: Rs." << gst << endl;
    cout << "Final Bill: Rs." << bill << endl;

    // Display updated stock condition
    cout << "\n===== UPDATED STOCK STATUS =====\n";
    cout << "Product: " << p[choice - 1].name << endl;
    cout << "Remaining Stock: "
         << p[choice - 1].stock << endl;

    if (p[choice - 1].stock == 0)
    {
        cout << "Stock Condition: OUT OF STOCK\n";
    }
    else if (p[choice - 1].stock <= 5)
    {
        cout << "Stock Condition: LOW STOCK\n";
    }
    else
    {
        cout << "Stock Condition: AVAILABLE\n";
    }

    cout << "\nThank you for shopping!\n";

    return 0;
}
