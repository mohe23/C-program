#ifndef IP_IS_RIGHT_C_INCLUDED
#define IP_IS_RIGHT_C_INCLUDED
#include<stdio.h>
#include<stdlib.h>


int IPir(char*ch,int len,int left,int right){// 判断1串ipv4地址是否正确。
    int t,y,i,j=0,la=0,count=0;//label=0表示ip地址正确,=1表示ip地址错误,暂时只考虑2种情况****=2说明ip地址输入格式错误**8。
    char c[3];//存放数字字符数组。
    for(i=0;i<len;i++){
         if(ch[i]!='.'){//如果扫描的字符是数字字符。
             y = atoi(ch+i); //*****atoi(char*c)函数的形参c是char*
            if(count==3){//遇到了空字符，说明字符数组中所有字符已经扫描完毕了。 ***当然可能也由1种可能，ip地址输入错误。
                t = atoi(c);//将数字字符串转换为对应的int型数字。
               if(t<left||t>right){//ip地址中数字应该满足在0~255之间。
                             //printf("IP error!\n");
                   la=1; //说明ip地址出错了。
                   break;
               }
            }
            c[j] = ch[i];//将字符串按照'.'分割成1段又一段。
            j++;//为之后的字符赋值做准备。
         }
         else{//扫描的字符是"."字符。  那么就要处理“.”之前的一串数字字符串。
            t = atoi(c);//将数字字符串转换为对应的int型数字。
            if(t<left||t>right){//ip地址中数字应该满足在0~255之间。
                //printf("IP error!\n");
                la=1;
                break;
            }
            j=0;//当前ip地址的数字满足条件，那么要判断接下来的数字字符。
            count++;//统计字符'.'的个数。
      }
    }

return la;//通过la的值判断给定的ip地址是否错误。
}


int main(){

    int w,le;
    //char ch[15]={'1','2','3','.','1','6','7','.','1','5','3','.','3','1','3'};
    char ch[15]={'1','.','7','.','3','.','3'};
    /*char w;
    w = 'a';
    printf("%d\n\n",w);

    int i,j=0,h;
    for(i=0;i<10;i++){
       if(ch[i]==NULL){
            j++;
           printf("c  j: %d\n",j);

           //printf("j: %d\n", j);
       }

       else
          printf("%c--%d  ",ch[i],ch[i]);
    }
   printf("hello!\n");
    h = atoi(ch);
    printf("h: %d\n",h);*/
    for(w=0;w<15;w++)
        printf("%c",ch[w]);
    printf("\n\n");

    le = IPir(ch,15,0,255);
    printf("le:  %d\n",le);
    if(le==0)
        printf("ip right!\n");
    else if(le==1)
        printf("ip error!\n");
    else
        printf("出错，标志值出现了错误。\n");

return 0;
}


#endif // IP_IS_RIGHT_C_INCLUDED
