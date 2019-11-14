#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    // makes sure the seed is different every time
    srand(time(0));
    int TRIES;
    cout << "Enter tries: ";
    cin >> TRIES;
    
    // using a for loop to accumulate hits
    
    int hits = 0;
    for (int i = 0; i <= TRIES; i++)
    {
        // r is a random nubmer between 0 and 1
        double r = rand() * 1.0 / RAND_MAX;
        // we use r to generate a random number between  -1 and 1
        double x = -1 + 2 * r;
        // we generate a random y value in a similar fashion
        double r2 = rand() * 1.0 / RAND_MAX;
        double y = -1 + 2*r2;
        
        // now we check if we have a hit, y^2 + x^2
        // tels us if our coordinates are within the radius 1
        if (x * x + y * y <= 1){ hits++; }
    }
    
    double pi_est = 4.0 * hits/TRIES;
    
    cout << "Estimate of pi using monte carlo method and " << TRIES << " tries:" << endl;
    cout << pi_est << endl;
    cout << hits;
    return 0;
}