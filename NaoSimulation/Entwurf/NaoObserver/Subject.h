#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOOBSERVER_SUBJECT_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOOBSERVER_SUBJECT_H

#include "NaoSimulation/Entwurf/NaoObserver/Observer.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoObserver {

template <typename T>
class Subject {
private:
    // Zeiger auf Observer, der benachrichtigt wird ...
    Observer<T>* observer;
public:
    Subject(Observer<T>* observer) : observer(observer) {}
    
    // Versenden der entsprechenden Nachricht an alle Observer ... (hier nur einer)
    virtual void notify(T* entity) {
        if(observer != nullptr) {
            observer->onNotify(entity);
        }
    }
};

}}}

#endif
