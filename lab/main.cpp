#include <iostream>

int main() {
	int temp = 1;
	double arr[5][5]={{1,9,2,3,4},{3,2,5,9,7},{5,9,2,4,8},{5,3,9,4,7},{3,7,9,2,1}};
	for(int i = 0;i < 5;++i)
	{
		double min = arr[0][i];
		for(int j = 0; j < 5; ++j)
		{
			if(arr[j][i] < min)
			{
				min = arr[j][i];
			}
		}
		temp*= min;
	}
	std::cout << temp << std::endl;
	return 0;
}
