#include <iostream>
#include <fstream>

using namespace std;

// Product class to store product information
class Product {
public:
    string name;
    int quantity;
    double price;
};

// Function to display the menu and get user choice
int getMenuChoice() {
    int choice;
    cout << "\n*** Supermarket Billing System ***\n";
    cout << "1. Add Product to Cart\n";
    cout << "2. View Cart\n";
    cout << "3. Generate Bill\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

// Function to add a product to the cart
void addProductToCart(Product* cart, int& cartSize) {
    Product product;
    cout << "Enter product name: ";
    cin >> product.name;
    cout << "Enter quantity: ";
    cin >> product.quantity;
    cout << "Enter price: ";
    cin >> product.price;
    cart[cartSize++] = product;
    cout << "Product added to cart successfully!\n";
}

// Function to view the cart
void viewCart(const Product* cart, int cartSize) {
    cout << "\n*** Cart ***\n";
    if (cartSize == 0) {
        cout << "Cart is empty.\n";
    } else {
        cout << "Product\t\tQuantity\tPrice\n";
        cout << "------------------------------------\n";
        for (int i = 0; i < cartSize; i++) {
            cout << cart[i].name << "\t\t" << cart[i].quantity << "\t\t" << cart[i].price << endl;
        }
    }
}

// Function to generate the bill
void generateBill(const Product* cart, int cartSize) {
    double total = 0.0;
    cout << "\n*** Bill ***\n";
    if (cartSize == 0) {
        cout << "Cart is empty.\n";
    } else {
        cout << "Product\t\tQuantity\tPrice\t\tTotal\n";
        cout << "------------------------------------------------------\n";
        for (int i = 0; i < cartSize; i++) {
            double productTotal = cart[i].quantity * cart[i].price;
            cout << cart[i].name << "\t\t" << cart[i].quantity << "\t\t" << cart[i].price << "\t\t" << productTotal << endl;
            total += productTotal;
        }
        cout << "\nTotal: $" << total << endl;
    }
}

// Function to save product information to a file
void saveProductInfo(const Product* products, int productSize) {
    ofstream file("product_info.txt");
    if (file.is_open()) {
        for (int i = 0; i < productSize; i++) {
            file << products[i].name << " " << products[i].quantity << " " << products[i].price << endl;
        }
        cout << "Product information saved to file successfully!\n";
        file.close();
    } else {
        cout << "Unable to open the file.\n";
    }
}

// Function to load product information from a file
void loadProductInfo(Product* products, int& productSize) {
    ifstream file("product_info.txt");
    if (file.is_open()) {
        Product product;
        while (file >> product.name >> product.quantity >> product.price) {
            products[productSize++] = product;
        }
        cout << "Product information loaded from file successfully!\n";
        file.close();
    } else {
        cout << "Unable to open the file.\n";
    }
}

int main() {
    const int MAX_PRODUCTS = 100;
    const int MAX_CART_SIZE = 100;
    Product products[MAX_PRODUCTS];
    Product cart[MAX_CART_SIZE];
    int productSize = 0;
    int cartSize = 0;

    // Load product information from file
    loadProductInfo(products, productSize);

    int choice;
    do {
        choice = getMenuChoice();

        switch (choice) {
            case 1:
                addProductToCart(cart, cartSize);
                break;
            case 2:
                viewCart(cart, cartSize);
                break;
            case 3:
                generateBill(cart, cartSize);
                break;
            case 4:
                saveProductInfo(products, productSize);
                break;
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}