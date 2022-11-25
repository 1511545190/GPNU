char *str = "abcdedf.";
	char *p = strchr(str,'c');  //strchr 返回值是指针，按字符查找
	printf("%s\n",p);
	char block[4];              //查找完成后可以原地用数组表示，以查找单词
	printf("%s",strncat(block,p,4));
