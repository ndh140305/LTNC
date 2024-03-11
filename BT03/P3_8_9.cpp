#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x, y;
    Point(int _x , int _y){
        x=_x;
        y=_y;
    };
};

void print (Point point){
    cout << &point << endl << &point.x << endl << &point.y << endl;
}

void print_ (const Point& point){
    cout << &point << endl << &point.x << endl << &point.y << endl;
}
int main(){
    Point point(4,5);
    print(point);
    print_(point);
}
