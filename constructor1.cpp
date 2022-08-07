#include <iostream>

using namespace std;

class rectangle

{
private:
  
    int length;
    int breadth;

public:
  rectangle()
  {
    int length;
    int breadth;
  }

public:
  rectangle(int l, int b)
  {
    setLength(l);
    setBreadth(b);
  }
  void setLength(int l)
  {
    if (l > 0)
    {
      length = l;
    }
    else
      length = 1;
  }
  void setBreadth(int b)
  {
    if (b > 0)
    {
      breadth = b;
    }
    else
      breadth = 1;
  }
  int getlength()
  {
    return length;
  }
  int getbreadth()
  {
    return breadth;
  }

  int area()
  {
    return length * breadth;
  }
  int perimeter()
  {
    return 2 * (length + breadth);
  }
};
int main()
{
  rectangle r;
  r.setLength(3);
  r.setBreadth(4);

  cout << r.area();
  return 0;
}
