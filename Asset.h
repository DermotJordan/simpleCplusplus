class Asset{

private:

  float value;  // current value of this asset
  int year;     // year this asset was acquired

public:

  Asset(int y);   	  // sets value to 1000 & year to y
  float getValue();       // returns value
  void setValue(float v); // sets value to v
  int getYear();          // returns year acquired
  void depreciateAsset(); // decreases value by 20%
  void print_details();   // prints out asset value and year acquired

};
