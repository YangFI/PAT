#include<cstdio>
#include<string.h>
int main()
{
    int sum=0;
    int count=0;
    int count2=0;

    char num,*s[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    while((num=getchar())!='\n')
    sum+=num-'0';
        printf("¸ÃÊýÎª%d\n",sum);
    int sumy=sum;
    while(sumy>0)
{
    sumy/=10;
    count++;
}
printf("count==%d\n",count); 
for(int i=count;i>=1;i--)
{
	int chushu=1; 
    count2=i;
    while(count2>1){
chushu*=10;
count2--;
    }
    if(i==1)
    printf("%s",s[sum%10]);
else
    printf("%s ",s[(sum/chushu)%10]);

}
}
