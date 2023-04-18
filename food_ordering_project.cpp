/*
Create a Project to demonstrate Simple Food Ordering Project which will help to order
foods . The Project should contain all the necessary requirements i.e need to use
conditional Statements, Loops, Function, SwitchCase and also A Program should use
the concept of OOP.
• Give comments where it is required , for better understanding of codes. It will help
you and the project evaluator.
*/

#include<iostream>
#include<string>
using namespace std;

class manuitems                                 // Create a class and name it manuitems
{
    public:
    void manu()                                 // Create a member function and name it manu
    {
         cout << "1) Pizzas" << endl;
         cout << "2) Burgers" << endl; 
         cout << "3) Sandwich" << endl;
         cout << "4) Rolls" << endl;
         cout << "5) Biryani" << endl;
    }

    int quantity()                              // Create a member function and name it quantity
    {
        int quantity;
        cout << "Please Enter Quantity: ";
        cin >> quantity;
        return quantity;
    }

    int reorder()                               // Create a member function and name it reorder
    {
        char reorder;
        cout << "Your Order Will be delivered in 40 Minutes" << endl;
        cout << "Thank you For Ordering From Tops Tech Fast Food" << endl;
        cout << "Would you like to order anything else? Y/N:";
        cin >> reorder;
        cout << endl;
        return reorder;
    }
};

int main()
{
    string name;
    int choice, order, quantity;
    char reorder='y';
    int club_pizza = 500, veg_pizza = 300, extream_veg_pizza = 200;
    int club_burger = 500, veg_burger = 300, extream_veg_burger = 200;
    int club_sandwich = 500, veg_sandwich = 300, extream_veg_sandwich = 200;
    int club_rolls = 500, veg_rolls = 300, extream_veg_rolls = 200;
    int club_biryani = 500, veg_biryani = 300, extream_veg_biryani = 200;
    int pizza_bill=0, burger_bill=0, sandwitch_bill=0, rolls_bill=0, biryani_bill=0, total_bill=0;

    cout << "-----------------Tops Tech. Fast Food-----------------\n\n";

    cout << "Please Enter Your Name: ";
    cin >> name;
    cout << "Hello " << name << endl << endl;

    cout << "What would you like to order?" << endl << endl;

    cout << "-----------------Manu-----------------\n\n";

    for(reorder='y'; reorder=='y'||'n'; reorder)
    {
        if(reorder=='n' || reorder=='N')
        {
            cout << "Thank You!";
            break;
        }

        else if(reorder=='y' || reorder=='Y')
        {
            manuitems obj;
            obj.manu();
            cout << endl;

            cout << "Please Enter Your Choice: ";
            cin >> choice;
            cout << endl;

            switch(choice)
            {
                case 1:
                    cout << "1 Club Pizza Rs."<< club_pizza << endl;
                    cout << "2 Veg. Pizza Rs."<< veg_pizza << endl;
                    cout << "3 Extream Veg. Pizza Rs."<< extream_veg_pizza << endl << endl;

                    cout << "Please Enter which Pizza you would like to have?: ";
                    cin >> order;
                    cout << endl;

                    if(order==1)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Club Pizza" << endl;
                        pizza_bill = (quantity * club_pizza) + pizza_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==2)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Veg. Pizza" << endl;
                        pizza_bill = (quantity * veg_pizza) + pizza_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==3)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Extream Veg. Pizza" << endl;
                        pizza_bill = (quantity * extream_veg_pizza) + pizza_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else
                    {
                        cout << "Invalide Choice" << endl << endl;
                        break;
                    }
                    break;

                case 2:
                    cout << "1 Club Burger Rs."<< club_burger << endl;
                    cout << "2 Veg. Burger Rs."<< veg_burger << endl;
                    cout << "3 Extream Veg. Burger Rs."<< extream_veg_burger << endl << endl;

                    cout << "Please Enter which Burger you would like to have?: ";
                    cin >> order;
                    cout << endl;

                    if(order==1)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Club Burger" << endl;
                        burger_bill = (quantity * club_burger) + burger_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==2)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Veg. Burger" << endl;
                        burger_bill = (quantity * veg_burger) + burger_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==3)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Extream Veg. Burger" << endl;
                        burger_bill = (quantity * extream_veg_burger) + burger_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else
                    {
                        cout << "Invalide Choice" << endl << endl;
                        break;
                    }
                    break;

                    case 3:
                    cout << "1 Club Sandwich Rs."<< club_sandwich << endl;
                    cout << "2 Veg. Sandwich Rs."<< veg_sandwich << endl;
                    cout << "3 Extream Veg. Sandwich Rs."<< extream_veg_sandwich << endl << endl;

                    cout << "Please Enter which Sandwich you would like to have?: ";
                    cin >> order;
                    cout << endl;

                    if(order==1)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Club Sandwich" << endl;
                        sandwitch_bill = (quantity * club_sandwich) + sandwitch_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==2)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Veg. Sandwich" << endl;
                        sandwitch_bill = (quantity * veg_sandwich) + sandwitch_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==3)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Extream Veg. Sandwich" << endl;
                        sandwitch_bill = (quantity * extream_veg_sandwich) + sandwitch_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else
                    {
                        cout << "Invalide Choice" << endl << endl;
                        break;
                    }
                    break;

                    case 4:
                    cout << "1 Club Rolls Rs."<< club_rolls << endl;
                    cout << "2 Veg. Rolls Rs."<< veg_rolls << endl;
                    cout << "3 Extream Veg. Rolls Rs."<< extream_veg_rolls << endl << endl;

                    cout << "Please Enter which Rolls you would like to have?: ";
                    cin >> order;
                    cout << endl;

                    if(order==1)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Club Rolls" << endl;
                        rolls_bill = (quantity * club_rolls) + rolls_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==2)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Veg. Rolls" << endl;
                        rolls_bill = (quantity * veg_rolls) + rolls_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==3)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Extream Veg. Rolls" << endl;
                        rolls_bill = (quantity * extream_veg_rolls) + rolls_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else
                    {
                        cout << "Invalide Choice" << endl << endl;
                        break;
                    }
                    break;

                    case 5:
                    cout << "1 Club Biryani Rs."<< club_biryani << endl;
                    cout << "2 Veg. Biryani Rs."<< veg_biryani << endl;
                    cout << "3 Extream Veg. Biryani Rs."<< extream_veg_biryani << endl << endl;

                    cout << "Please Enter which Biryani you would like to have?: ";
                    cin >> order;
                    cout << endl;

                    if(order==1)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Club Biryani" << endl;
                        biryani_bill = (quantity * club_biryani) + biryani_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==2)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Veg. Biryani" << endl;
                        biryani_bill = (quantity * veg_biryani) + biryani_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else if(order==3)
                    {
                        quantity = obj.quantity();
                        cout << endl;
                        cout << "-----------------Your Order-----------------\n\n";
                        cout << quantity << " Extream Veg. Biryani" << endl;
                        biryani_bill = (quantity * extream_veg_biryani) + biryani_bill;
                        total_bill = pizza_bill + burger_bill + sandwitch_bill + rolls_bill + biryani_bill;
                        cout << "Your Total Bill is: " << total_bill << endl;
                        reorder = obj.reorder();
                    }
                    else
                    {
                        cout << "Invalide Choice" << endl << endl;
                        break;
                    }
                    break;
            }
        }
        else
        {
            cout << "Invalide Choice" << endl;
            break;
        }
    }
}