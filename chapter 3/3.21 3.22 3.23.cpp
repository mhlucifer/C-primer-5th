//��������Աend���ص���βԪ�غ�һ��
//ϰ��ʹ��!=ʽ��
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	/*vector<int> v1(10,0);
	for (vector<int>::iterator index = v1.begin(); index != v1.end(); index++)
	{
		cout << *index << endl;
	}*/
        vector<string> v1 = { "test", "diws" };
        for (auto index = v1.begin(); index != v1.end(); ++index) // ʹ�� auto ʹ��������
        {
            for (auto& ch : *index) // �����ַ����е�ÿ���ַ�
            {
                if (!isspace(ch)) // ����ַ����ǿո�
                {
                    ch = toupper(ch); // ���ַ�ת��Ϊ��д
                }
            }
            cout << *index << endl; // ���ת������ַ���
        }
        return 0;
    }

//3.23˼·һ���Ͳ�д��