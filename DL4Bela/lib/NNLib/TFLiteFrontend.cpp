#include "PytorchFrontend.h"

#include "Log.h"

PytorchFrontend::PytorchFrontend()
{
}

PytorchFrontend::~PytorchFrontend()
{
}

void PytorchFrontend::printDebug()
{

}

bool PytorchFrontend::load(const std::string &filename)
{

    try
    {
        // Deserialize the ScriptModule from a file using torch::jit::load().
        module = torch::jit::load(filename);
    }
    catch (const c10::Error &e)
    {
        std::cerr << "error loading the model\n";
        return -1;
    }

    // debug
    printDebug();

    return true;
}
