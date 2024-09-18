#include "core/plugin.h"
#include "logger.h"
#include "core/module.h"

#include "xmm_newton/module_xmmnewton_instruments.h"

class XMMNewtonSupport : public satdump::Plugin
{
public:
    std::string getID()
    {
        return "xmm_newton_support";
    }

    void init()
    {
        satdump::eventBus->register_handler<RegisterModulesEvent>(registerPluginsHandler);
    }
    static void registerPluginsHandler(const RegisterModulesEvent &evt)
    {
        REGISTER_MODULE_EXTERNAL(evt.modules_registry, xmm_newton::instruments::xmm_newtonInstrumentsDecoderModule);
    }
};

PLUGIN_LOADER(XMMNewtonSupport)