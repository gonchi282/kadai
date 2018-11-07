#include <stdio.h> 
#include "kadai.h"

typedef struct tagOneWayListNode
{
    struct  tagOneWayListNode * NextNodePtr;
    void *                      ObjNodePtr;
}OneWayListNode; 

typedef struct tagOneWayList
{
    OneWayListNode * FirstNodePtr;
    OneWayListNode * CurrentNodePtr;
    OneWayListNode * LastNodePtr;
}OneWayList;

// OneWayListの初期化
BOOL OWInitList(OneWayList * list)
{
    // listがNULLの場合
    if(list == NULL)
    {
        return FALSE;   // 異常終了
    }
    
    list->FirstNodePtr = NULL;
    list->CurrentNodePtr = NULL;
    list->LastNodePtr = NULL;
}

// データをリストの先頭に挿入
BOOL OWInsetrObjToFirst(OneWayList * list, void * obj)
{
    // list, objがNULLの場合
    if((list == NULL) || (obj == NULL))
    {
        return FALSE;   // 異常終了
    }

    
