/*********************************************************************
|    內容 ：
|
|    學習所有程式語言的第一個練習題 
|    請寫一個程式，可以讀入指定的字串，並且輸出指定的字串。
|
|    輸入說明 ：
|
|    輸入指定的文字
|
|    輸出說明 ：
|
|    輸出指定的文字
|    範例輸入 ：
|
|    world
|    C++
|    mary
|
|    範例輸出:
|
|    hello, world
|    hello, C++
|    hello, mary
|
****************************************************************/

#include<string.h>
#include<iostream>
using namespace std;

int main()
{
     string s;
     while(cin>>s)
{
      cout<<"hello, "<<s<<endl;
}
return 0;
}
