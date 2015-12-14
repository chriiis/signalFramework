#ifndef _TEST_STRING_H
#define _TEST_STRING_H

#include<iostream>
#include"sigslot.h"
using namespace std;
#define _SIGSLOT_HAS_POSIX_THREADS
class TestEvent
{
public:
	TestEvent(){}

public:
	sigslot::signal0<> signal;
};

class Test_Slot :public sigslot::has_slots<>
{
public:
	Test_Slot();
    void emit()
	{
		mEvent.signal.emit();
	}
	void OnSignalEmit();

public:
	TestEvent mEvent;
};

#endif



