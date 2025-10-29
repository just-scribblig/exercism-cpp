#include "darts.h"
#include <cmath>

namespace darts {

// TODO: add your solution here
    int score(double x, double y){
        double distance = sqrt(x*x + y*y);
        if (distance > 10) return 0;
        else if (distance > 5) return 1;
        else if (distance > 1) return 5;
        else return 10;
    }
}  // namespace darts
