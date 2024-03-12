#include <stdio.h>
#include <stdlib.h>
//创建链表
typedef struct asd_1{
    int i;
    struct asd_1 *next;
}lb,*ctm;
//链表的输出
void Prentf_1(ctm L)

{

    L = L->next;

    while (L != NULL)

    {

        printf("%3d", L->i);//打印当前结点数据

        L = L->next;//指向下一个结点

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
//输出第2个位置的元素
void chazhao(ctm &l,int a){
    ctm e,k=l,t=l;
    for(int i=1;i<a;i++){
        k=k->next;
    }
    printf("%d\n",k->next->i);
    e=(ctm)malloc(sizeof(lb));
    e->i=99;
    e->next=k->next;
    k->next=e;
    Prentf_1(l);
    for(int i=1;i<4;i++){
        t=t->next;
    }
    t->next=t->next->next;
}
int main() {
    ctm L=NULL;
    lianbiaoweicha(L);//链表的尾插法
    chazhao(L,2);//查找第2个位置的数据并输出，在2个位置插入99,删除第4个位置的值
    Prentf_1(L);
    return 0;
}

