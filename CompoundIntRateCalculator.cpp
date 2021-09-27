#include"CompoundIntRateCalculator.h"
#include <cmath>
CompoundIntRateCalculator::CompoundIntRateCalculator(double rate)
:m_rate(rate){}

CompoundIntRateCalculator::CompoundIntRateCalculator(const CompoundIntRateCalculator &v)
:m_rate(v.m_rate){}

CompoundIntRateCalculator &CompoundIntRateCalculator::operator=(const CompoundIntRateCalculator &v){
    if(this != &v){
        this->m_rate = v.m_rate;
    }
    return *this;
}
CompoundIntRateCalculator::~CompoundIntRateCalculator(){}

double CompoundIntRateCalculator::multiplePeriod(double value, int numperiods){
    return value * pow(1 + this->m_rate,numperiods);
}
double CompoundIntRateCalculator::ContinuousCompounding(double value, int numperiods){
    return value * exp(m_rate * numperiods);
}