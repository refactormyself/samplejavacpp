

class Math {
  public:
    int add(int a, int b){return a+b;}
    int subtract(int a, int b){return a-b;}
    int multiply(int a, int b){return a*b;}

} math;

class Rectangle {
    int width, height;
  public:
    Rectangle (){};
    Rectangle (int,int);
    void set_values (int,int);
    int area (void);
};
// } rect;