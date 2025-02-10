#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JPropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JPropertyDescriptor)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JPropertyDescriptor);
// Dependencies System.ComponentModel.PropertyDescriptor
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JPropertyDescriptor
class CORDL_TYPE JPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
// Declarations
 __declspec(property(get=get_ComponentType)) ::System::Type*  ComponentType;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_NameHashCode)) int32_t  NameHashCode;

 __declspec(property(get=get_PropertyType)) ::System::Type*  PropertyType;

/// @brief Method CanResetValue, addr 0x2827f04, size 0x8, virtual true, abstract: false, final false
inline bool CanResetValue(::System::Object*  component) ;

/// @brief Method GetValue, addr 0x2827f0c, size 0x9c, virtual true, abstract: false, final false
inline ::System::Object* GetValue(::System::Object*  component) ;

static inline ::Newtonsoft::Json::Linq::JPropertyDescriptor* New_ctor(::StringW  name) ;

/// @brief Method ResetValue, addr 0x2827fa8, size 0x4, virtual true, abstract: false, final false
inline void ResetValue(::System::Object*  component) ;

/// @brief Method SetValue, addr 0x2827fac, size 0x13c, virtual true, abstract: false, final false
inline void SetValue(::System::Object*  component, ::System::Object*  value) ;

/// @brief Method ShouldSerializeValue, addr 0x28280e8, size 0x8, virtual true, abstract: false, final false
inline bool ShouldSerializeValue(::System::Object*  component) ;

/// @brief Method .ctor, addr 0x2826ab4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_ComponentType, addr 0x28280f0, size 0x6c, virtual true, abstract: false, final false
inline ::System::Type* get_ComponentType() ;

/// @brief Method get_IsReadOnly, addr 0x282815c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_NameHashCode, addr 0x28281d0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_NameHashCode() ;

/// @brief Method get_PropertyType, addr 0x2828164, size 0x6c, virtual true, abstract: false, final false
inline ::System::Type* get_PropertyType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JPropertyDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JPropertyDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JPropertyDescriptor(JPropertyDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JPropertyDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JPropertyDescriptor(JPropertyDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9872};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JPropertyDescriptor, 0x88>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JPropertyDescriptor*, "Newtonsoft.Json.Linq", "JPropertyDescriptor");
