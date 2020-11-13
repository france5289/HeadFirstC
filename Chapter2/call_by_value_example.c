// An example code to show 'call by value'
#include <stdio.h>

void go_south_east(int lat, int lon){
    lat = lat - 1;
    lon = lon = 1;
}

int main(){
    int latitude = 32;
    int lontitude = -64;
    printf("Current Position at[ %i, %i ] \n", latitude, lontitude);
    go_south_east(latitude, lontitude);
    printf("Avast! Now at :[ %i, %i ] \n", latitude, lontitude);
    return 0;
}
