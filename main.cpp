#include"SeqList.h"

int main() {
SeqList L;
InitList(L);
// 插入元素
insertSeqList(L, 'A', 0);
insertSeqList(L, 'B', 1);
insertSeqList(L, 'C', 2);
insertSeqList(L, 'D', 3);
print(L);

// 查找元素
int idx = Find(L, 'C');
printf("查找'C'的位置: %d\n", idx);

// 删除元素
ElemType deletedElem;
if (Delete(L, 1, deletedElem))
printf("删除位置1的元素: %c\n", deletedElem);
else
printf("删除失败\n");
print(L);

// 翻转顺序表
reverse(L);
printf("翻转后：\n");
print(L);

return 0;


}