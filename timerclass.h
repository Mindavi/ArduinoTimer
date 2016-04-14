class IntervalTimer {
  private:
    unsigned long currentMillis;
    unsigned long previousMillis;
    unsigned int intervalMillis;
  public:
    IntervalTimer(unsigned int intervalMilli);
    bool timeOver();
    void reset();
};
