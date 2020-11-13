#include <stdio.h>

void go_south_east( int *lat, int *lon) {
    // we passed in two pointer variable
    printf("Address of 'lat' : %p\n", lat);
    printf("Address of 'lon' : %p\n", lon);
    *lat = *lat - 1; //dereference
    *lon = *lon + 1;
}

int main(){
    int latitude = 32;
    int longtitude = -64;

    printf("Address of 'latitude' : %p\n", &latitude);
    printf("Address of 'longtitude' : %p\n", &longtitude);
    // cause type of parameters of 'go_south_east' is pointer
    // so we need to pass address in
    go_south_east( &latitude, &longtitude);
    printf("Avast! Now at [ %i, %i]\n", latitude, longtitude);
}