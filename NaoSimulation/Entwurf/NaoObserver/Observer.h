#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOOBSERVER_OBSERVER_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOOBSERVER_OBSERVER_H

namespace NaoSimulation {
namespace Entwurf {
namespace NaoObserver {

template <typename T>
class Observer {
public:
    virtual void onNotify(T* entity) = 0;
};

}}}

#endif
