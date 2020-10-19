#include "Shape.hpp"

class Circle : public Shape {
public:
  Circle (Point p, int rr);

  Point center () const { return x; }
  void move (Point to) { x = to; }

  void draw() const;
  void rotate (int) {}

private:
  Point x;
  int r;
};

class Smiley : public Circle {
public:
  Smiley (Point p, int r) : Circle {p, r}, mouth {nullptr} {}
  ~Smiley ()
  {
    delete mouth;
    for (auto p : eyes)
      delete p;
  }

  void move (Point to);
  void draw () const;
  void rotate (int);

  void add_eye (Shape *s) { eyes.push_back (s); }
  void set_mouth (Shape* s);
  virtual void wink (int i);

private:
  vector<Shape*> eyes;
  Shape* mouth;
};
