#include <stdio.h>
#include <stdlib.h>
//创建链表
typedef struct asd_1{
    int i;
    struct asd_1 *next;
}lb,*ctm;
//链表头插法输入
ctm lianbiaotouchacharu(ctm &l ){
    ctm s;
    int c;
    l=(ctm)malloc(sizeof(lb));
    l->next=NULL;
    scanf("%d",&c);
    while(c!=9999){
        s=(ctm)malloc(sizeof(lb));
        s->i=c;
        s->next=l->next;
        l->next=s;
        scanf("%d",&c);
    }
    return l;
}
//链表的输出
void Prentf_1(ctm l)

{
    l=l->next;
    while(l != NULL)
    {
        printf("%d", l->i);//打印当前结点数据
        l=l->next;//指向下一个结点
        if(l != NULL)
        {
            printf(" ");
        }
    }
    printf("\n");
}
//链表的尾插法
ctm lianbiaoweicha(ctm &L){
    L=(ctm)malloc(sizeof(lb));
    ctm a,c=L;
    int b;
    scanf("%d",&b);
    while(b!=9999)
    {
        a=(ctm)malloc(sizeof(lb));
        a->i=b;
        c->next=a;
        c=a;
        scanf("%d",&b);
    }
    c->next=NULL;
    return L;
}

int main() {
    ctm l=NULL;
    ctm lianjie;
    lianbiaotouchacharu(l);//链表插入
    Prentf_1(l);
    ctm L=NULL;
    lianbiaoweicha(L);//链表的尾插法
    Prentf_1(L);
    return 0;
}

