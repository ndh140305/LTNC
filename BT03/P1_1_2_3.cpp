#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x, y;
    Point(){};
    Point (int _x , int _y){
        x=_x;
        y=_y;
    }
};
void print(Point p){
        cout << p.x << " " << p.y;
    }
void print_(const Point& p){
        cout << p.x << " " << p.y;
    }
Point mid_point (const Point a, const Point b){
    Point res((a.x+b.x)/2, (a.y+b.y)/2);
    return res;
}
int main(){
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);
    cout << endl;
    print_(point);
    cout << endl;
    Point b(5, 53);
    cout << endl;
    print_(mid_point(point, b));
}
