#ifndef IP_IS_RIGHT_C_INCLUDED
#define IP_IS_RIGHT_C_INCLUDED
#include<stdio.h>
#include<stdlib.h>


int IPir(char*ch,int len,int left,int right){// �ж�1��ipv4��ַ�Ƿ���ȷ��
    int t,y,i,j=0,la=0,count=0;//label=0��ʾip��ַ��ȷ,=1��ʾip��ַ����,��ʱֻ����2�����****=2˵��ip��ַ�����ʽ����**8��
    char c[3];//��������ַ����顣
    for(i=0;i<len;i++){
         if(ch[i]!='.'){//���ɨ����ַ��������ַ���
             y = atoi(ch+i); //*****atoi(char*c)�������β�c��char*
            if(count==3){//�����˿��ַ���˵���ַ������������ַ��Ѿ�ɨ������ˡ� ***��Ȼ����Ҳ��1�ֿ��ܣ�ip��ַ�������
                t = atoi(c);//�������ַ���ת��Ϊ��Ӧ��int�����֡�
               if(t<left||t>right){//ip��ַ������Ӧ��������0~255֮�䡣
                             //printf("IP error!\n");
                   la=1; //˵��ip��ַ�����ˡ�
                   break;
               }
            }
            c[j] = ch[i];//���ַ�������'.'�ָ��1����һ�Ρ�
            j++;//Ϊ֮����ַ���ֵ��׼����
         }
         else{//ɨ����ַ���"."�ַ���  ��ô��Ҫ����.��֮ǰ��һ�������ַ�����
            t = atoi(c);//�������ַ���ת��Ϊ��Ӧ��int�����֡�
            if(t<left||t>right){//ip��ַ������Ӧ��������0~255֮�䡣
                //printf("IP error!\n");
                la=1;
                break;
            }
            j=0;//��ǰip��ַ������������������ôҪ�жϽ������������ַ���
            count++;//ͳ���ַ�'.'�ĸ�����
      }
    }

return la;//ͨ��la��ֵ�жϸ�����ip��ַ�Ƿ����
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
        printf("������־ֵ�����˴���\n");

return 0;
}


#endif // IP_IS_RIGHT_C_INCLUDED
