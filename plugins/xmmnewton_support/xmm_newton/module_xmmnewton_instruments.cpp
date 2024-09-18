#include "module_xmmnewton_instruments.h"
#include <fstream>
#include "common/ccsds/ccsds_tm/vcdu.h"
#include "logger.h"
#include <filesystem>
#include "imgui/imgui.h"
#include "common/utils.h"
#include "common/ccsds/ccsds_tm/demuxer.h"
#include "products/products.h"
#include "products/dataset.h"
#include "common/simple_deframer.h"
#include "core/config.h"


namespace xmm_newton
{
    namespace instruments
    {
        xmm_newtonInstrumentsDecoderModule::xmm_newtonInstrumentsDecoderModule(std::string input_file, std::string output_file_hint, nlohmann::json parameters)
            : ProcessingModule(input_file, output_file_hint, parameters)
        {
            //play_audio = satdump::config::main_cfg["user_interface"]["play_audio"]["value"].get<bool>();
        }

        void xmm_newtonInstrumentsDecoderModule::process()
        {
            
        }

        void xmm_newtonInstrumentsDecoderModule::drawUI(bool window)
        {
           
        }

        std::string xmm_newtonInstrumentsDecoderModule::getID()
        {
            return "xmm_newton_instruments";
        }

        std::vector<std::string> xmm_newtonInstrumentsDecoderModule::getParameters()
        {
            return {};
        }

        std::shared_ptr<ProcessingModule> xmm_newtonInstrumentsDecoderModule::getInstance(std::string input_file, std::string output_file_hint, nlohmann::json parameters)
        {
            return std::make_shared<xmm_newtonInstrumentsDecoderModule>(input_file, output_file_hint, parameters);
        }
    } // namespace amsu
} // namespace metop
