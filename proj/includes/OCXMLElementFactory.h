
#ifndef OCXMLElementFactory_h
#define OCXMLElementFactory_h

#include "OCXMLElementTree.h"

namespace OCXML{
namespace ElementTree {
namespace ElementFactory {
        
    Element* createObjCInterfaceElement(const char* name);
    
    Element* createImplementsProtocolElement(const char* name);
    
    Element* createObjCProtocolElement(const char* name);
    
    Element* createObjCMethodElement(const char* selector);
    
    Element* createParameterElement(const char* name);
    
    Element* createReturnValueElement();
    
    Element* createEnumElement(const char* name);
    
    Element* createEnumConstantElement(const char* name);
}
}
}

#endif