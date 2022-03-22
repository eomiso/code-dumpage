#include "util.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <sys/time.h>

static double start_time[8];

static double get_time() {
    struct timeval tv;
    gettimeofday(&tv, 0);
    return tv.tv_sec + tv.tv_usec * 1e-6;
}

void timer_start(int i) {
    start_time[i] = get_time();
}

double timer_stop(int i) {
    return get_time() - start_time[i];
}

