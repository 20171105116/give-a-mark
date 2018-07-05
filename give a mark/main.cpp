/*#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include<cstdlib>
#include "algorithm"*/

//int main(int argc, const char * argv[])
//{
    
        /*int a[5],i,sum=0;
        double pj;
        int max,min;
        for(i=0;i<5;i++)
        {
            printf("请%d号评委输入您所打的分数:\n",i+1);
            scanf("%d",&a[i]);
            sum += a[i];
            if (i == 0){
                //max = min = a[i];
            }
            else {
                if(a[i]>max)
                    max = a[i];
                if(a[i]<min)
                    min = a[i];
            }
        }
        printf("该选手的得分为:");
        for(i=0;i<5;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n该选手的最高分为%d\n",max);
        printf("该选手的最低分为%d\n",min);
        pj=(sum-max-min)/3.0;
        printf("去掉一个最高分:%d,一个最低分:%d,该选手的平均分为%f\n",max,min,pj);
        return 0 ;
    }*/
    /*FILE *a;
    FILE *b;
    //b=fopen("/Users/s20171105116/Desktop/编程/give a mark/give a mark/out put.csv","a");
    
    char s1[200];
    char s2[200];
    char s3[200];
    char s4[200];
    char s5[200];
    char s6[200];
    char s7[200];*/
    
    
    /*if ((a=fopen("/Users/s20171105116/Desktop/编程/give a mark/give a mark/form.csv","r"))==0)
      {
       printf("文件不存在\n");
      }
    
       else{
              for(int i=0;i<20;i++)
                 {
                   fscanf(a," %s, %s, %s, %s, %s, %s, %s ",s1,s2,s3,s4,s5,s6,s7);
                   printf(" %s %s %s %s %s %s %s",s1,s2,s3,s4,s5,s6,s7);
                 }
            fprintf(b,"%s ,%s ,%s ,%s ,%s ",s1,s2,s3,s4,s5);
           }
    if(i==1||i==2)
    {
       fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d \n",s1,s2,s3,s4,s5,s6,s12[1],s12[2],s12[3],s12[4],s12[5]);
    
    }
    else{
       }
  
    
    return 0;
}*/

#include<stdio.h>
int main()
{
    FILE *fp;
    char str[80];
    fp=fopen("/Users/s20171105116/Desktop/编程/give a mark/give a mark/form.csv","r");
    if(fp==NULL)
    {
        printf("打开文件有误");
    }

else
{
    while(fgets(str,20,fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);

return 0;
}






}
