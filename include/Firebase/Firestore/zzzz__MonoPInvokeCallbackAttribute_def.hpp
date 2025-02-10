#pragma once
// IWYU pragma private; include "Firebase/Firestore/MonoPInvokeCallbackAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MonoPInvokeCallbackAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore {
class MonoPInvokeCallbackAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::MonoPInvokeCallbackAttribute);
// Dependencies System.Attribute
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.MonoPInvokeCallbackAttribute
class CORDL_TYPE MonoPInvokeCallbackAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Firebase::Firestore::MonoPInvokeCallbackAttribute* New_ctor(::System::Type*  t) ;

/// @brief Method .ctor, addr 0x190ef74, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoPInvokeCallbackAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::MonoPInvokeCallbackAttribute, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::MonoPInvokeCallbackAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::MonoPInvokeCallbackAttribute*, "Firebase.Firestore", "MonoPInvokeCallbackAttribute");
