

void positiveNegativeZeroArray (double x[], int n)

{ 

   int positive_Count = 0; 
   int negative_Count = 0;
   int zero_Count	 = 0;
   int i;

   for (i=0; i < n; i++)

	{

	   if (x[i] > 0)

		{
		  positive_Count++;
		}

	   else if (x[i] < 0)

		{
		  negative_Count++;
		}

	   else if (x[i] = 0)

		{
		  zero_Count++;
		}   
			
	} 
  
	 
  
cout << "Count of positive elements = " << positive_Count << endl
	 << "Count of negative elements = " << negative_Count << endl
	 << "Count of zero	 elements = " << zero_Count << endl;

}


