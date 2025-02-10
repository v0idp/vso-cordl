#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IJwtDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IJwtDecoder)
// Forward declare root types
namespace Unity::Services::Authentication {
class IJwtDecoder;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IJwtDecoder);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IJwtDecoder
class CORDL_TYPE IJwtDecoder {
public:
// Declarations
/// @brief Method Decode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline T Decode(::StringW  token) ;

// Ctor Parameters [CppParam { name: "", ty: "IJwtDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJwtDecoder(IJwtDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11586};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IJwtDecoder);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IJwtDecoder*, "Unity.Services.Authentication", "IJwtDecoder");
