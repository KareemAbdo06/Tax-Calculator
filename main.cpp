#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main() {
    cout << "Enter the total sales in $: ";
    double total_sales;
    cin >> total_sales;

    const double sales_tax_rate = .04;
    const double county_tax_rate = .02;

    double sales_tax = total_sales * sales_tax_rate;
    double county_tax = total_sales * county_tax_rate;

    cout << "Sales tax is $" << sales_tax
         << ", and county tax is $" << county_tax << " ." << endl;

    return 0;
}
