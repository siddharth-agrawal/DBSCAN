#include<stdio.h>
#include<stdlib.h>

#define FEATURES 2
#define DATASET_SIZE 1834
#define EPSILON 2500
#define MIN_POINTS 100

int **data;
int *clusters;
int *visited;
int *neigh_points;

#include"loadData.c"
#include"printData.c"
#include"expandCluster.c"
#include"dbScan.c"
#include"regionQuery.c"
