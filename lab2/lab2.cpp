#include <graphics.h>
#include <conio.h>
int max(int x,int y){if(x>y)return x;else return y;}
int round(float x){return (int)(x+0.5);}
class LineDrawingAlgorithms{
    
    public:
     
    void DDA(int,int);
    void direct(int,int);
    void parametric(int,int);
    void bresenham(int,int);
    
};
void LineDrawingAlgorithms::DDA(int x,int y){
    float a=0.0,b=0.0;
    int steps=max(x,y);
    float sx = (float)x/steps;
    float sy = (float)y/steps;
    for (int i = 0; i < steps; i++) {
        putpixel(round(a),round(b),BLUE);
        a+=sx;b+=sy;
    }
}
void LineDrawingAlgorithms::direct(int x,int y){
    float a=0.0,b=0.0;
    float m = (y-b)/(x-a);
    float c = y-m*x;
    for (a; a < x; a++) {
        b=m*a+c;
        putpixel(round(a),round(b),RED);
    }
}
void LineDrawingAlgorithms::parametric(int x,int y){
    float a=0.0,b=0.0;
    float dx=x-a,dy=y-b;
    float steps = max(dx,dy);
    float dt = 1.0/steps;
    for (float t =0.0; t <= 1; t+=dt) {
        putpixel(round(a+t*dx),round(b+t*dy),BROWN);
    }
}
void LineDrawingAlgorithms::bresenham(int x,int y){
    float a=0.0,b=0.0,sx=0,sy=0.0;
    float dx=x-a,dy=y-b;
    if(dy>dx){
        float  p=2*dx-dy ;
        for (b; b <= y; b++) {
            putpixel(a,b,CYAN);
            if(p<0)p=p+2*dx;
            else {p=p+2*dx-2*dy;a++;}
        }
    }
    else{
        float  p=2*dy-dx ;
        for (a; a <= x; a++) {
            putpixel(a,b,LIGHTMAGENTA);
            if(p<0)p=p+2*dy;
            else {p=p+2*dy-2*dx;b++;}
        }
    }
}


int main() {
    int gd = 0, gm;
    initgraph(&gd, &gm, "");
    rectangle(00,00,300,300);
    LineDrawingAlgorithms a1;
    a1.DDA(300,150);
    a1.direct(300,300);
    a1.parametric(150,300);
    a1.bresenham(300,75);
    a1.bresenham(75,300);
    
    getch();
    closegraph();
    return 0;
}
