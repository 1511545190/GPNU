#include <stdio.h>
#include <stdlib.h>
//打开文件
int main()
{
	system("mkdir ./file");
	FILE* fp = fopen("./file/file_.txt","w+");
	if(!fp){
	printf("Fail to open\n");
	exit(0);};
	
	fprintf(fp,"%d""%s",'A',"A");

	fseek(fp,0L,SEEK_SET);//将文件指针恢复到头
	//扫描文件,格式化扫描
	char c = 'C';
	if(fscanf(fp,"%hhd",&c)){
		printf("Can't read\n");	
		
	}
	fprintf(stdout,"%c\n",c);

	//fputc(ch,fp);
	//fgetc(fp);
	//fgets(str,strlen(str)+1,fp);
	//fwrite((*),size,how many, fp); // 返回成功的个数
	//fread((*bufer),size,how many, fp);
	// ftell(fp) 返回当前指针的位置（long)
	
	char buffer[100];


	
	
	
	fclose(fp);
	return 0;

}
