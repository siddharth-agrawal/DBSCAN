void expandCluster(int cluster_no, int num_npoints, int index)
{
	clusters[index] = cluster_no;
	
	int i, count = 0;
	
	for(i = 0; i < num_npoints; i++)
	{
		if(!visited[neigh_points[i]])
		{
			visited[neigh_points[i]] = 1;
			
			count = regionQuery(num_npoints, neigh_points[i]);
			
			if(count >= MIN_POINTS)
			{
				num_npoints += count;
			}
		}
		
		if(!clusters[neigh_points[i]])
		{
			clusters[neigh_points[i]] = cluster_no;
			//printf("Hi\n");
		}
	}
}
