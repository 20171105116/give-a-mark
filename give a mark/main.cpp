#include<stdio.h>
#include<stdlib.h>
struct PF
{
    char numbers[20];
    char name[50];
    char sex[10];
    char dateofbirth[20];
    char cla[30];
    char phoneNO[20];
    char num[100][10];
    double average;
};
int main()
{
    FILE *fp;
    char ch;
    struct PF s[100];
    int i=0,l=0,m=0,n;//I行，l逗号数，m下标
    int max=0,min=101;
    fp=fopen("/Users/s20171105116/Desktop/studentdata.csv","r");
    if(fp==NULL)
    {
        printf("THIS FILE DOES NOT EXIST");
    }
    else
    {
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            if(i==0){
                if(ch=='\n')
                    ++i;
            }
            else{
                if(l==0){
                    if(ch==',')
                    {
                        l++;
                        m=0;
                        ch=fgetc(fp);
                        continue;
                    }
                    s[i-1].numbers[m]=ch;
                    m++;
                }
                else if(l==1)
                {
                    if(ch==',')
                    {
                        l++;
                        m=0;
                        ch=fgetc(fp);
                        continue;
                    }
                    s[i-1].name[m]=ch;
                    m++;
                }
                else if(l==2)
                {
                    if(ch==',')
                    {
                        l++;
                        m=0;
                        ch=fgetc(fp);
                        continue;
                    }
                    s[i-1].sex[m]=ch;
                    m++;
                }
                else if(l==3)
                {
                    if(ch==',')
                    {
                        l++;
                        m=0;
                        ch=fgetc(fp);
                        continue;
                    }
                    s[i-1].dateofbirth[m]=ch;
                    m++;
                }
                else if(l==4)
                {
                    if(ch==',')
                    {
                        l++;
                        m=0;
                        ch=fgetc(fp);
                        continue;
                    }
                    s[i-1].cla[m]=ch;
                    m++;
                }
                else if(l==5)
                {
                    if(ch==',')
                    {
                        l++;
                        m=0;
                        ch=fgetc(fp);
                        continue;
                    }
                    s[i-1].phoneNO[m]=ch;
                    m++;
                }
                else{
                    if(ch==',')
                    {
                        //只有将num定义为三维数组才可以将每个数据单个存入
                        s[i-1].average+=atof(s[i-1].num[l-6]);//字符转浮点数
                        if(max<atoi(s[i-1].num[l-6]))
                            max=atoi(s[i-1].num[l-6]);
                        if(min>atoi(s[i-1].num[l-6]))
                            min=atoi(s[i-1].num[l-6]);
                        l++;
                        m=0;
                        ch=fgetc(fp);
                        continue;
                    }
                    s[i-1].num[l-6][m]=ch;
                    m++;
                    if(ch=='\n')
                    {
                        s[i-1].average+=atof(s[i-1].num[l-6]);
                        if(max<atoi(s[i-1].num[l-6]))
                            max=atoi(s[i-1].num[l-6]);
                        if(min>atoi(s[i-1].num[l-6]))
                            min=atoi(s[i-1].num[l-6]);
                        s[i-1].average=(s[i-1].average-max-min)/(l-7);//l-7是因为去掉最大值和最小值所以以逗号的个数来控制
                        max=0;min=101;
                        i++;l=0;m=0;
                    }
                }
            }
            ch=fgetc(fp);
        }
        s[i-1].average+=atof(s[i-1].num[l-6]);
        if(max<atoi(s[i-1].num[l-6]))
            max=atoi(s[i-1].num[l-6]);
        if(min>atoi(s[i-1].num[l-6]))
            min=atoi(s[i-1].num[l-6]);
        s[i-1].average=(s[i-1].average-max-min)/(l-7);
        fclose(fp);
        for(n=0;n<i;n++)
            printf("%s,%s,%s,%s,%s,%s,%.2lf\n",s[n].numbers,s[n].name,s[n].sex,s[n].dateofbirth,s[n].cla,s[n].phoneNO,s[n].average);
        fp=fopen("student.csv","w+");
        fprintf(fp,"numbers,name,sex,dateofbirth,class,phoneNo,average\n");
        for(n=0;n<i;n++)
            fprintf(fp,"%s,%s,%s,%s,%s,%s,%.2lf\n",s[n].numbers,s[n].name,s[n].sex,s[n].dateofbirth,s[n].cla,s[n].phoneNO,s[n].average);
        fclose(fp);
    }
    return 0;
}
