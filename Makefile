all: main.cpp list.cpp list.h memo_batch_tester.cpp memo_batch_tester.h cache.cpp cache.h
	g++ -o operation100 main.cpp list.cpp memo_batch_tester.cpp cache.cpp
