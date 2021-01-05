
#include <iostream>
#include <spdlog/sinks/rotating_file_sink.h>

int main()
{
    auto max_size = 1048576 * 5;
    auto max_files = 3; 
    auto logger = spdlog::rotating_logger_mt("some_logger_name", "logs/rotating.txt", max_size, max_files);
    logger->info("Nhieu khi muon noi voi em cu e ngai");
    return 0;
}
