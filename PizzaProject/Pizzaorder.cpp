#include <iostream>
using namespace std;

int spizza;
int mpizza;
int lpizza;
int toppings;
char delivery;
double deliveryfee = 35;
double deliveryfees = 0;




void capture(){
    cout << "===== Mario's Pizzeria - Order Calculator ====="<<endl;
    cout << "Enter number of small pizzas: ";
    cin >> spizza;
    cout << "Enter number of medium pizzas: ";
    cin >> mpizza;
    cout << "Enter number of large pizzas: ";
    cin >> lpizza;
    cout << "Enter number of extra toppings: ";
    cin >> toppings;
    cout << "Delivery Required? (y/n): ";
    cin >> delivery;
}
void display(){
    switch (delivery){
    case 'y':
        cout << "Delivery Fee: R"<<deliveryfee<<endl; 
        break;
    case 'n':
        cout <<"Delivery Fee: R"<<deliveryfees<<endl;
        break;
    default:
        cout << "Error"<<endl;
        break;
        exit(1);
    }

    double spizzaA = spizza * 80;
    double mpizzaA = mpizza * 120;
    double lpizzaA = lpizza * 160;
    double toppingsA = toppings * 15;
   
    cout << "===== ORDER RECEIPT ====="<<endl;
    cout << "Small Pizzas("<<spizza<<"): R"<<spizzaA<<endl;
    cout << "Medium Pizzas("<<mpizza<<"): R"<<mpizzaA<<endl;
    cout << "Large Pizzas("<<lpizza<<"): R"<<lpizzaA<<endl;
    double subtotal = spizzaA + mpizzaA + lpizzaA;
    cout << "Subtotal: R"<<subtotal<<endl;
    cout << "Number of extra toppings("<<toppings<<"): R"<<toppingsA<<endl;
    

    double tax = 0.15 * subtotal;
    cout << "Tax(15%): R"<< tax <<endl;

    if (delivery = 'y'){
        cout << "Total Cost: R"<< tax + subtotal + deliveryfee + toppingsA;
    }
    else if(delivery = 'n'){
        cout << "Total Cost: R"<< tax + subtotal + toppingsA + deliveryfees;
    }
   
}


int main(){
    capture();
    display();
    return 0;
}