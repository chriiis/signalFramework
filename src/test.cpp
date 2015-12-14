/*************************************************************************
	> File Name: string.cpp
	> Author: chris
	> Mail:  cherish037_koer@163.com 
	> Created Time: Tue 30 Jun 2015 11:37:11 PM PDT
 ************************************************************************/
#include"test.h"
#include<string>
#include<string.h>
#include<sys/types.h>

Test_Slot::Test_Slot(){
	mEvent.signal.connect(static_cast<Test_Slot*>(this), &Test_Slot::OnSignalEmit);
	cout << "Test Create!" << endl;
}

void Test_Slot::OnSignalEmit(){
	cout << "the slot is ok!" << endl;
}

int main()
{
	Test_Slot s;
	s.emit();
	return 0;
}

