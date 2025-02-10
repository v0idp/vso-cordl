#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ReflectionAttributeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__IAttributeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionAttributeProvider)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ReflectionAttributeProvider;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider);
// Dependencies Newtonsoft.Json.Serialization.IAttributeProvider, System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.ReflectionAttributeProvider
class CORDL_TYPE ReflectionAttributeProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _attributeProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributeProvider, put=__cordl_internal_set__attributeProvider)) ::System::Object*  _attributeProvider;

/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr operator  ::Newtonsoft::Json::Serialization::IAttributeProvider*() noexcept;

static inline ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider* New_ctor(::System::Object*  attributeProvider) ;

constexpr ::System::Object* const& __cordl_internal_get__attributeProvider() const;

constexpr ::System::Object*& __cordl_internal_get__attributeProvider() ;

constexpr void __cordl_internal_set__attributeProvider(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x281d0f0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  attributeProvider) ;

/// @brief Convert to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr ::Newtonsoft::Json::Serialization::IAttributeProvider* i___Newtonsoft__Json__Serialization__IAttributeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionAttributeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionAttributeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionAttributeProvider(ReflectionAttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionAttributeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionAttributeProvider(ReflectionAttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9853};

/// @brief Field _attributeProvider, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____attributeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider, ____attributeProvider) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*, "Newtonsoft.Json.Serialization", "ReflectionAttributeProvider");
