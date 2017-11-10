#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    11/02/2017
    A program to hold online store items in a "shopping cart." 
*/

int main(){
    
    const int ELEMENT_NUM = 10;
    const int CART_ELEMENT_NUM = 20;
    
    //Variable to hold the item number to be transferred into the cart_array.
    int item_num = 20;
    
    //The product, inventory, and price are all parallel arrays.
    string product_array[ELEMENT_NUM] = {"Lions", "Tigers", "Bears", "Flying Monkeys", "Lollipop Guild", "Kansas", "Red Slippers", "Water", "A Horse of Every Color", "Oil"};
    int inventory_array[ELEMENT_NUM] = {1, 2, 3, 5, 364, 34, 2, 1, 7, 1};
    int price_array[ELEMENT_NUM] = {1000, 2000, 3000, 5000, 364000, 34000, 2000, 1000, 7000, 1000};
    
    //A parallel array to hold 20 item numbers.
    int cart_array[CART_ELEMENT_NUM];
    
    //A variable to keep track of cart amount.
    int cart_price = 0;
    
    //Making the shopping cart array default to 0.
    for (int i = 0; i < CART_ELEMENT_NUM; ++i){
        cart_array[i] = 0;
    }
    
    //Store prompt.
    cout << "Welcome to Oz the online shopping network." << endl;
    cout << "Sponsored by: The Yellow Brick Road Engineering Firm -'If it's not yellow we didn't do it'." << endl << endl;
    cout << "ITEMS: " << endl;
    cout << "----------------------------------------" << endl << endl;
    
    //A loop to output all inventory and associated prices
    for (int i = 0; i < ELEMENT_NUM; i++){
        cout << i + 1 << ". " << product_array[i] << endl << "     There are " << inventory_array[i] << " in stock at " << " $" << price_array[i] << " per item." << endl << endl;
    }
    
    //Initializing i before the while loop to use as a counter.
    int i = 0;
    
    cout << "Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out." << endl;
    cin >> item_num;
    cout << endl;
    
    //A while loop to add the item numbers into the cart_array.
    while (item_num > 0){
        

        //Updating how many of the item are in stock.
        if (inventory_array[((item_num) - 1)] > 0){
            
            //Storing the item number into the cart to hold for the actual item name. 
            cart_array[i] = item_num;
            
            //To take away the amount of the item when chosen for the cart
            inventory_array[((item_num) - 1)] = inventory_array[((item_num) - 1)] - 1;
            
            //To keep track of the total shopping cart price.
            cart_price = cart_price + price_array[((item_num) - 1)];
            
            cout << "Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out." << endl;
            cin >> item_num;
            cout << endl;
            
        } else {
            //To undo the addition of the out of stock item.
            cart_price = cart_price - price_array[((item_num) - 1)];
            
            cout << "I'm sorry, but " << inventory_array[((item_num) - 1)] << " are out of stock." << endl;
            cout << "Choose a different product." << endl;
            cin >> item_num;
            cout << endl;
            
            //Storing the new in stock item number into the cart to hold for the actual item name. 
            cart_array[i] = item_num;
        }  
            
        ++i; //To increment i so that each element goes into the next to store in a different slot in the cart array. 
            
                    
        
        
    }
    //A for loop to access the item in the cart_array then subtract one so as to then access the associated product_array item.
    for (int i = 0; i < CART_ELEMENT_NUM; ++i){
        if (cart_array[i] > 0){
            cout << "You plan to order: " << product_array[(cart_array[i] - 1)] << endl;
        }
    }
    
    //To print out the total price of the shopping cart.
    cout << endl << "Your total comes out to: " << "$" << cart_price << endl;
    cout << "Thank you for shopping at Oz!" << endl << endl;
    
}

/*

TESTS 1:
Welcome to Oz the online shopping network.
Sponsored by: The Yellow Brick Road Engineering Firm -'If it's not yellow we didn't do it'.

ITEMS: 
----------------------------------------

1. Lions
     There are 1 in stock at  $1000 per item.

2. Tigers
     There are 2 in stock at  $2000 per item.

3. Bears
     There are 3 in stock at  $3000 per item.

4. Flying Monkeys
     There are 5 in stock at  $5000 per item.

5. Lollipop Guild
     There are 364 in stock at  $364000 per item.

6. Kansas
     There are 34 in stock at  $34000 per item.

7. Red Slippers
     There are 2 in stock at  $2000 per item.

8. Water
     There are 1 in stock at  $1000 per item.

9. A Horse of Every Color
     There are 7 in stock at  $7000 per item.

10. Oil
     There are 1 in stock at  $1000 per item.

Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out.
2

Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out.
3

Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out.
0

You plan to order: Tigers
You plan to order: Bears

Your total comes out to: $5000
Thank you for shopping at Oz!

TEST 2:Welcome to Oz the online shopping network.
Sponsored by: The Yellow Brick Road Engineering Firm -'If it's not yellow we didn't do it'.

ITEMS: 
----------------------------------------

1. Lions
     There are 1 in stock at  $1000 per item.

2. Tigers
     There are 2 in stock at  $2000 per item.

3. Bears
     There are 3 in stock at  $3000 per item.

4. Flying Monkeys
     There are 5 in stock at  $5000 per item.

5. Lollipop Guild
     There are 364 in stock at  $364000 per item.

6. Kansas
     There are 34 in stock at  $34000 per item.

7. Red Slippers
     There are 2 in stock at  $2000 per item.

8. Water
     There are 1 in stock at  $1000 per item.

9. A Horse of Every Color
     There are 7 in stock at  $7000 per item.

10. Oil
     There are 1 in stock at  $1000 per item.

Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out.
1

Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out.
1

I'm sorry, but 0 are out of stock.
Choose a different product.
5

Please input the item numbers that you would like to purchase. Input '0' when you are ready to check out.
0

You plan to order: Lions
You plan to order: Lollipop Guild
You plan to order: Lollipop Guild

Your total comes out to: $364000
Thank you for shopping at Oz!

*/