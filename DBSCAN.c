#include"DBSCAN.h"

int main(int argc, char *argv[])
{
	loadData(argv[1]);
	
	//printData();
	
	dbScan();
	
	printData();
}
