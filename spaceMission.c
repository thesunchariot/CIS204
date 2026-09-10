#include <stdio.h>

#define MAX_FUEL 1000.0
#define FUEL_PER_KM 2.5
#define FLIGHT_DISTANCE 300.0

int main(void) {

    // Defining variables
    float fuelNeeded;
    float remainingFuel;

    // Calculating fuel needed and the remaining fuel
    fuelNeeded = FLIGHT_DISTANCE * FUEL_PER_KM;
    remainingFuel = MAX_FUEL - fuelNeeded;

    // Outputting info
    printf("Flight distance: %.2lf km.\n", FLIGHT_DISTANCE);
    printf("Fuel needed: %.2lf liters.\n", fuelNeeded);
    printf("Starting fuel amount: %.2lf liters.\n", MAX_FUEL);
    printf("Remaining fuel: %.2lf liters.\n", remainingFuel);

    // Determining if ready for launch
    if (fuelNeeded <= MAX_FUEL) {
        printf("Ready for launch.\n");
    } else {
        printf("Not enough fuel for launch.\n");
    }

    return 0;

}