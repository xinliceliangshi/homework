#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    while(1) {
        int x1, y1, x2, y2 ,x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if(!x1 && !y1 && !x2 && !y2 && !x3 && !y3) break;
        if((x2 - x1)*(y3-y1)-(y2-y1)*(x3-x1) < 0) printf("1\n");
        else printf("0\n"); 
    }
    return 0;
}