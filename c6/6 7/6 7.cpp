// 6 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{

	char array[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
	for(array[0][0] = 1; array[0][0] < 10; array[0][0]++)
	{
		for(array[0][1] = 1; array[0][1] < 10; array[0][1]++)
		{
			if(array[0][1] == array[0][0])
				continue;
			for(array[0][2] = 1; array[0][2] < 10; array[0][2]++)
			{	
				if(array[0][2] == array[0][0])
					continue;
				if(array[0][2] == array[0][1])
					continue;
				if((array[0][0] + array[0][1] + array[0][2]) != 15)
					continue;
				for(array[1][0] = 1; array[1][0] < 10; array[1][0]++)
				{
					if(array[1][0] == array[0][0])
						continue;
					if(array[1][0] == array[0][1])
						continue;					
					if(array[1][0] == array[0][2])
						continue;
					for(array[1][1] = 1; array[1][1] < 10; array[1][1]++)
					{
						if(array[1][1] == array[0][0])
							continue;
						if(array[1][1] == array[0][1])
							continue;					
						if(array[1][1] == array[0][2])
							continue;
						if(array[1][1] == array[1][0])
							continue;
						for(array[1][2] = 1; array[1][2] < 10; array[1][2]++)
						{
							if(array[1][2] == array[0][0])
								continue;
							if(array[1][2] == array[0][1])

								continue;					
							if(array[1][2] == array[0][2])
								continue;
							if(array[1][2] == array[1][0])
								continue;
							if(array[1][2] == array[1][1])
								continue;
							if((array[1][0] + array[1][1] + array[1][2]) != 15)
								continue;
							for(array[2][0] = 1; array[2][0] < 10; array[2][0]++)
							{
								if(array[2][0] == array[0][0])
									continue;
								if(array[2][0] == array[0][1])
									continue;					
								if(array[2][0] == array[0][2])
									continue;
								if(array[2][0] == array[1][0])
									continue;
								if(array[2][0] == array[1][1])
									continue;
								if(array[2][0] == array[1][2])
									continue;
								if((array[0][0] + array[1][0] + array[2][0]) != 15)
									continue;
								for(array[2][1] = 1; array[2][1] < 10; array[2][1]++)
								{
									if(array[2][1] == array[0][0])
										continue;
									if(array[2][1] == array[0][1])
										continue;					
									if(array[2][1] == array[0][2])
										continue;
									if(array[2][1] == array[1][0])
										continue;
									if(array[2][1] == array[1][1])   
										continue;
									if(array[2][1] == array[1][2])
										continue;
									if(array[2][1] == array[2][0])
										continue;
									if((array[0][1] + array[1][1] + array[2][1]) != 15)
										continue;
									for(array[2][2] = 1; array[2][2] < 10; array[2][2]++)
									{
										if(array[2][2] == array[0][0])
											continue;
										if(array[2][2] == array[0][1])
											continue;					
										if(array[2][2] == array[0][2])
											continue;
										if(array[2][2] == array[1][0])
											continue;
										if(array[2][2] == array[1][1])
											continue;
										if(array[2][2] == array[1][2])
											continue;
										if(array[2][2] == array[2][0])
											continue;								
										if(array[2][2] == array[2][1])
											continue;	
										if((array[2][0] + array[2][1] + array[2][2]) != 15)
											continue;
										if((array[0][2] + array[1][2] + array[2][2]) != 15)
											continue;
										if((array[0][0] + array[1][1] + array[2][2]) != 15)
											continue;
										if((array[0][2] + array[1][1] + array[2][0]) != 15)
											continue;
										printf("%d %d %d\n", array[0][0], array[0][1], array[0][2]);
										printf("%d %d %d\n", array[1][0], array[1][1], array[1][2]);
										printf("%d %d %d\n", array[2][0], array[2][1], array[2][2]);
										printf("\n");

									}									

								}	

							}

						}					

					}	

				}			

			}

		}	

	}

	getchar();

    return 0;
}

