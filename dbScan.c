void dbScan()
{
	int next_cluster = 1, i, j, num_npoints;
	
	for(i = 0; i < DATASET_SIZE; i++)
	{
		if(!visited[i])
		{
			visited[i] = 1;
			
			num_npoints = regionQuery(0, i);
			
			if(num_npoints > MIN_POINTS)
			{
				expandCluster(next_cluster, num_npoints, i);
				
				next_cluster++;
			}
		}
	}
}
