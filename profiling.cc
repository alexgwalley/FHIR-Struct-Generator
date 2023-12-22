#include <windows.h>

class Profiler {

	LARGE_INTEGER start_time;
	LARGE_INTEGER end_time;

	Profiler() {
		QueryPerformanceCounter(&start_time);
	}

	~Profiler() {
		QueryPerformanceCounter(&end_time);
	}
}