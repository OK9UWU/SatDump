#pragma once

#include "module.h"
#include <complex>
#include <fstream>
#include <dsp/random.h>

namespace goes_gvar
{
    class GVARDecoderModule : public ProcessingModule
    {
    protected:
        // Read buffer
        int8_t *buffer;

        std::ifstream data_in;
        std::ofstream data_out;
        std::atomic<size_t> filesize;
        std::atomic<size_t> progress;

        // UI Stuff
        libdsp::Random rng;

    public:
        GVARDecoderModule(std::string input_file, std::string output_file_hint, std::map<std::string, std::string> parameters);
        ~GVARDecoderModule();
        void process();
        void drawUI(bool window);
        std::vector<ModuleDataType> getInputTypes();
        std::vector<ModuleDataType> getOutputTypes();

    public:
        static std::string getID();
        static std::vector<std::string> getParameters();
        static std::shared_ptr<ProcessingModule> getInstance(std::string input_file, std::string output_file_hint, std::map<std::string, std::string> parameters);
    };
} // namespace elektro_arktika