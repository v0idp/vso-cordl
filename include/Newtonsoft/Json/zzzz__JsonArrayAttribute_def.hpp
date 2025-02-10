#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonArrayAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
CORDL_MODULE_EXPORT(JsonArrayAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonArrayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonArrayAttribute);
// Dependencies Newtonsoft.Json.JsonContainerAttribute
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonArrayAttribute
class CORDL_TYPE JsonArrayAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonArrayAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonArrayAttribute(JsonArrayAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonArrayAttribute(JsonArrayAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9659};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonArrayAttribute, 0x50>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonArrayAttribute*, "Newtonsoft.Json", "JsonArrayAttribute");
