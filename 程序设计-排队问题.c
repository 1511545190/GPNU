#include <iostream>
using namespace std;
int main()
{
	//排队问题
	int n, cnn = 3, count = 1;
	cin >> n;//人数
	while (cnn <= n) {  //必须返回人数大于block的count，因为后面要-1
		cnn += 3;
		count++;
	}
	int result = (count-1)*3;//序号
	cout << result;
	
	
	return 0;
}


