class CompoundIntRateCalculator
{
private:
    /* data */
    double m_rate;
public:
    CompoundIntRateCalculator(double rate);
    ~CompoundIntRateCalculator();
    CompoundIntRateCalculator(const CompoundIntRateCalculator &v);
    CompoundIntRateCalculator &operator =(const CompoundIntRateCalculator &v);
    double multiplePeriod(double rate, int numPeriods);
    double ContinuousCompounding(double rate, int numPeriods);
};
