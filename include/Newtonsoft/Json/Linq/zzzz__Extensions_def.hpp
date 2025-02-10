#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions);
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline U Convert(T  token) ;

/// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
static inline U Value(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  value) ;

/// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline U Value(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9860};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::Extensions, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::Extensions*, "Newtonsoft.Json.Linq", "Extensions");
