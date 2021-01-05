
#include <iostream>
#include <spdlog/spdlog.h>
#include <spdlog/stopwatch.h>

int main()
{
	//Đồng hồ bấm giờ
	spdlog::stopwatch sw;
	spdlog::info("Elapsed {}", sw);
	spdlog::info("Elapsed {:.3}", sw);

	return 0;
}
