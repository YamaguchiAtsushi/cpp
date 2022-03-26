#include <stdio.h>

class Figure{
public:
    virtual void draw();
};

void Figure::draw(){

}

class Circle : public Figure{
public:
    void draw();
};

void Circle::draw(){
    printf(" ○ ");
}

class Triangle : public Figure{
public:
    void draw();
};

void Triangle::draw(){
    printf(" △ ");
}

class Rectangle : public Figure{
public:
    void draw();
};

void Rectangle::draw(){
    printf(" □ ");
}

int main(int argc, char **argv){
    Figure *p[100];
    Circle c1;
    p[0] = &c1;
    Triangle t1, t2;
    p[1] = &t1;
    p[2] = &t2;
    Rectangle r1, r2, r3;
    p[3] = &r1;
    p[4] = &r2;
    p[5] = &r3;
    p[6] = NULL;

    int i;

    for(i = 0; p[i] != NULL; i++){
        p[i]->draw();
    }
    printf("\n");

    for(i = 2; i < 5; i++){
        p[i] = p[i + 1];
    }
    p[i] = NULL;

    for(i = 0; p[i] != NULL; i++){
        p[i]->draw();
    }
    printf("\n");
    return 0;
}
