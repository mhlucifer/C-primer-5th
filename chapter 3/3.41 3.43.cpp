//C���ַ���������ʹ�ã����ԾͲ�����
# include<iostream>
# include<vector>
using namespace std;
int main() {
    int arr[10] = { 0 };
    std::vector<int> arr1(begin(arr), end(arr));

    int* arr2 = new int[arr1.size()];

    for (size_t i = 0; i < arr1.size(); ++i) {
        arr2[i] = arr1[i];
    }

    for (size_t i = 0; i < arr1.size(); ++i) {
        std::cout << arr2[i] << " ";
    }

    delete[] arr2; // �ǵ��ͷŶ�̬������ڴ�

    return 0;
}