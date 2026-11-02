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

    if (n <= 0 || n > 50)
    {
        cout << "Invalid number of products!";
        return 0;
    }

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

    cout << "\n===== AVAILABLE PRODUCTS =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << p[i].name
             << " - Rs." << p[i].price
             << " | Stock: " << p[i].stock << endl;
    }

    cout << "\nEnter product number: ";
    cin >> choice;

    if (choice < 1 || choice > n)
    {
        cout << "Invalid product choice!";
        return 0;
    }

    cout << "Enter quantity: ";
    cin >> qty;

    if (qty <= 0 || qty > p[choice - 1].stock)
    {
        cout << "Invalid quantity or insufficient stock!";
        return 0;
    }

    total = p[choice - 1].price * qty;

    gst = 0;

    if (total >= 50)
    {
        gst = total * 5 / 100;
    }

    bill = total + gst;

    p[choice - 1].stock -= qty;

    cout << fixed << setprecision(2);

    cout << "\n========== CUSTOMER BILL ==========\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Product: " << p[choice - 1].name << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Subtotal: Rs." << total << endl;
    cout << "GST: Rs." << gst << endl;
    cout << "Final Bill: Rs." << bill << endl;

    cout << "\nThank you for shopping!\n";

    return 0;
}