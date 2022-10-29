int c_sum(double number)
{  
  int cnn=0;
  double sum=0;
  while(scanf("%d",&number)==1){
    sum+=number;
    cnn++;
  }
  return sum/cnn;
}
