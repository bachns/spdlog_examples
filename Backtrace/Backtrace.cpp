
#include <iostream>
#include <spdlog/spdlog.h>

int main()
{
	//Nhớ 32 message gần nhất trong bộ đệm, gồm các message debug và trace
	spdlog::enable_backtrace(32);

	//Thử tạo 100 message loại debug
	for (int i = 0; i < 100; i++)
	{
		spdlog::debug("Message {}", i);
	}


	//Khi có lỗi xảy ra, 
	//Ta muốn xem lại 32 message gần nhất
	spdlog::dump_backtrace();

	return 0;
}
