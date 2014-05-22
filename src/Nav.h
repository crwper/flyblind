#ifndef FLYSIGHT_NAV
#define FLYSIGHT_NAV

int32_t calcDistance(int32_t lat1, int32_t lon1, int32_t lat2, int32_t lon2);
int calcDirection(int32_t lat, int32_t lon, int32_t chead);
int32_t round_nearest(float f);
int calcRelBearing(int bearing, int heading);

#endif