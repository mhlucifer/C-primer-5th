# include<iostream>
# include<vector>
using namespace std;
int main()
{
	int arr[10] = {1,3,5,7,9};
	int arr1[10] = {1,3,5,7,9};
	auto size = end(arr) - begin(arr);
	auto size1 = end(arr1) - begin(arr1);
	if (size != size1)
	{
		cout << "not equal" << endl;
	}
	else
    {
        bool equal = true;
        for (int i = 0; i < size1; ++i) {
            if (arr[i] != arr1[i]) {
                equal = false;
                break;
            }
        }
        if (equal)
            std::cout << "Arrays are equal!\n";
        else
            std::cout << "Arrays are not equal!\n";
    }
}

////±È½ÏvectorÒ»ÖÂ
//#include <iostream>
//#include <vector>
//
//int main() {
//    std::vector<int> vec1 = { 1, 2, 3, 4, 5 };
//    std::vector<int> vec2 = { 1, 2, 3, 4, 5 };
//
//    if (vec1 == vec2)
//        std::cout << "Vectors are equal!\n";
//    else
//        std::cout << "Vectors are not equal!\n";
//
//    return 0;
//}
