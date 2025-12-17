#include <iostream>

// Global variable to store day number
int dayNumber;

// Function to get day number from user
void dayEntry(){
    std::cout << "[1-7] Enter day number: ";
    std::cin >> dayNumber;
}

// Prints Monday
void Monday(){
    std::cout << "Monday" << std::endl;
}

// Prints Tuesday
void Tuesday(){
    std::cout << "Tuesday" << std::endl;
}

// Prints Wednesday
void Wednesday(){
    std::cout << "Wednesday" << std::endl;
}

// Prints Thursday
void Thursday(){
    std::cout << "Thursday" << std::endl;
}

// Prints Friday
void Friday(){
    std::cout << "Friday" << std::endl;
}

// Prints Saturday
void Saturday(){
    std::cout << "Saturday" << std::endl;
}

// Prints Sunday
void Sunday(){
    std::cout << "Sunday" << std::endl;
}

// Prints error message for invalid input
void Default_Entry(){
    std::cout << "Invalid selection. Enter a number between 1 and 7." << std::endl;
}

int main(){
    // Ask user to enter a day number
    dayEntry();

    // Check day number and print corresponding day
    switch(dayNumber){
       case 1:
          Monday();
          break;

       case 2:
          Tuesday();
          break;

       case 3:
          Wednesday();
          break;

       case 4:
          Thursday();
          break;

       case 5:
          Friday();
          break;

       case 6:
          Saturday();
          break;

       case 7:
          Sunday();
          break;

       default: // Invalid Selection
          Default_Entry();
     }

  return 0;
}
