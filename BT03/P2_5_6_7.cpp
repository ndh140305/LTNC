#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x, y;
    Point(){};
};

struct Rect{
    double x, y, w, h;
    Rect(){};
    bool contains(const Point& p){
        if (p.x>=x && p.x<=(x+w) && p.y<=y && p.y>=(y-h)){
            return true;
        }
        return false;
    }
};

struct Ship{
    Rect r;
    string id;
    double dx, dy;
    Ship(){};
    move(){
        r.x+=dx;
        r.y+=dy;
    }
};

void display(const Ship& ship){
    cout << "id: " << ship.id << endl << "toa do: " << ship.r.x << " " << ship.r.y << endl ;

}

int main(){
    Ship ship1, ship2;
    cin >> ship1.r.x >> ship1.r.y >> ship1.id >> ship1.dx >> ship1.dy;
    cin >> ship2.r.x >> ship2.r.y >> ship2.id >> ship2.dx >> ship2.dy;
    int l=0;
    while (l<10){
        cout << "vi tri " << l << ":" << endl;
        ship1.move();
        ship2.move();
        cout << "Ship1: " << endl;
        display(ship1);
        cout << "Ship2: " << endl;
        display(ship2);
        l++;
    }
}
