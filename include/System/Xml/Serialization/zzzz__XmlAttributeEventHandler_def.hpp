#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlAttributeEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(XmlAttributeEventHandler)
namespace System::Xml::Serialization {
class XmlAttributeEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAttributeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAttributeEventHandler);
// Dependencies System.MulticastDelegate
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlAttributeEventHandler
class CORDL_TYPE XmlAttributeEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x2c59d50, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::Xml::Serialization::XmlAttributeEventArgs*  e) ;

static inline ::System::Xml::Serialization::XmlAttributeEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x2c59c4c, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlAttributeEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlAttributeEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlAttributeEventHandler(XmlAttributeEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttributeEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlAttributeEventHandler(XmlAttributeEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5585};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAttributeEventHandler, 0x80>, "Size mismatch!");

} // namespace end def System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAttributeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAttributeEventHandler*, "System.Xml.Serialization", "XmlAttributeEventHandler");
