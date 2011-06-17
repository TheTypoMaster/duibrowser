/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"


#if ENABLE(VIDEO)

#include "JSHTMLSourceElement.h"

#include <wtf/GetPtr.h>

#include "HTMLSourceElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLSourceElementTableValues[5] =
{
    { "src", (intptr_t)JSHTMLSourceElement::SrcAttrNum, DontDelete, 0 },
    { "type", (intptr_t)JSHTMLSourceElement::TypeAttrNum, DontDelete, 0 },
    { "media", (intptr_t)JSHTMLSourceElement::MediaAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLSourceElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLSourceElementTable = { 15, JSHTMLSourceElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLSourceElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLSourceElementConstructorTable = { 0, JSHTMLSourceElementConstructorTableValues, 0 };

class JSHTMLSourceElementConstructor : public DOMObject {
public:
    JSHTMLSourceElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLSourceElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLSourceElementConstructor::s_info = { "HTMLSourceElementConstructor", 0, &JSHTMLSourceElementConstructorTable, 0 };

bool JSHTMLSourceElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLSourceElementConstructor, DOMObject>(exec, &JSHTMLSourceElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLSourceElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLSourceElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLSourceElementPrototypeTable = { 0, JSHTMLSourceElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLSourceElementPrototype::s_info = { "HTMLSourceElementPrototype", 0, &JSHTMLSourceElementPrototypeTable, 0 };

JSObject* JSHTMLSourceElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLSourceElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLSourceElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLSourceElement::s_info = { "HTMLSourceElement", &JSHTMLElement::s_info, &JSHTMLSourceElementTable , 0 };

JSHTMLSourceElement::JSHTMLSourceElement(JSObject* prototype, HTMLSourceElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLSourceElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLSourceElement, Base>(exec, &JSHTMLSourceElementTable, this, propertyName, slot);
}

JSValue* JSHTMLSourceElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case SrcAttrNum: {
        HTMLSourceElement* imp = static_cast<HTMLSourceElement*>(impl());
        return jsString(exec, imp->src());
    }
    case TypeAttrNum: {
        HTMLSourceElement* imp = static_cast<HTMLSourceElement*>(impl());
        return jsString(exec, imp->type());
    }
    case MediaAttrNum: {
        HTMLSourceElement* imp = static_cast<HTMLSourceElement*>(impl());
        return jsString(exec, imp->media());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLSourceElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLSourceElement, Base>(exec, propertyName, value, &JSHTMLSourceElementTable, this);
}

void JSHTMLSourceElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case SrcAttrNum: {
        HTMLSourceElement* imp = static_cast<HTMLSourceElement*>(impl());
        imp->setSrc(value->toString(exec));
        break;
    }
    case TypeAttrNum: {
        HTMLSourceElement* imp = static_cast<HTMLSourceElement*>(impl());
        imp->setType(value->toString(exec));
        break;
    }
    case MediaAttrNum: {
        HTMLSourceElement* imp = static_cast<HTMLSourceElement*>(impl());
        imp->setMedia(value->toString(exec));
        break;
    }
    }
}

JSValue* JSHTMLSourceElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLSourceElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLSourceElementConstructor>(exec, constructorIdentifier);
}


}

#endif // ENABLE(VIDEO)
