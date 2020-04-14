// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
void input(int n,string name[],string num[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "input name and num of student" << endl;
		cin >> name[i] >> num[i];
	}	
}
void search(string find_name,string name[],string num[],int n)
{
	int index=0;
	for (int i = 0; i < n; i++)
	{
		if(name[i]==find_name)
		{
			cout << name[i] << "has been found , his number is" << num[i] << endl;
			index++;
			
		}
		
	}
	if (index==0)cout << "can't find this name";
	
}
int main()
{
	string FindName;
	int number_people = 0;
	string name[50], num[50];
	cout << "plase input number of this class" << endl;
	cin >> number_people;
	input(number_people,name,num);
	cout << "plase input name you want to find" << endl;
	cin >> FindName;
	search(FindName,name,num,number_people);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
