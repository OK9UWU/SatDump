#pragma once

#include <string>

namespace nc2pro
{
    void process_gk2a_ami(std::string nc_file, std::string pro_output_file, double *progress = nullptr);
}