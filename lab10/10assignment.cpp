#include <iostream>
#include <string>
using namespace std;

/*  Kelsey Dimmick
    09/14/2017
    A program that calculates the acceleration of a jet fighter
    launched from an aircraft carrier catapult. As well as,
    outputs the time for the fighter to be accelerated to take off speed.
*/

//Creating a struct to use for the specific instance of a Jet Fighter,
struct Catapult {
    double speed;
    int distance;
    double timeSeconds;
    double acceleration;
};

int main (){
    
    //Referencing the struct in the int main().
    Catapult jetFighter;
    
    //jetFighter.speed;
    //jetFighter.distance;
    //jetFighter.timeSeconds;
    //jetFighter.acceleration;
    
    //Input for the speed.
    cout << "Enter the take-off speed in km/hr: ";
    cin >> jetFighter.speed;
    cout << endl;
    
    //To convert km/hr to m/s to match the other user inputs for calculations.
    jetFighter.speed = jetFighter.speed * (5.0 / 18.0); 
    
    //Input for the distance.
    cout << "Enter the distance of the jet from rest to take-off in m: ";
    cin >> jetFighter.distance; 
    cout << endl;
    
    //Because: speed = (distance / time).
    jetFighter.timeSeconds = (jetFighter.distance / jetFighter.speed); 
    
    //To calculate the acceleration because : distance = (1/2) * acceleration * (time * time).
    jetFighter.acceleration = (2 * jetFighter.distance) / (jetFighter.timeSeconds * jetFighter.timeSeconds); 
    
    //Output results.
    cout << "The acceleration of the jet fighter is: " << jetFighter.acceleration << " (m/s^2)" << endl << endl;
    cout << "The time for the jet fighter to accelerate is: " << jetFighter.timeSeconds << " (s)";
    
    return 0;
}

/* 
TEST RESULTS:

TEST 1: Enter the take-off speed in km/hr: 278

        Enter the distance of the jet from rest to take-off in m: 92

        The acceleration of the jet fighter is: 129.636 (m/s^2)The time for the jet fighter to accelerate is: 1.19137 (s)
        
TEST 2: Enter the take-off speed in km/hr: 278

        Enter the distance of the jet from rest to take-off in m: 700

        The acceleration of the jet fighter is: 17.0379 (m/s^2)The time for the jet fighter to accelerate is: 9.06475 (s)

TEST 3: Enter the take-off speed in km/hr: 200

        Enter the distance of the jet from rest to take-off in m: 60

        The acceleration of the jet fighter is: 102.881 (m/s^2)The time for the jet fighter to accelerate is: 1.08 (s)

TEST 4: Enter the take-off speed in km/hr: 100

        Enter the distance of the jet from rest to take-off in m: 700

        The acceleration of the jet fighter is: 2.20459 (m/s^2)The time for the jet fighter to accelerate is: 25.2 (s)

*/