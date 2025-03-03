    // Copyright 2025 Mikhail Ibrahim
    // Date: Mar 2, 2025
    // Description: A C++ program that calculates the circumference of a circle
    // using tau (𝞽) and user input for the radius.

    #include <iostream>

    // Define constant TAU
    const double TAU = 6.28318;

    int main() {
        // Prompt user for radius input
        double radius;
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;

        // Calculate circumference using tau
        double circumference = TAU * radius;

        // Display result
        std::cout << "\nFor a circle with radius " << radius << " cm:"
                << std::endl;
        std::cout << "The circumference is " << circumference << " cm."
                << std::endl;

        return 0;
    }

