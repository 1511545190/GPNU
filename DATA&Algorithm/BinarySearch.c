{
	
#define N 5
	//二分查找

	int number[N];
	for(int i=0;i<N;i++)
	{
		number[i]=i+1;
	}

	int aim = 2;
	int left = 0, right = N-1;
	int mid = left+ (right - left)/2;
	int i;							

									//for循环中控制语句mid:(left+right)/2可能等于left，但不可能等于right
									//所以为左闭右开， 为了防止mid一直等于left，要对left = mid +1
									//情形二 left <=right mid 可能等于right和left，要对二者都操作
	for(mid=right - (right - left)/2;left<right&&number[mid]!=aim;)//防止死循环加上了！=aim
	{
		mid = right -(right - left)/2;
		if(aim>number[mid]){left = mid+1;continue;}
		else if(aim<number[mid]){right = mid;continue;}
		else{/*等于的情况 */ printf("Found it at %d\n",mid);}
	}
	//第二区间实现
	aim = 3;
	left = 0;
	right = N-1;
	while(left<=right&&number[mid]!=aim)
	{
		mid = left + (right - left)/2;
		if(aim>number[mid]){mid = left +1;continue;}
		else if(aim<number[mid]){mid = right -1;continue;}
		else{ printf("Found it at %d\n",mid);}  //防止死循环用break
	}







	return 0;
}
