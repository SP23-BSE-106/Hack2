#include <stdio.h>
#include <math.h>
 #define EARTH_RADIUS 6371.0
 double degreesToRadians(double degrees){
    return degrees * M_PI/180.0;
 }
 double calculateDistance(double lat1,double lon1,double lat2,double lon2){
    lat1= degreesToRadians(lat1);
    lon1= degreesToRadians(lon1);
    lat2= degreesToRadians(lat2);
    lon2= degreesToRadians(lon2);

    double dlat = lat2 -lat1;
    double dlon = lon2 -lon1;
    double a= sin(dlat/2)*sin(dlat/2) + cos(lat1) * cos(lat2) *sin(dlon/2) * sin (dlon/2);
    double c= 2 * atan2(sqrt(a),sqrt(1-a));
    return EARTH_RADIUS* c;
 }
 int main()
 {
    double lat1,lon1,lat2,lon2;
    printf("Enter the latitude and longitude of the origin:\n");
    printf("Latitude:");
    scanf("%lf",&lat1);
    printf("Longitude:");
    scanf("%lf",&lon1);


    printf("Enter the latitude and longitude of the destination:\n");
    printf("Latitude:");
    scanf("%lf",&lat2);
    printf("Longitude:");
    scanf("%lf",&lon2);
    double distance = calculateDistance(lat1,lon1,lat2,lon2);
    printf("Air distance is %.6lf kms\n", distance);
    return 0;
 }