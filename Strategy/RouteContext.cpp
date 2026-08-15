#include "RouteContext.h"

RouteContext::RouteContext(RouteStrategy* s){
    this->strategy = s;
}
    
void RouteContext::setStrategy(RouteStrategy* s){
    delete this->strategy;
    this->strategy = s;
}
    
void RouteContext::execute(){
    this->strategy->routing();
}

    
RouteContext::~RouteContext(){
    delete this->strategy;
    this->strategy = nullptr;
}