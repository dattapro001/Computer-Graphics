/*dda line algorithm
 1.initializw x1,y1,x2,y2
 2. calculate dx,dy,m
 3.if |m|<1
 for each integer x
    x++
    y=y+m
    itarate untill x<=x2
 else{
    for each integer y
    y++
    x=x+1/m
    interate untill y<=y2

*/
#include<bits/stdc++.h>
#include <graphics.h>

using namespace std;
int main(){
    int gd,gm;
    gd=DETECt;

    int x1,x2,y1,y2;
    cout<<"Enter ending point:";
    cin>>x1>>y1;
    cout<<"Enter ending point:";
    cin>>x2>>y2;
    initgraph(&gd, &gm,"");

     int dx = x2-x1;  //low
     int dy = y2-y1;  //low

     int m=dy/dx;

     int x= x1, y=y1;

     if(abs(m)<1){ //absulate valu(abs)

       while(x<=x2){

        putpixel(x,y, GREEN);
        x++;
        y= y+m;
        delay(100);
       }

     }
     else{
        while(y<=y2){

            putpixel(x,y, WHITE);//value of WHITE is 5
            y++;
            x= x+(1/m);
        }
     }



   getch();
   closegraph();

}















