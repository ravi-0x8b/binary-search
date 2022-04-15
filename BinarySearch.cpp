#include <iostream>
#include <vector>

int BinarySearch(std::vector<int> arr, int target);

int main(int argc, char argv[])
{
	std::vector<int> data{ 4, 8, -7, 2, 0, -22, 1 };
	int target = -22;

	std::cout << "Index of " << target << ": " << BinarySearch(data, target) << '\n';
	return 0;
}

int BinarySearch(std::vector<int> arr, int target)
{
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right)
	{
		int index = (left + right) / 2;
		if (arr[index] == target)
			return index;

		if (arr[index] > target)
			left = index + 1;

		else
			right = index - 1;
	}
	return -1;
}
