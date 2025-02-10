#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/IAttributeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAttributeProvider)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IAttributeProvider;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::IAttributeProvider);
// Dependencies 
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.IAttributeProvider
class CORDL_TYPE IAttributeProvider {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IAttributeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAttributeProvider(IAttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9811};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IAttributeProvider*, "Newtonsoft.Json.Serialization", "IAttributeProvider");
