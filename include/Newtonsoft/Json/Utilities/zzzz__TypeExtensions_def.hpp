#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/TypeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeExtensions)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class TypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::TypeExtensions);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.TypeExtensions
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Assembly, addr 0x27ef15c, size 0x20, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* Assembly(::System::Type*  type) ;

/// @brief Method AssignableToTypeName, addr 0x27f929c, size 0x20, virtual false, abstract: false, final false
static inline bool AssignableToTypeName(::System::Type*  type, ::StringW  fullTypeName, bool  searchInterfaces) ;

/// @brief Method AssignableToTypeName, addr 0x27f9124, size 0x178, virtual false, abstract: false, final false
static inline bool AssignableToTypeName(::System::Type*  type, ::StringW  fullTypeName, bool  searchInterfaces, ::ByRef<::System::Type*>  match) ;

/// @brief Method BaseType, addr 0x27f4f18, size 0x20, virtual false, abstract: false, final false
static inline ::System::Type* BaseType(::System::Type*  type) ;

/// @brief Method ContainsGenericParameters, addr 0x27f90dc, size 0x20, virtual false, abstract: false, final false
static inline bool ContainsGenericParameters(::System::Type*  type) ;

/// @brief Method ImplementInterface, addr 0x27f92bc, size 0x3ec, virtual false, abstract: false, final false
static inline bool ImplementInterface(::System::Type*  type, ::System::Type*  interfaceType) ;

/// @brief Method IsAbstract, addr 0x27e53a8, size 0x14, virtual false, abstract: false, final false
static inline bool IsAbstract(::System::Type*  type) ;

/// @brief Method IsClass, addr 0x27f4e00, size 0x14, virtual false, abstract: false, final false
static inline bool IsClass(::System::Type*  type) ;

/// @brief Method IsEnum, addr 0x27e336c, size 0x20, virtual false, abstract: false, final false
static inline bool IsEnum(::System::Type*  type) ;

/// @brief Method IsGenericType, addr 0x27ef134, size 0x20, virtual false, abstract: false, final false
static inline bool IsGenericType(::System::Type*  type) ;

/// @brief Method IsGenericTypeDefinition, addr 0x27e5388, size 0x20, virtual false, abstract: false, final false
static inline bool IsGenericTypeDefinition(::System::Type*  type) ;

/// @brief Method IsInterface, addr 0x27e5374, size 0x14, virtual false, abstract: false, final false
static inline bool IsInterface(::System::Type*  type) ;

/// @brief Method IsSealed, addr 0x27f90fc, size 0x14, virtual false, abstract: false, final false
static inline bool IsSealed(::System::Type*  type) ;

/// @brief Method IsValueType, addr 0x27f46cc, size 0x14, virtual false, abstract: false, final false
static inline bool IsValueType(::System::Type*  type) ;

/// @brief Method IsVisible, addr 0x27f9110, size 0x14, virtual false, abstract: false, final false
static inline bool IsVisible(::System::Type*  type) ;

/// @brief Method MemberType, addr 0x27f39d4, size 0x1c, virtual false, abstract: false, final false
static inline ::System::Reflection::MemberTypes MemberType(::System::Reflection::MemberInfo*  memberInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeExtensions(TypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeExtensions(TypeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::TypeExtensions, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::TypeExtensions*, "Newtonsoft.Json.Utilities", "TypeExtensions");
