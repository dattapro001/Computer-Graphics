#include <iostream>
#include <graphics.h>

using namespace std;

int main() {
  int gd = DETECT, gm;
  initgraph(&gd, &gm, " ");

  //drawing Axis
  int width = getmaxx();
  int height = getmaxy();
  int center_x = width / 2;
  int center_y = height / 2;
  line(0, center_y, width, center_y);
  line(center_x, 0, center_x, height);

  int x1, y1, x2, y2, x3, y3;
  cout<<"Enter Co-Ordinate of a(x1, y1): ";
  cin>>x1>>y1;
  cout<<"Enter Co-Ordinate of b(x2, y2): ";
  cin>>x2>>y2;
  cout<<"Enter Co-Ordinate of c(x3, y3): ";
  cin>>x3>>y3;

  // Original Triangle Plot
  line(center_x + x1, center_y - y1, center_x + x2, center_y - y2);
  line(center_x + x2, center_y - y2, center_x + x3, center_y - y3);
  line(center_x + x3, center_y - y3, center_x + x1, center_y - y1);

  // Mirror Triangle Plot
  setcolor(RED);
  //Keeping the X-Axis fixed
  y1 = -y1;
  y2 = -y2;
  y3 = -y3;
  line(center_x + x1, center_y - y1, center_x + x2, center_y - y2);
  line(center_x + x2, center_y - y2, center_x + x3, center_y - y3);
  line(center_x + x3, center_y - y3, center_x + x1, center_y - y1);

  getch();
  closegraph();
  return 0;
}
