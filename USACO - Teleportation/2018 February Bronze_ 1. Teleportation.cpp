// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
    //freopen("teleport.in", "r", stdin);
	// the following line creates/overwrites the output file
	//freopen("teleport.out", "w", stdout);
    //a y b punto de origen y destino,x y y puntos del teletransportador
	int a, b, x, y; cin >> a >> b >> x>> y;
    int distanciaAB=abs(b-a);
    int distanciaXY=abs(x-a)+abs(y-b);
    int distanciaYX=abs(y-a)+abs(x-b);
    int distancia ;
    distancia = min(distanciaAB,min(distanciaXY,distanciaYX));
    cout<<distancia<<endl;
}
