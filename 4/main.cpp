#include <stdio.h>
#define Maxsize 100
typedef int ElemType;
typedef struct cnm{
    int i[Maxsize];
    int len;
}jgt_1;
//在第2个位置输入元素
bool ListInsert(jgt_1 &l, ElemType c, ElemType e){
    if(c<1||c>l.len||l.len>Maxsize){
        return false;
    }
    for(int n=l.len;n>=c;n--){
        l.i[n]=l.i[n-1];
    }
    l.i[c-1]=e;
    l.len++;
    return true;
}
//输出元素
void printf_1(jgt_1 &l){
    for(int k=0;k<l.len;k++){
        printf("%-3d",l.i[k]);
    }
    printf("\n------------------\n");
}
//判断插入位置是否合法
void yz(bool yz, jgt_1 &l){
    if(yz){
        printf_1(l);
    }else{
        printf("false\n");
    }
}
//删除选定位置的元素
bool sc_2(jgt_1 &l, int i, int &a){
    if(i<1||i>l.len||l.len>Maxsize){
        return false;
    }
    a=l.i[i];
    for(int n=i;n<l.len;n++){
        l.i[n-1]=l.i[n];
    }
    l.len--;
    return true;
}
int main() {
    jgt_1 l;
    bool yz_1,yz_2;
    ElemType de,add_p,del_p;
    scanf("%d",&add_p);
    l.i[0]=1;
    l.i[1]=2;
    l.i[2]=3;
    l.len=3;;
    yz_1=ListInsert(l,2,add_p);
    yz(yz_1,l);
    int m,a=0;
    scanf ("%d",&m);
    yz_2= sc_2(l, m, a);
    if(yz_2){
        printf_1(l);
    }else{
        printf("false\n");
    }
    return 0;
}
