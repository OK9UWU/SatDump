#pragma once

#include "module.h"

namespace fengyun
{
    namespace virr
    {
        class FengyunVIRRDecoderModule : public ProcessingModule
        {
        protected:
        
        public:
            FengyunVIRRDecoderModule(std::string input_file, std::string output_file_hint, std::map<std::string, std::string> parameters);
            void process();

        public:
            static std::string getID();
            static std::vector<std::string> getParameters();
            static std::shared_ptr<ProcessingModule> getInstance(std::string input_file, std::string output_file_hint, std::map<std::string, std::string> parameters);
        };
    } // namespace virr
} // namespace fengyun