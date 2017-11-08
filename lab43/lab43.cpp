#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    11/07/2017
    A program to hold online store items in a "shopping cart" using a class. 
*/

class Wizard {
    //To declare the private arrays for the store.
    private:
    
    string product_array_[10] = {"Lions", "Tigers", "Bears", "Flying Monkeys", "Lollipop Guild", "Kansas", "Red Slippers", "Water", "A Horse of Every Color", "Oil"};
    int inventory_array_[10] = {1, 2, 3, 5, 364, 34, 2, 1, 7, 1};
    int price_array_[10] = {1000, 2000, 3000, 5000, 364000, 34000, 2000, 1000, 7000, 1000};
    int cart_array_[20];
    
    int cart_;
    
    int item_;
    
    int i_;
    
    //The public functions to manipulate and access the arrays.
    public:
    
    //Default constructor for the main's cart array. //??Need to have cart array set? and in class?
    Wizard () {
        for (int i = 0; i < 20; ++i) {
            cart_array_[i] = 0;
        }
    }
    void SetCart(int i){
        i_ = i;
        cart_array_[i_];
        return;
    }
    int GetCart(){
        return cart_array_[i_];
    }
    void SetProduct(int cart){
        cart_ = cart;
        product_array_[cart_];
        return;
    }
    string GetProduct () {
        
        return product_array_[cart_];
    }
    void SetInventory(int item) {
        item_ = item;
        inventory_array_[item_];
        return;
    }
    int GetInventory(){
        
        return inventory_array_[item_];
    }
    void SetPrice(int item){
        item_ = item;
        price_array_[item_];
        return;
    }
    int GetPrice(){
        
        return price_array_[item_];
    }
    void PrintProducts(){
        //A loop to output all inventory and associated prices
        for (int i = 0; i < 20; i++){
            cout << i + 1 << ". " << product_array_[i] << endl << "     There are " << inventory_array_[i] << " in stock at " << " $" << price_array_[i] << " per item." << endl << endl;
        }
    }
};

int main () {
    
    //Declaring the variables/arrays for shopping cart.
    int item_num = 20;
    int total_price = 0;
    int i = 0;
    
    //Declaring the object/shopper.
    Wizard dorothy;
    
    //Store prompt.
    cout << "Welcome to Oz the online shopping network." << endl;
    cout << "Sponsored by: The Yellow Brick Road Engineering Firm -'If it's not yellow we didn't do it'." << endl << endl;
    cout << "ITEMS: " << endl;
    cout << "----------------------------------------" << endl << endl;
    
    //To print the store's products.
    dorothy.PrintProducts();
    
    cout << "Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out." << endl;
    cin >> item_num;
    cout << endl;
    
    while (item_num > 0) {
        
        //A condition to check if there is still products available.
        dorothy.SetInventory(((item_num)-1));
        if (((dorothy.GetInventory) > 0)) {
            
            //Storing the item number into the shopper's cart.
            dorothy.SetCart(i) = item_num;
            
            //To take away the amount of the item when chosen for the cart.
            dorothy.SetInventory(((item_num)-1) > 0) -= 1;
            
            //To keep track of the total shopping cart price.
            dorothy.SetPrice(((item_num) - 1));
            total_price = total_price + dorothy.GetPrice;
            
            cout << "Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out." << endl;
            cin >> item_num;
            cout << endl;
        } else {
            //To undo the addition of the out of stock item.
            dorothy.SetPrice((item_num) - 1);
            total_price = total_price - dorothy.GetPrice;
            
            cout << "I'm sorry, but " << dorothy.GetInventory << " are out of stock." << endl;
            cout << "Choose a different product." << endl;
            cin >> item_num;
            cout << endl;
            
            //Storing the new in stock item number into the cart to hold for the actual item name. 
            dorothy.SetCart(i) = item_num;
        }
        
        ++i; //To increment i so that each element goes into the next to store in a different slot in the cart array. 

    }
    //A for loop to access the item in the cart_array then subtract one so as to then access the associated product_array item.
    for (int i = 0; i < 20; ++i){
        dorothy.SetCart(i);
        if ((dorothy.GetCart) > 0){
            dorothy.SetProduct((dorothy.GetCart(i) - 1)); 
            cout << "You plan to order: " << dorothy.GetProduct << endl;
        }
    }
    
    //To print out the total price of the shopping cart.
    cout << endl << "Your total comes out to: " << "$" << total_price << endl;
    cout << "Thank you for shopping at Oz!" << endl << endl;
    
}
    
    

}