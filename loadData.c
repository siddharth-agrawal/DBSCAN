void loadData(char file_name[])
{
	data = (int**)calloc(DATASET_SIZE, sizeof(int*));
	
	visited = (int*)calloc(DATASET_SIZE, sizeof(int));
	
	neigh_points = (int*)calloc(DATASET_SIZE*DATASET_SIZE, sizeof(int));
	
	clusters = (int*)calloc(DATASET_SIZE, sizeof(int));
	
	int i, j;
	
	for(i = 0; i < DATASET_SIZE; i++)
	{
		data[i] = (int*)calloc(FEATURES, sizeof(int));
	}
	
	FILE *fp;
	fp = fopen(file_name, "r");
	
	for(i = 0; i < DATASET_SIZE; i++)
	{
		for(j = 0; j < FEATURES; j++)
		{
			fscanf(fp, "%d", &data[i][j]);
		}
	}
	
	fclose(fp);
}
