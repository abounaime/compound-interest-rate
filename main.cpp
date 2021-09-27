#include "CompoundIntRateCalculator.h"
#include <iostream>
int main (){

    double value = 1000;
    double rate = 0.05;
    int numPeriods = 2;
    CompoundIntRateCalculator comp (rate);

    double res = comp.multiplePeriod(value,numPeriods);
    std::cout << "result multiple period : " << res << std::endl;
    res = comp.ContinuousCompounding(value,numPeriods);
    std::cout << "result multiple period : " << res << std::endl;
    return 0;
}