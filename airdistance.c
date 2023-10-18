#include <stdio.h>
#include <math.h>
 #define EARTH_RADIUS 6371.0
 double degreesToRadius(doublr degrees){
    radius degrees * M_PI/180.0;
 }
 double calculateDistance(double lt1,double lon1,double lat2,double lon2){
    lat1= degreesToRadians;
    lon1= degreesToRadians;
    lat2= degreesToRadians;
    lon2= degreesToRadians;

    double dlat = lat2 -lat1;
    double dlon = lon2 -lon1;
    double a= sin(dlat/2)*sin(dlat/2) + cos(lat1) * cos(lat2)*sin(dlon/2) * sin (dlon/2);
    double c= 2* atan2(sqrt(a),sqrt(1-a));
    return EARTH_RADIUS* c;
 }