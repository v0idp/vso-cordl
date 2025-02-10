#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Shared/OpenAPIDateConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__IsoDateTimeConverter_def.hpp"
CORDL_MODULE_EXPORT(OpenAPIDateConverter)
// Forward declare root types
namespace Unity::Services::Authentication::Shared {
class OpenAPIDateConverter;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Shared::OpenAPIDateConverter);
// Dependencies Newtonsoft.Json.Converters.IsoDateTimeConverter
namespace Unity::Services::Authentication::Shared {
// Is value type: false
// CS Name: Unity.Services.Authentication.Shared.OpenAPIDateConverter
class CORDL_TYPE OpenAPIDateConverter : public ::Newtonsoft::Json::Converters::IsoDateTimeConverter {
public:
// Declarations
static inline ::Unity::Services::Authentication::Shared::OpenAPIDateConverter* New_ctor() ;

/// @brief Method .ctor, addr 0x2e9a3a4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenAPIDateConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenAPIDateConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenAPIDateConverter(OpenAPIDateConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenAPIDateConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenAPIDateConverter(OpenAPIDateConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::Shared::OpenAPIDateConverter, 0x28>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication::Shared
NEED_NO_BOX(::Unity::Services::Authentication::Shared::OpenAPIDateConverter);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Shared::OpenAPIDateConverter*, "Unity.Services.Authentication.Shared", "OpenAPIDateConverter");
