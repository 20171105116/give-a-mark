#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include<cstdlib>
#include "algorithm"

int main(int argc, const char * argv[])
{
    FILE *a;
    FILE *b;
    b=fopen("/Users/s20171105116/Desktop/编程/give a mark/give a mark/out put.csv","a");
    
    char s1[200];
    char s2[200];
    char s3[200];
    char s4[200];
    char s5[200];
    if ((a=fopen("/Users/s20171105116/Desktop/编程/give a mark/give a mark/form.csv","r"))==0)
      {
        printf("文件不存在\n");
      }
    
       else{
              for(int i=0;i<3;i++)
                 {
                   fscanf(a,"%s ,%s ,%s ,%s ,%s",s1,s2,s3,s4,s5);
                   printf("%s %s %s %s %s\n",s1,s2,s3,s4,s5);
                 }
            fprintf(b,"%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5);
           }
    //if(i==1||i==2)
    //{
    //   fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d \n",s1,s2,s3,s4,s5,s6,s12[1],s12[2],s12[3],s12[4],s12[5]);
    
    //}
    //else{
       // }
    return 0;
}
