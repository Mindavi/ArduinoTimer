class IntervalTimer {
  private:
    long currentMillis;
    long previousMillis;
    int intervalMillis;
  public:
    IntervalTimer(int intervalMilli);
    bool timeOver();
    void reset();
};
