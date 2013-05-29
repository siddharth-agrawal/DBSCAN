int regionQuery(int start, int index)
{
	int i, j, count = 0, distance, temp;
	
	for(i = 0; i < DATASET_SIZE; i++)
	{
		if(i != index)
		{
			distance = 0;
		
			for(j = 0; j < FEATURES; j++)
			{
				temp = data[i][j] - data[index][j];
			
				distance += temp * temp;
			}
		
			if(distance <= EPSILON)
			{
				neigh_points[start+count] = i;
			
				count++;
			}
		}
	}
	
	return count;
}
