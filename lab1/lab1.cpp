#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    line(50, 50, 200, 200);

    circle(150, 350, 80);

    rectangle(350, 50, 600, 200);
    rectangle(00, 0, getmaxx(), getmaxy());
    line(400, 400, 500, 280);
    line(500, 280, 600, 400);
    line(600, 400, 400, 400);

    line(300,0,300,getmaxy());
    line(00,250,getmaxx(),250);

    getch();

    closegraph();

    return 0;
}
