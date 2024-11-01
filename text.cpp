#include <iostream>
using namespace std;

void func(int a, int b)
{
	int i = max(a,b);
	while (true)
	{
		i++;
		if (i % a == 0 && i % == 0)
		{
			cout << "a和b的最小公倍数是： " << i << endl;
			break；
		}
		
	}
	
	

}
int main()
{

	cout << "请输入两个数字：" << endl;
	int a, b;
	cin >> a >> b;
	func(a, b);

}